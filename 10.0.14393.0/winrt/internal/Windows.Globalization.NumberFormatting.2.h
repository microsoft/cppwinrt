// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.NumberFormatting.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif

#ifndef WINRT_GENERIC_4dda9e24_e69f_5c6a_a0a6_93427365af2a
#define WINRT_GENERIC_4dda9e24_e69f_5c6a_a0a6_93427365af2a
template <> struct __declspec(uuid("4dda9e24-e69f-5c6a-a0a6-93427365af2a")) __declspec(novtable) IReference<int64_t> : impl_IReference<int64_t> {};
#endif

#ifndef WINRT_GENERIC_6755e376_53bb_568b_a11d_17239868309e
#define WINRT_GENERIC_6755e376_53bb_568b_a11d_17239868309e
template <> struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e")) __declspec(novtable) IReference<uint64_t> : impl_IReference<uint64_t> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace Windows::Globalization::NumberFormatting {

template <typename D>
struct WINRT_EBO impl_ICurrencyFormatter
{
    hstring Currency() const;
    void Currency(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_ICurrencyFormatter2
{
    Windows::Globalization::NumberFormatting::CurrencyFormatterMode Mode() const;
    void Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode value) const;
    void ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm roundingAlgorithm) const;
};

template <typename D>
struct WINRT_EBO impl_ICurrencyFormatterFactory
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter CreateCurrencyFormatterCode(hstring_ref currencyCode) const;
    Windows::Globalization::NumberFormatting::CurrencyFormatter CreateCurrencyFormatterCodeContext(hstring_ref currencyCode, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const;
};

template <typename D>
struct WINRT_EBO impl_IDecimalFormatterFactory
{
    Windows::Globalization::NumberFormatting::DecimalFormatter CreateDecimalFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const;
};

template <typename D>
struct WINRT_EBO impl_IIncrementNumberRounder
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm RoundingAlgorithm() const;
    void RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) const;
    double Increment() const;
    void Increment(double value) const;
};

template <typename D>
struct WINRT_EBO impl_INumberFormatter
{
    hstring Format(int64_t value) const;
    hstring Format(uint64_t value) const;
    hstring Format(double value) const;
};

template <typename D>
struct WINRT_EBO impl_INumberFormatter2
{
    hstring FormatInt(int64_t value) const;
    hstring FormatUInt(uint64_t value) const;
    hstring FormatDouble(double value) const;
};

template <typename D>
struct WINRT_EBO impl_INumberFormatterOptions
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
    void NumeralSystem(hstring_ref value) const;
    hstring ResolvedLanguage() const;
    hstring ResolvedGeographicRegion() const;
};

template <typename D>
struct WINRT_EBO impl_INumberParser
{
    Windows::Foundation::IReference<int64_t> ParseInt(hstring_ref text) const;
    Windows::Foundation::IReference<uint64_t> ParseUInt(hstring_ref text) const;
    Windows::Foundation::IReference<double> ParseDouble(hstring_ref text) const;
};

template <typename D>
struct WINRT_EBO impl_INumberRounder
{
    int32_t RoundInt32(int32_t value) const;
    uint32_t RoundUInt32(uint32_t value) const;
    int64_t RoundInt64(int64_t value) const;
    uint64_t RoundUInt64(uint64_t value) const;
    float RoundSingle(float value) const;
    double RoundDouble(double value) const;
};

template <typename D>
struct WINRT_EBO impl_INumberRounderOption
{
    Windows::Globalization::NumberFormatting::INumberRounder NumberRounder() const;
    void NumberRounder(const Windows::Globalization::NumberFormatting::INumberRounder & value) const;
};

template <typename D>
struct WINRT_EBO impl_INumeralSystemTranslator
{
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring ResolvedLanguage() const;
    hstring NumeralSystem() const;
    void NumeralSystem(hstring_ref value) const;
    hstring TranslateNumerals(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_INumeralSystemTranslatorFactory
{
    Windows::Globalization::NumberFormatting::NumeralSystemTranslator Create(const Windows::Foundation::Collections::IIterable<hstring> & languages) const;
};

template <typename D>
struct WINRT_EBO impl_IPercentFormatterFactory
{
    Windows::Globalization::NumberFormatting::PercentFormatter CreatePercentFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const;
};

template <typename D>
struct WINRT_EBO impl_IPermilleFormatterFactory
{
    Windows::Globalization::NumberFormatting::PermilleFormatter CreatePermilleFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const;
};

template <typename D>
struct WINRT_EBO impl_ISignedZeroOption
{
    bool IsZeroSigned() const;
    void IsZeroSigned(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ISignificantDigitsNumberRounder
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm RoundingAlgorithm() const;
    void RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) const;
    uint32_t SignificantDigits() const;
    void SignificantDigits(uint32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_ISignificantDigitsOption
{
    int32_t SignificantDigits() const;
    void SignificantDigits(int32_t value) const;
};

struct ICurrencyFormatter :
    Windows::IInspectable,
    impl::consume<ICurrencyFormatter>,
    impl::require<ICurrencyFormatter, Windows::Globalization::NumberFormatting::INumberFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser>
{
    ICurrencyFormatter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrencyFormatter>(m_ptr); }
};

struct ICurrencyFormatter2 :
    Windows::IInspectable,
    impl::consume<ICurrencyFormatter2>
{
    ICurrencyFormatter2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrencyFormatter2>(m_ptr); }
};

struct ICurrencyFormatterFactory :
    Windows::IInspectable,
    impl::consume<ICurrencyFormatterFactory>
{
    ICurrencyFormatterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrencyFormatterFactory>(m_ptr); }
};

struct IDecimalFormatterFactory :
    Windows::IInspectable,
    impl::consume<IDecimalFormatterFactory>
{
    IDecimalFormatterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDecimalFormatterFactory>(m_ptr); }
};

struct IIncrementNumberRounder :
    Windows::IInspectable,
    impl::consume<IIncrementNumberRounder>
{
    IIncrementNumberRounder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IIncrementNumberRounder>(m_ptr); }
};

struct INumberFormatter :
    Windows::IInspectable,
    impl::consume<INumberFormatter>
{
    INumberFormatter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberFormatter>(m_ptr); }
};

struct INumberFormatter2 :
    Windows::IInspectable,
    impl::consume<INumberFormatter2>
{
    INumberFormatter2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberFormatter2>(m_ptr); }
};

struct INumberFormatterOptions :
    Windows::IInspectable,
    impl::consume<INumberFormatterOptions>
{
    INumberFormatterOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberFormatterOptions>(m_ptr); }
};

struct INumberParser :
    Windows::IInspectable,
    impl::consume<INumberParser>
{
    INumberParser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberParser>(m_ptr); }
};

struct INumberRounder :
    Windows::IInspectable,
    impl::consume<INumberRounder>
{
    INumberRounder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberRounder>(m_ptr); }
};

struct INumberRounderOption :
    Windows::IInspectable,
    impl::consume<INumberRounderOption>
{
    INumberRounderOption(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumberRounderOption>(m_ptr); }
};

struct INumeralSystemTranslator :
    Windows::IInspectable,
    impl::consume<INumeralSystemTranslator>
{
    INumeralSystemTranslator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumeralSystemTranslator>(m_ptr); }
};

struct INumeralSystemTranslatorFactory :
    Windows::IInspectable,
    impl::consume<INumeralSystemTranslatorFactory>
{
    INumeralSystemTranslatorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumeralSystemTranslatorFactory>(m_ptr); }
};

struct IPercentFormatterFactory :
    Windows::IInspectable,
    impl::consume<IPercentFormatterFactory>
{
    IPercentFormatterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPercentFormatterFactory>(m_ptr); }
};

struct IPermilleFormatterFactory :
    Windows::IInspectable,
    impl::consume<IPermilleFormatterFactory>
{
    IPermilleFormatterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPermilleFormatterFactory>(m_ptr); }
};

struct ISignedZeroOption :
    Windows::IInspectable,
    impl::consume<ISignedZeroOption>
{
    ISignedZeroOption(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISignedZeroOption>(m_ptr); }
};

struct ISignificantDigitsNumberRounder :
    Windows::IInspectable,
    impl::consume<ISignificantDigitsNumberRounder>
{
    ISignificantDigitsNumberRounder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISignificantDigitsNumberRounder>(m_ptr); }
};

struct ISignificantDigitsOption :
    Windows::IInspectable,
    impl::consume<ISignificantDigitsOption>
{
    ISignificantDigitsOption(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISignificantDigitsOption>(m_ptr); }
};

}

}
