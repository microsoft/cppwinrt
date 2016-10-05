// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Globalization.NumberFormatting.3.h"
#include "Windows.Globalization.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter>
{
    HRESULT __stdcall get_Currency(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Currency());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Currency(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Currency(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm roundingAlgorithm) noexcept override
    {
        try
        {
            this->shim().ApplyRoundingForCurrency(roundingAlgorithm);
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
    HRESULT __stdcall abi_CreateCurrencyFormatterCode(abi_arg_in<hstring> currencyCode, abi_arg_out<Windows::Globalization::NumberFormatting::ICurrencyFormatter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCurrencyFormatterCode(*reinterpret_cast<const hstring *>(&currencyCode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCurrencyFormatterCodeContext(abi_arg_in<hstring> currencyCode, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_out<Windows::Globalization::NumberFormatting::ICurrencyFormatter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCurrencyFormatterCodeContext(*reinterpret_cast<const hstring *>(&currencyCode), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion)));
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
    HRESULT __stdcall abi_CreateDecimalFormatter(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_out<Windows::Globalization::NumberFormatting::INumberFormatter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateDecimalFormatter(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion)));
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
    HRESULT __stdcall get_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoundingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) noexcept override
    {
        try
        {
            this->shim().RoundingAlgorithm(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Increment(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Increment());
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
    HRESULT __stdcall abi_FormatInt(int64_t value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Format(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatUInt(uint64_t value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Format(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatDouble(double value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Format(value));
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
    HRESULT __stdcall abi_FormatInt(int64_t value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatInt(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatUInt(uint64_t value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatUInt(value));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatDouble(double value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatDouble(value));
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
    HRESULT __stdcall get_Languages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntegerDigits(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IntegerDigits());
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
            this->shim().IntegerDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FractionDigits(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FractionDigits());
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
            this->shim().FractionDigits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrouped(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGrouped());
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
            this->shim().IsGrouped(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecimalPointAlwaysDisplayed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDecimalPointAlwaysDisplayed());
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
            this->shim().IsDecimalPointAlwaysDisplayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralSystem(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumeralSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumeralSystem(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().NumeralSystem(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedGeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedGeographicRegion());
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
    HRESULT __stdcall abi_ParseInt(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::IReference<int64_t>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ParseInt(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ParseUInt(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::IReference<uint64_t>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ParseUInt(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ParseDouble(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::IReference<double>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ParseDouble(*reinterpret_cast<const hstring *>(&text)));
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
    HRESULT __stdcall abi_RoundInt32(int32_t value, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundInt32(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RoundUInt32(uint32_t value, uint32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundUInt32(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RoundInt64(int64_t value, int64_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundInt64(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RoundUInt64(uint64_t value, uint64_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundUInt64(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RoundSingle(float value, float * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundSingle(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RoundDouble(double value, double * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RoundDouble(value));
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
    HRESULT __stdcall get_NumberRounder(abi_arg_out<Windows::Globalization::NumberFormatting::INumberRounder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberRounder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumberRounder(abi_arg_in<Windows::Globalization::NumberFormatting::INumberRounder> value) noexcept override
    {
        try
        {
            this->shim().NumberRounder(*reinterpret_cast<const Windows::Globalization::NumberFormatting::INumberRounder *>(&value));
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
    HRESULT __stdcall get_Languages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralSystem(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumeralSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumeralSystem(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().NumeralSystem(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TranslateNumerals(abi_arg_in<hstring> value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TranslateNumerals(*reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_out<Windows::Globalization::NumberFormatting::INumeralSystemTranslator> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages)));
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
    HRESULT __stdcall abi_CreatePercentFormatter(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_out<Windows::Globalization::NumberFormatting::INumberFormatter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreatePercentFormatter(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion)));
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
    HRESULT __stdcall abi_CreatePermilleFormatter(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_out<Windows::Globalization::NumberFormatting::INumberFormatter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreatePermilleFormatter(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion)));
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
    HRESULT __stdcall get_IsZeroSigned(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsZeroSigned());
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
    HRESULT __stdcall get_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoundingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) noexcept override
    {
        try
        {
            this->shim().RoundingAlgorithm(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantDigits(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignificantDigits());
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
    HRESULT __stdcall get_SignificantDigits(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignificantDigits());
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

namespace Windows::Globalization::NumberFormatting {

template <typename D> int32_t impl_INumberRounder<D>::RoundInt32(int32_t value) const
{
    int32_t result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundInt32(value, &result));
    return result;
}

template <typename D> uint32_t impl_INumberRounder<D>::RoundUInt32(uint32_t value) const
{
    uint32_t result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundUInt32(value, &result));
    return result;
}

template <typename D> int64_t impl_INumberRounder<D>::RoundInt64(int64_t value) const
{
    int64_t result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundInt64(value, &result));
    return result;
}

template <typename D> uint64_t impl_INumberRounder<D>::RoundUInt64(uint64_t value) const
{
    uint64_t result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundUInt64(value, &result));
    return result;
}

template <typename D> float impl_INumberRounder<D>::RoundSingle(float value) const
{
    float result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundSingle(value, &result));
    return result;
}

template <typename D> double impl_INumberRounder<D>::RoundDouble(double value) const
{
    double result {};
    check_hresult(static_cast<const INumberRounder &>(static_cast<const D &>(*this))->abi_RoundDouble(value, &result));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm impl_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value {};
    check_hresult(static_cast<const ISignificantDigitsNumberRounder &>(static_cast<const D &>(*this))->get_RoundingAlgorithm(&value));
    return value;
}

template <typename D> void impl_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) const
{
    check_hresult(static_cast<const ISignificantDigitsNumberRounder &>(static_cast<const D &>(*this))->put_RoundingAlgorithm(value));
}

template <typename D> uint32_t impl_ISignificantDigitsNumberRounder<D>::SignificantDigits() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISignificantDigitsNumberRounder &>(static_cast<const D &>(*this))->get_SignificantDigits(&value));
    return value;
}

template <typename D> void impl_ISignificantDigitsNumberRounder<D>::SignificantDigits(uint32_t value) const
{
    check_hresult(static_cast<const ISignificantDigitsNumberRounder &>(static_cast<const D &>(*this))->put_SignificantDigits(value));
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm impl_IIncrementNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value {};
    check_hresult(static_cast<const IIncrementNumberRounder &>(static_cast<const D &>(*this))->get_RoundingAlgorithm(&value));
    return value;
}

template <typename D> void impl_IIncrementNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) const
{
    check_hresult(static_cast<const IIncrementNumberRounder &>(static_cast<const D &>(*this))->put_RoundingAlgorithm(value));
}

template <typename D> double impl_IIncrementNumberRounder<D>::Increment() const
{
    double value {};
    check_hresult(static_cast<const IIncrementNumberRounder &>(static_cast<const D &>(*this))->get_Increment(&value));
    return value;
}

template <typename D> void impl_IIncrementNumberRounder<D>::Increment(double value) const
{
    check_hresult(static_cast<const IIncrementNumberRounder &>(static_cast<const D &>(*this))->put_Increment(value));
}

template <typename D> hstring impl_INumberFormatter<D>::Format(int64_t value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter &>(static_cast<const D &>(*this))->abi_FormatInt(value, put(result)));
    return result;
}

template <typename D> hstring impl_INumberFormatter<D>::Format(uint64_t value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter &>(static_cast<const D &>(*this))->abi_FormatUInt(value, put(result)));
    return result;
}

template <typename D> hstring impl_INumberFormatter<D>::Format(double value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter &>(static_cast<const D &>(*this))->abi_FormatDouble(value, put(result)));
    return result;
}

template <typename D> hstring impl_INumberFormatter2<D>::FormatInt(int64_t value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter2 &>(static_cast<const D &>(*this))->abi_FormatInt(value, put(result)));
    return result;
}

template <typename D> hstring impl_INumberFormatter2<D>::FormatUInt(uint64_t value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter2 &>(static_cast<const D &>(*this))->abi_FormatUInt(value, put(result)));
    return result;
}

template <typename D> hstring impl_INumberFormatter2<D>::FormatDouble(double value) const
{
    hstring result;
    check_hresult(static_cast<const INumberFormatter2 &>(static_cast<const D &>(*this))->abi_FormatDouble(value, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<int64_t> impl_INumberParser<D>::ParseInt(hstring_ref text) const
{
    Windows::Foundation::IReference<int64_t> result;
    check_hresult(static_cast<const INumberParser &>(static_cast<const D &>(*this))->abi_ParseInt(get(text), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_INumberParser<D>::ParseUInt(hstring_ref text) const
{
    Windows::Foundation::IReference<uint64_t> result;
    check_hresult(static_cast<const INumberParser &>(static_cast<const D &>(*this))->abi_ParseUInt(get(text), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<double> impl_INumberParser<D>::ParseDouble(hstring_ref text) const
{
    Windows::Foundation::IReference<double> result;
    check_hresult(static_cast<const INumberParser &>(static_cast<const D &>(*this))->abi_ParseDouble(get(text), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_INumberFormatterOptions<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> hstring impl_INumberFormatterOptions<D>::GeographicRegion() const
{
    hstring value;
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_GeographicRegion(put(value)));
    return value;
}

template <typename D> int32_t impl_INumberFormatterOptions<D>::IntegerDigits() const
{
    int32_t value {};
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_IntegerDigits(&value));
    return value;
}

template <typename D> void impl_INumberFormatterOptions<D>::IntegerDigits(int32_t value) const
{
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->put_IntegerDigits(value));
}

template <typename D> int32_t impl_INumberFormatterOptions<D>::FractionDigits() const
{
    int32_t value {};
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_FractionDigits(&value));
    return value;
}

template <typename D> void impl_INumberFormatterOptions<D>::FractionDigits(int32_t value) const
{
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->put_FractionDigits(value));
}

template <typename D> bool impl_INumberFormatterOptions<D>::IsGrouped() const
{
    bool value {};
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_IsGrouped(&value));
    return value;
}

template <typename D> void impl_INumberFormatterOptions<D>::IsGrouped(bool value) const
{
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->put_IsGrouped(value));
}

template <typename D> bool impl_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed() const
{
    bool value {};
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_IsDecimalPointAlwaysDisplayed(&value));
    return value;
}

template <typename D> void impl_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed(bool value) const
{
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->put_IsDecimalPointAlwaysDisplayed(value));
}

template <typename D> hstring impl_INumberFormatterOptions<D>::NumeralSystem() const
{
    hstring value;
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_NumeralSystem(put(value)));
    return value;
}

template <typename D> void impl_INumberFormatterOptions<D>::NumeralSystem(hstring_ref value) const
{
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->put_NumeralSystem(get(value)));
}

template <typename D> hstring impl_INumberFormatterOptions<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> hstring impl_INumberFormatterOptions<D>::ResolvedGeographicRegion() const
{
    hstring value;
    check_hresult(static_cast<const INumberFormatterOptions &>(static_cast<const D &>(*this))->get_ResolvedGeographicRegion(put(value)));
    return value;
}

template <typename D> int32_t impl_ISignificantDigitsOption<D>::SignificantDigits() const
{
    int32_t value {};
    check_hresult(static_cast<const ISignificantDigitsOption &>(static_cast<const D &>(*this))->get_SignificantDigits(&value));
    return value;
}

template <typename D> void impl_ISignificantDigitsOption<D>::SignificantDigits(int32_t value) const
{
    check_hresult(static_cast<const ISignificantDigitsOption &>(static_cast<const D &>(*this))->put_SignificantDigits(value));
}

template <typename D> Windows::Globalization::NumberFormatting::INumberRounder impl_INumberRounderOption<D>::NumberRounder() const
{
    Windows::Globalization::NumberFormatting::INumberRounder value;
    check_hresult(static_cast<const INumberRounderOption &>(static_cast<const D &>(*this))->get_NumberRounder(put(value)));
    return value;
}

template <typename D> void impl_INumberRounderOption<D>::NumberRounder(const Windows::Globalization::NumberFormatting::INumberRounder & value) const
{
    check_hresult(static_cast<const INumberRounderOption &>(static_cast<const D &>(*this))->put_NumberRounder(get(value)));
}

template <typename D> bool impl_ISignedZeroOption<D>::IsZeroSigned() const
{
    bool value {};
    check_hresult(static_cast<const ISignedZeroOption &>(static_cast<const D &>(*this))->get_IsZeroSigned(&value));
    return value;
}

template <typename D> void impl_ISignedZeroOption<D>::IsZeroSigned(bool value) const
{
    check_hresult(static_cast<const ISignedZeroOption &>(static_cast<const D &>(*this))->put_IsZeroSigned(value));
}

template <typename D> Windows::Globalization::NumberFormatting::DecimalFormatter impl_IDecimalFormatterFactory<D>::CreateDecimalFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const
{
    Windows::Globalization::NumberFormatting::DecimalFormatter result { nullptr };
    check_hresult(static_cast<const IDecimalFormatterFactory &>(static_cast<const D &>(*this))->abi_CreateDecimalFormatter(get(languages), get(geographicRegion), put(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PercentFormatter impl_IPercentFormatterFactory<D>::CreatePercentFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PercentFormatter result { nullptr };
    check_hresult(static_cast<const IPercentFormatterFactory &>(static_cast<const D &>(*this))->abi_CreatePercentFormatter(get(languages), get(geographicRegion), put(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PermilleFormatter impl_IPermilleFormatterFactory<D>::CreatePermilleFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PermilleFormatter result { nullptr };
    check_hresult(static_cast<const IPermilleFormatterFactory &>(static_cast<const D &>(*this))->abi_CreatePermilleFormatter(get(languages), get(geographicRegion), put(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter impl_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCode(hstring_ref currencyCode) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result { nullptr };
    check_hresult(static_cast<const ICurrencyFormatterFactory &>(static_cast<const D &>(*this))->abi_CreateCurrencyFormatterCode(get(currencyCode), put(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter impl_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCodeContext(hstring_ref currencyCode, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result { nullptr };
    check_hresult(static_cast<const ICurrencyFormatterFactory &>(static_cast<const D &>(*this))->abi_CreateCurrencyFormatterCodeContext(get(currencyCode), get(languages), get(geographicRegion), put(result)));
    return result;
}

template <typename D> hstring impl_ICurrencyFormatter<D>::Currency() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyFormatter &>(static_cast<const D &>(*this))->get_Currency(put(value)));
    return value;
}

template <typename D> void impl_ICurrencyFormatter<D>::Currency(hstring_ref value) const
{
    check_hresult(static_cast<const ICurrencyFormatter &>(static_cast<const D &>(*this))->put_Currency(get(value)));
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatterMode impl_ICurrencyFormatter2<D>::Mode() const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatterMode value {};
    check_hresult(static_cast<const ICurrencyFormatter2 &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_ICurrencyFormatter2<D>::Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode value) const
{
    check_hresult(static_cast<const ICurrencyFormatter2 &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> void impl_ICurrencyFormatter2<D>::ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm roundingAlgorithm) const
{
    check_hresult(static_cast<const ICurrencyFormatter2 &>(static_cast<const D &>(*this))->abi_ApplyRoundingForCurrency(roundingAlgorithm));
}

template <typename D> Windows::Globalization::NumberFormatting::NumeralSystemTranslator impl_INumeralSystemTranslatorFactory<D>::Create(const Windows::Foundation::Collections::IIterable<hstring> & languages) const
{
    Windows::Globalization::NumberFormatting::NumeralSystemTranslator result { nullptr };
    check_hresult(static_cast<const INumeralSystemTranslatorFactory &>(static_cast<const D &>(*this))->abi_Create(get(languages), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_INumeralSystemTranslator<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const INumeralSystemTranslator &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemTranslator<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemTranslator &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemTranslator<D>::NumeralSystem() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemTranslator &>(static_cast<const D &>(*this))->get_NumeralSystem(put(value)));
    return value;
}

template <typename D> void impl_INumeralSystemTranslator<D>::NumeralSystem(hstring_ref value) const
{
    check_hresult(static_cast<const INumeralSystemTranslator &>(static_cast<const D &>(*this))->put_NumeralSystem(get(value)));
}

template <typename D> hstring impl_INumeralSystemTranslator<D>::TranslateNumerals(hstring_ref value) const
{
    hstring result;
    check_hresult(static_cast<const INumeralSystemTranslator &>(static_cast<const D &>(*this))->abi_TranslateNumerals(get(value), put(result)));
    return result;
}

inline CurrencyFormatter::CurrencyFormatter(hstring_ref currencyCode) :
    CurrencyFormatter(get_activation_factory<CurrencyFormatter, ICurrencyFormatterFactory>().CreateCurrencyFormatterCode(currencyCode))
{}

inline CurrencyFormatter::CurrencyFormatter(hstring_ref currencyCode, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) :
    CurrencyFormatter(get_activation_factory<CurrencyFormatter, ICurrencyFormatterFactory>().CreateCurrencyFormatterCodeContext(currencyCode, languages, geographicRegion))
{}

inline DecimalFormatter::DecimalFormatter() :
    DecimalFormatter(activate_instance<DecimalFormatter>())
{}

inline DecimalFormatter::DecimalFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) :
    DecimalFormatter(get_activation_factory<DecimalFormatter, IDecimalFormatterFactory>().CreateDecimalFormatter(languages, geographicRegion))
{}

inline IncrementNumberRounder::IncrementNumberRounder() :
    IncrementNumberRounder(activate_instance<IncrementNumberRounder>())
{}

inline NumeralSystemTranslator::NumeralSystemTranslator() :
    NumeralSystemTranslator(activate_instance<NumeralSystemTranslator>())
{}

inline NumeralSystemTranslator::NumeralSystemTranslator(const Windows::Foundation::Collections::IIterable<hstring> & languages) :
    NumeralSystemTranslator(get_activation_factory<NumeralSystemTranslator, INumeralSystemTranslatorFactory>().Create(languages))
{}

inline PercentFormatter::PercentFormatter() :
    PercentFormatter(activate_instance<PercentFormatter>())
{}

inline PercentFormatter::PercentFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) :
    PercentFormatter(get_activation_factory<PercentFormatter, IPercentFormatterFactory>().CreatePercentFormatter(languages, geographicRegion))
{}

inline PermilleFormatter::PermilleFormatter() :
    PermilleFormatter(activate_instance<PermilleFormatter>())
{}

inline PermilleFormatter::PermilleFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion) :
    PermilleFormatter(get_activation_factory<PermilleFormatter, IPermilleFormatterFactory>().CreatePermilleFormatter(languages, geographicRegion))
{}

inline SignificantDigitsNumberRounder::SignificantDigitsNumberRounder() :
    SignificantDigitsNumberRounder(activate_instance<SignificantDigitsNumberRounder>())
{}

}

}
