// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting {

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

namespace winrt::impl {

template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatter>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatter>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatter2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatterOptions>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberParser>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberRounder>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumberRounderOption>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::ISignedZeroOption>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>{ using type = interface_category; };
template <> struct category<Windows::Globalization::NumberFormatting::CurrencyFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::DecimalFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::IncrementNumberRounder>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::PercentFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::PermilleFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>{ using type = enum_category; };
template <> struct category<Windows::Globalization::NumberFormatting::RoundingAlgorithm>{ using type = enum_category; };
template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatter2" }; };
template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory" }; };
template <> struct name<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IDecimalFormatterFactory" }; };
template <> struct name<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IIncrementNumberRounder" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatter2>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatter2" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatterOptions>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatterOptions" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberParser>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberParser" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberRounder>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberRounder" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumberRounderOption>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberRounderOption" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumeralSystemTranslator" }; };
template <> struct name<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory" }; };
template <> struct name<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IPercentFormatterFactory" }; };
template <> struct name<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IPermilleFormatterFactory" }; };
template <> struct name<Windows::Globalization::NumberFormatting::ISignedZeroOption>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignedZeroOption" }; };
template <> struct name<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder" }; };
template <> struct name<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignificantDigitsOption" }; };
template <> struct name<Windows::Globalization::NumberFormatting::CurrencyFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.CurrencyFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::DecimalFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.DecimalFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::IncrementNumberRounder>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IncrementNumberRounder" }; };
template <> struct name<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.NumeralSystemTranslator" }; };
template <> struct name<Windows::Globalization::NumberFormatting::PercentFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.PercentFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::PermilleFormatter>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.PermilleFormatter" }; };
template <> struct name<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder" }; };
template <> struct name<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.CurrencyFormatterMode" }; };
template <> struct name<Windows::Globalization::NumberFormatting::RoundingAlgorithm>{ static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.RoundingAlgorithm" }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ICurrencyFormatter>{ static constexpr GUID value{ 0x11730CA5,0x4B00,0x41B2,{ 0xB3,0x32,0x73,0xB1,0x2A,0x49,0x7D,0x54 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>{ static constexpr GUID value{ 0x072C2F1D,0xE7BA,0x4197,{ 0x92,0x0E,0x24,0x7C,0x92,0xF7,0xDE,0xA6 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>{ static constexpr GUID value{ 0x86C7537E,0xB938,0x4AA2,{ 0x84,0xB0,0x2C,0x33,0xDC,0x5B,0x14,0x50 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>{ static constexpr GUID value{ 0x0D018C9A,0xE393,0x46B8,{ 0xB8,0x30,0x7A,0x69,0xC8,0xF8,0x9F,0xBB } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>{ static constexpr GUID value{ 0x70A64FF8,0x66AB,0x4155,{ 0x9D,0xA1,0x73,0x9E,0x46,0x76,0x45,0x43 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberFormatter>{ static constexpr GUID value{ 0xA5007C49,0x7676,0x4DB7,{ 0x86,0x31,0x1B,0x6F,0xF2,0x65,0xCA,0xA9 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberFormatter2>{ static constexpr GUID value{ 0xD4A8C1F0,0x80D0,0x4B0D,{ 0xA8,0x9E,0x88,0x2C,0x1E,0x8F,0x83,0x10 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberFormatterOptions>{ static constexpr GUID value{ 0x80332D21,0xAEE1,0x4A39,{ 0xBA,0xA2,0x07,0xED,0x8C,0x96,0xDA,0xF6 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberParser>{ static constexpr GUID value{ 0xE6659412,0x4A13,0x4A53,{ 0x83,0xA1,0x39,0x2F,0xBE,0x4C,0xFF,0x9F } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberRounder>{ static constexpr GUID value{ 0x5473C375,0x38ED,0x4631,{ 0xB8,0x0C,0xEF,0x34,0xFC,0x48,0xB7,0xF5 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumberRounderOption>{ static constexpr GUID value{ 0x3B088433,0x646F,0x4EFE,{ 0x8D,0x48,0x66,0xEB,0x2E,0x49,0xE7,0x36 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>{ static constexpr GUID value{ 0x28F5BC2C,0x8C23,0x4234,{ 0xAD,0x2E,0xFA,0x5A,0x3A,0x42,0x6E,0x9B } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>{ static constexpr GUID value{ 0x9630C8DA,0x36EF,0x4D88,{ 0xA8,0x5C,0x6F,0x0D,0x98,0xD6,0x20,0xA6 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>{ static constexpr GUID value{ 0xB7828AEF,0xFED4,0x4018,{ 0xA6,0xE2,0xE0,0x99,0x61,0xE0,0x37,0x65 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>{ static constexpr GUID value{ 0x2B37B4AC,0xE638,0x4ED5,{ 0xA9,0x98,0x62,0xF6,0xB0,0x6A,0x49,0xAE } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ISignedZeroOption>{ static constexpr GUID value{ 0xFD1CDD31,0x0A3C,0x49C4,{ 0xA6,0x42,0x96,0xA1,0x56,0x4F,0x4F,0x30 } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>{ static constexpr GUID value{ 0xF5941BCA,0x6646,0x4913,{ 0x8C,0x76,0x1B,0x19,0x1F,0xF9,0x4D,0xFD } }; };
template <> struct guid<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>{ static constexpr GUID value{ 0x1D4DFCDD,0x2D43,0x4EE8,{ 0xBB,0xF1,0xC1,0xB2,0x6A,0x71,0x1A,0x58 } }; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::CurrencyFormatter>{ using type = Windows::Globalization::NumberFormatting::ICurrencyFormatter; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::DecimalFormatter>{ using type = Windows::Globalization::NumberFormatting::INumberFormatter; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::IncrementNumberRounder>{ using type = Windows::Globalization::NumberFormatting::INumberRounder; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>{ using type = Windows::Globalization::NumberFormatting::INumeralSystemTranslator; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::PercentFormatter>{ using type = Windows::Globalization::NumberFormatting::INumberFormatter; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::PermilleFormatter>{ using type = Windows::Globalization::NumberFormatting::INumberFormatter; };
template <> struct default_interface<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>{ using type = Windows::Globalization::NumberFormatting::INumberRounder; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter
{
    hstring Currency() const;
    [[deprecated("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")]] void Currency(param::hstring const& value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatter> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2
{
    Windows::Globalization::NumberFormatting::CurrencyFormatterMode Mode() const;
    void Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode const& value) const;
    void ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& roundingAlgorithm) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatter2> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter CreateCurrencyFormatterCode(param::hstring const& currencyCode) const;
    Windows::Globalization::NumberFormatting::CurrencyFormatter CreateCurrencyFormatterCodeContext(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory
{
    Windows::Globalization::NumberFormatting::DecimalFormatter CreateDecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm RoundingAlgorithm() const;
    void RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const;
    double Increment() const;
    void Increment(double value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::IIncrementNumberRounder> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberFormatter
{
    hstring Format(int64_t value) const;
    hstring Format(uint64_t value) const;
    hstring Format(double value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatter> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberFormatter2
{
    hstring FormatInt(int64_t value) const;
    hstring FormatUInt(uint64_t value) const;
    hstring FormatDouble(double value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatter2> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions
{
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring GeographicRegion() const;
    int32_t IntegerDigits() const;
    void IntegerDigits(int32_t value) const;
    int32_t FractionDigits() const;
    void FractionDigits(int32_t value) const;
    bool IsGrouped() const;
    void IsGrouped(bool value) const;
    bool IsDecimalPointAlwaysDisplayed() const;
    void IsDecimalPointAlwaysDisplayed(bool value) const;
    hstring NumeralSystem() const;
    void NumeralSystem(param::hstring const& value) const;
    hstring ResolvedLanguage() const;
    hstring ResolvedGeographicRegion() const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatterOptions> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberParser
{
    Windows::Foundation::IReference<int64_t> ParseInt(param::hstring const& text) const;
    Windows::Foundation::IReference<uint64_t> ParseUInt(param::hstring const& text) const;
    Windows::Foundation::IReference<double> ParseDouble(param::hstring const& text) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberParser> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberParser<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberRounder
{
    int32_t RoundInt32(int32_t value) const;
    uint32_t RoundUInt32(uint32_t value) const;
    int64_t RoundInt64(int64_t value) const;
    uint64_t RoundUInt64(uint64_t value) const;
    float RoundSingle(float value) const;
    double RoundDouble(double value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberRounder> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberRounder<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumberRounderOption
{
    Windows::Globalization::NumberFormatting::INumberRounder NumberRounder() const;
    void NumberRounder(Windows::Globalization::NumberFormatting::INumberRounder const& value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumberRounderOption> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator
{
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring ResolvedLanguage() const;
    hstring NumeralSystem() const;
    void NumeralSystem(param::hstring const& value) const;
    hstring TranslateNumerals(param::hstring const& value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumeralSystemTranslator> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory
{
    Windows::Globalization::NumberFormatting::NumeralSystemTranslator Create(param::iterable<hstring> const& languages) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory
{
    Windows::Globalization::NumberFormatting::PercentFormatter CreatePercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::IPercentFormatterFactory> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory
{
    Windows::Globalization::NumberFormatting::PermilleFormatter CreatePermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ISignedZeroOption
{
    bool IsZeroSigned() const;
    void IsZeroSigned(bool value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ISignedZeroOption> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm RoundingAlgorithm() const;
    void RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const;
    uint32_t SignificantDigits() const;
    void SignificantDigits(uint32_t value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>; };

template <typename D>
struct consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption
{
    int32_t SignificantDigits() const;
    void SignificantDigits(int32_t value) const;
};
template <> struct consume<Windows::Globalization::NumberFormatting::ISignificantDigitsOption> { template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>; };

template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Currency(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Currency(HSTRING value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Globalization::NumberFormatting::CurrencyFormatterMode> value) = 0;
    virtual HRESULT __stdcall ApplyRoundingForCurrency(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> roundingAlgorithm) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCurrencyFormatterCode(HSTRING currencyCode, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateCurrencyFormatterCodeContext(HSTRING currencyCode, ::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDecimalFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm>* value) = 0;
    virtual HRESULT __stdcall put_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> value) = 0;
    virtual HRESULT __stdcall get_Increment(double* value) = 0;
    virtual HRESULT __stdcall put_Increment(double value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FormatInt(int64_t value, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatUInt(uint64_t value, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatDouble(double value, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FormatInt(int64_t value, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatUInt(uint64_t value, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatDouble(double value, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatterOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GeographicRegion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IntegerDigits(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IntegerDigits(int32_t value) = 0;
    virtual HRESULT __stdcall get_FractionDigits(int32_t* value) = 0;
    virtual HRESULT __stdcall put_FractionDigits(int32_t value) = 0;
    virtual HRESULT __stdcall get_IsGrouped(bool* value) = 0;
    virtual HRESULT __stdcall put_IsGrouped(bool value) = 0;
    virtual HRESULT __stdcall get_IsDecimalPointAlwaysDisplayed(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDecimalPointAlwaysDisplayed(bool value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ResolvedGeographicRegion(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberParser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ParseInt(HSTRING text, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ParseUInt(HSTRING text, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ParseDouble(HSTRING text, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberRounder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RoundInt32(int32_t value, int32_t* result) = 0;
    virtual HRESULT __stdcall RoundUInt32(uint32_t value, uint32_t* result) = 0;
    virtual HRESULT __stdcall RoundInt64(int64_t value, int64_t* result) = 0;
    virtual HRESULT __stdcall RoundUInt64(uint64_t value, uint64_t* result) = 0;
    virtual HRESULT __stdcall RoundSingle(float value, float* result) = 0;
    virtual HRESULT __stdcall RoundDouble(double value, double* result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumberRounderOption>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NumberRounder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NumberRounder(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(HSTRING value) = 0;
    virtual HRESULT __stdcall TranslateNumerals(HSTRING value, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* languages, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePercentFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePermilleFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::ISignedZeroOption>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsZeroSigned(bool* value) = 0;
    virtual HRESULT __stdcall put_IsZeroSigned(bool value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm>* value) = 0;
    virtual HRESULT __stdcall put_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> value) = 0;
    virtual HRESULT __stdcall get_SignificantDigits(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_SignificantDigits(uint32_t value) = 0;
};};

template <> struct abi<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SignificantDigits(int32_t* value) = 0;
    virtual HRESULT __stdcall put_SignificantDigits(int32_t value) = 0;
};};

}
