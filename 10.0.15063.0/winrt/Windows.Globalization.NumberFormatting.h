// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Globalization.NumberFormatting.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>::Currency() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter)->get_Currency(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>::Currency(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter)->put_Currency(get_abi(value)));
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatterMode consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::Mode() const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatterMode value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->put_Mode(get_abi(value)));
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& roundingAlgorithm) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->ApplyRoundingForCurrency(get_abi(roundingAlgorithm)));
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCode(param::hstring const& currencyCode) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory)->CreateCurrencyFormatterCode(get_abi(currencyCode), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCodeContext(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory)->CreateCurrencyFormatterCodeContext(get_abi(currencyCode), get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::DecimalFormatter consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory<D>::CreateDecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::DecimalFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IDecimalFormatterFactory)->CreateDecimalFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->get_RoundingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->put_RoundingAlgorithm(get_abi(value)));
}

template <typename D> double consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::Increment() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->get_Increment(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::Increment(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->put_Increment(value));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(int64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(uint64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatUInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(double value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatDouble(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatInt(int64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatUInt(uint64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatUInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatDouble(double value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatDouble(value, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::GeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_GeographicRegion(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IntegerDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IntegerDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IntegerDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IntegerDigits(value));
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::FractionDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_FractionDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::FractionDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_FractionDigits(value));
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsGrouped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IsGrouped(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsGrouped(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IsGrouped(value));
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IsDecimalPointAlwaysDisplayed(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IsDecimalPointAlwaysDisplayed(value));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::NumeralSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_NumeralSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::NumeralSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_NumeralSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::ResolvedGeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_ResolvedGeographicRegion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int64_t> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseInt(param::hstring const& text) const
{
    Windows::Foundation::IReference<int64_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseInt(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseUInt(param::hstring const& text) const
{
    Windows::Foundation::IReference<uint64_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseUInt(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseDouble(param::hstring const& text) const
{
    Windows::Foundation::IReference<double> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseDouble(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundInt32(int32_t value) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundInt32(value, &result));
    return result;
}

template <typename D> uint32_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundUInt32(uint32_t value) const
{
    uint32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundUInt32(value, &result));
    return result;
}

template <typename D> int64_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundInt64(int64_t value) const
{
    int64_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundInt64(value, &result));
    return result;
}

template <typename D> uint64_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundUInt64(uint64_t value) const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundUInt64(value, &result));
    return result;
}

template <typename D> float consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundSingle(float value) const
{
    float result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundSingle(value, &result));
    return result;
}

template <typename D> double consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundDouble(double value) const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundDouble(value, &result));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::INumberRounder consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>::NumberRounder() const
{
    Windows::Globalization::NumberFormatting::INumberRounder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounderOption)->get_NumberRounder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>::NumberRounder(Windows::Globalization::NumberFormatting::INumberRounder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounderOption)->put_NumberRounder(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::NumeralSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_NumeralSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::NumeralSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->put_NumeralSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::TranslateNumerals(param::hstring const& value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->TranslateNumerals(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::NumeralSystemTranslator consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory<D>::Create(param::iterable<hstring> const& languages) const
{
    Windows::Globalization::NumberFormatting::NumeralSystemTranslator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory)->Create(get_abi(languages), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PercentFormatter consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory<D>::CreatePercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PercentFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IPercentFormatterFactory)->CreatePercentFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PermilleFormatter consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory<D>::CreatePermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PermilleFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IPermilleFormatterFactory)->CreatePermilleFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>::IsZeroSigned() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignedZeroOption)->get_IsZeroSigned(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>::IsZeroSigned(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignedZeroOption)->put_IsZeroSigned(value));
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->get_RoundingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->put_RoundingAlgorithm(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::SignificantDigits() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->get_SignificantDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::SignificantDigits(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->put_SignificantDigits(value));
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>::SignificantDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsOption)->get_SignificantDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>::SignificantDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsOption)->put_SignificantDigits(value));
}

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter>
{
    HRESULT __stdcall get_Currency(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Currency());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Currency(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Currency(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter2> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Globalization::NumberFormatting::CurrencyFormatterMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Globalization::NumberFormatting::CurrencyFormatterMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ApplyRoundingForCurrency(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> roundingAlgorithm) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyRoundingForCurrency(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&roundingAlgorithm));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
{
    HRESULT __stdcall CreateCurrencyFormatterCode(HSTRING currencyCode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCurrencyFormatterCode(*reinterpret_cast<hstring const*>(&currencyCode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCurrencyFormatterCodeContext(HSTRING currencyCode, ::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCurrencyFormatterCodeContext(*reinterpret_cast<hstring const*>(&currencyCode), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
{
    HRESULT __stdcall CreateDecimalFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDecimalFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IIncrementNumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
{
    HRESULT __stdcall get_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoundingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoundingAlgorithm(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Increment(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Increment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Increment(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Increment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatter> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatter>
{
    HRESULT __stdcall FormatInt(int64_t value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Format(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatUInt(uint64_t value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Format(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatDouble(double value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Format(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatter2> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatter2>
{
    HRESULT __stdcall FormatInt(int64_t value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatInt(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatUInt(uint64_t value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatUInt(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatDouble(double value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatDouble(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatterOptions> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatterOptions>
{
    HRESULT __stdcall get_Languages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeographicRegion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntegerDigits(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IntegerDigits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IntegerDigits(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IntegerDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FractionDigits(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FractionDigits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FractionDigits(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FractionDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrouped(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGrouped());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsGrouped(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsGrouped(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecimalPointAlwaysDisplayed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDecimalPointAlwaysDisplayed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDecimalPointAlwaysDisplayed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDecimalPointAlwaysDisplayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralSystem(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumeralSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumeralSystem(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumeralSystem(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedGeographicRegion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedGeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberParser> : produce_base<D, Windows::Globalization::NumberFormatting::INumberParser>
{
    HRESULT __stdcall ParseInt(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ParseInt(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ParseUInt(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ParseUInt(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ParseDouble(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ParseDouble(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::INumberRounder>
{
    HRESULT __stdcall RoundInt32(int32_t value, int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundInt32(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoundUInt32(uint32_t value, uint32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundUInt32(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoundInt64(int64_t value, int64_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundInt64(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoundUInt64(uint64_t value, uint64_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundUInt64(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoundSingle(float value, float* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundSingle(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RoundDouble(double value, double* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RoundDouble(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberRounderOption> : produce_base<D, Windows::Globalization::NumberFormatting::INumberRounderOption>
{
    HRESULT __stdcall get_NumberRounder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberRounder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumberRounder(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumberRounder(*reinterpret_cast<Windows::Globalization::NumberFormatting::INumberRounder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslator> : produce_base<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
{
    HRESULT __stdcall get_Languages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralSystem(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumeralSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumeralSystem(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumeralSystem(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TranslateNumerals(HSTRING value, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TranslateNumerals(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> : produce_base<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
{
    HRESULT __stdcall Create(::IUnknown* languages, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IPercentFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
{
    HRESULT __stdcall CreatePercentFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePercentFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
{
    HRESULT __stdcall CreatePermilleFormatter(::IUnknown* languages, HSTRING geographicRegion, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePermilleFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignedZeroOption> : produce_base<D, Windows::Globalization::NumberFormatting::ISignedZeroOption>
{
    HRESULT __stdcall get_IsZeroSigned(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsZeroSigned());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsZeroSigned(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsZeroSigned(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
{
    HRESULT __stdcall get_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoundingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoundingAlgorithm(abi_t<Windows::Globalization::NumberFormatting::RoundingAlgorithm> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoundingAlgorithm(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantDigits(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignificantDigits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SignificantDigits(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignificantDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignificantDigitsOption> : produce_base<D, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    HRESULT __stdcall get_SignificantDigits(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignificantDigits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SignificantDigits(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignificantDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting {

inline CurrencyFormatter::CurrencyFormatter(param::hstring const& currencyCode) :
    CurrencyFormatter(get_activation_factory<CurrencyFormatter, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>().CreateCurrencyFormatterCode(currencyCode))
{}

inline CurrencyFormatter::CurrencyFormatter(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    CurrencyFormatter(get_activation_factory<CurrencyFormatter, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>().CreateCurrencyFormatterCodeContext(currencyCode, languages, geographicRegion))
{}

inline DecimalFormatter::DecimalFormatter() :
    DecimalFormatter(activate_instance<DecimalFormatter>())
{}

inline DecimalFormatter::DecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    DecimalFormatter(get_activation_factory<DecimalFormatter, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>().CreateDecimalFormatter(languages, geographicRegion))
{}

inline IncrementNumberRounder::IncrementNumberRounder() :
    IncrementNumberRounder(activate_instance<IncrementNumberRounder>())
{}

inline NumeralSystemTranslator::NumeralSystemTranslator() :
    NumeralSystemTranslator(activate_instance<NumeralSystemTranslator>())
{}

inline NumeralSystemTranslator::NumeralSystemTranslator(param::iterable<hstring> const& languages) :
    NumeralSystemTranslator(get_activation_factory<NumeralSystemTranslator, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>().Create(languages))
{}

inline PercentFormatter::PercentFormatter() :
    PercentFormatter(activate_instance<PercentFormatter>())
{}

inline PercentFormatter::PercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    PercentFormatter(get_activation_factory<PercentFormatter, Windows::Globalization::NumberFormatting::IPercentFormatterFactory>().CreatePercentFormatter(languages, geographicRegion))
{}

inline PermilleFormatter::PermilleFormatter() :
    PermilleFormatter(activate_instance<PermilleFormatter>())
{}

inline PermilleFormatter::PermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    PermilleFormatter(get_activation_factory<PermilleFormatter, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>().CreatePermilleFormatter(languages, geographicRegion))
{}

inline SignificantDigitsNumberRounder::SignificantDigitsNumberRounder() :
    SignificantDigitsNumberRounder(activate_instance<SignificantDigitsNumberRounder>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter2> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IIncrementNumberRounder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::IIncrementNumberRounder> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberFormatter2> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberParser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberParser> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberRounder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberRounder> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberRounderOption> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumberRounderOption> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IPercentFormatterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::IPercentFormatterFactory> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::CurrencyFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::CurrencyFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::DecimalFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::DecimalFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IncrementNumberRounder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::IncrementNumberRounder> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::NumeralSystemTranslator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::NumeralSystemTranslator> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::PercentFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::PercentFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::PermilleFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::PermilleFormatter> {};

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder> {};

}

WINRT_WARNING_POP
