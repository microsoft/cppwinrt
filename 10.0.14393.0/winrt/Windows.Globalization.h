// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Globalization.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::IApplicationLanguagesStatics> : produce_base<D, Windows::Globalization::IApplicationLanguagesStatics>
{
    HRESULT __stdcall get_PrimaryLanguageOverride(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrimaryLanguageOverride());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryLanguageOverride(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PrimaryLanguageOverride(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_ManifestLanguages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManifestLanguages());
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
struct produce<D, Windows::Globalization::ICalendar> : produce_base<D, Windows::Globalization::ICalendar>
{
    HRESULT __stdcall abi_Clone(abi_arg_out<Windows::Globalization::ICalendar> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetToMin() noexcept override
    {
        try
        {
            this->shim().SetToMin();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetToMax() noexcept override
    {
        try
        {
            this->shim().SetToMax();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall abi_GetCalendarSystem(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCalendarSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeCalendarSystem(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ChangeCalendarSystem(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClock(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetClock());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeClock(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ChangeClock(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDateTime(abi_arg_out<Windows::Foundation::DateTime> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDateTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().SetDateTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetToNow() noexcept override
    {
        try
        {
            this->shim().SetToNow();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstEra(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastEra(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfEras(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfEras());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Era(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Era());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Era(int32_t value) noexcept override
    {
        try
        {
            this->shim().Era(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEras(int32_t eras) noexcept override
    {
        try
        {
            this->shim().AddEras(eras);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EraAsFullString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().EraAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EraAsString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().EraAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstYearInThisEra(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstYearInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastYearInThisEra(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastYearInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfYearsInThisEra(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfYearsInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Year());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Year(int32_t value) noexcept override
    {
        try
        {
            this->shim().Year(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddYears(int32_t years) noexcept override
    {
        try
        {
            this->shim().AddYears(years);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_YearAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().YearAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_YearAsTruncatedString(int32_t remainingDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().YearAsTruncatedString(remainingDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_YearAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().YearAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstMonthInThisYear(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstMonthInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastMonthInThisYear(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastMonthInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfMonthsInThisYear(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfMonthsInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Month());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Month(int32_t value) noexcept override
    {
        try
        {
            this->shim().Month(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddMonths(int32_t months) noexcept override
    {
        try
        {
            this->shim().AddMonths(months);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsFullString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsFullSoloString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsSoloString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsSoloString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsSoloString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsNumericString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsNumericString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MonthAsPaddedNumericString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MonthAsPaddedNumericString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddWeeks(int32_t weeks) noexcept override
    {
        try
        {
            this->shim().AddWeeks(weeks);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstDayInThisMonth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstDayInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastDayInThisMonth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastDayInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfDaysInThisMonth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfDaysInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Day(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Day(int32_t value) noexcept override
    {
        try
        {
            this->shim().Day(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDays(int32_t days) noexcept override
    {
        try
        {
            this->shim().AddDays(days);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DayOfWeek(Windows::Globalization::DayOfWeek * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DayOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayOfWeekAsFullString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayOfWeekAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayOfWeekAsString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayOfWeekAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayOfWeekAsFullSoloString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayOfWeekAsSoloString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DayOfWeekAsSoloString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DayOfWeekAsSoloString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstPeriodInThisDay(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstPeriodInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastPeriodInThisDay(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastPeriodInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfPeriodsInThisDay(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfPeriodsInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Period(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Period(int32_t value) noexcept override
    {
        try
        {
            this->shim().Period(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPeriods(int32_t periods) noexcept override
    {
        try
        {
            this->shim().AddPeriods(periods);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PeriodAsFullString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PeriodAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PeriodAsString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PeriodAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstHourInThisPeriod(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstHourInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastHourInThisPeriod(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastHourInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfHoursInThisPeriod(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfHoursInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hour(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Hour(int32_t value) noexcept override
    {
        try
        {
            this->shim().Hour(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddHours(int32_t hours) noexcept override
    {
        try
        {
            this->shim().AddHours(hours);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HourAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().HourAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HourAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().HourAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Minute(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Minute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Minute(int32_t value) noexcept override
    {
        try
        {
            this->shim().Minute(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddMinutes(int32_t minutes) noexcept override
    {
        try
        {
            this->shim().AddMinutes(minutes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MinuteAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MinuteAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MinuteAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MinuteAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Second(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Second());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Second(int32_t value) noexcept override
    {
        try
        {
            this->shim().Second(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddSeconds(int32_t seconds) noexcept override
    {
        try
        {
            this->shim().AddSeconds(seconds);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SecondAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SecondAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SecondAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SecondAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nanosecond(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Nanosecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Nanosecond(int32_t value) noexcept override
    {
        try
        {
            this->shim().Nanosecond(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddNanoseconds(int32_t nanoseconds) noexcept override
    {
        try
        {
            this->shim().AddNanoseconds(nanoseconds);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NanosecondAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().NanosecondAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NanosecondAsPaddedString(int32_t minDigits, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().NanosecondAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Compare(abi_arg_in<Windows::Globalization::ICalendar> other, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Compare(*reinterpret_cast<const Windows::Globalization::Calendar *>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CompareDateTime(abi_arg_in<Windows::Foundation::DateTime> other, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CompareDateTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyTo(abi_arg_in<Windows::Globalization::ICalendar> other) noexcept override
    {
        try
        {
            this->shim().CopyTo(*reinterpret_cast<const Windows::Globalization::Calendar *>(&other));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstMinuteInThisHour(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstMinuteInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastMinuteInThisHour(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastMinuteInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfMinutesInThisHour(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfMinutesInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstSecondInThisMinute(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstSecondInThisMinute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSecondInThisMinute(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastSecondInThisMinute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfSecondsInThisMinute(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfSecondsInThisMinute());
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

    HRESULT __stdcall get_IsDaylightSavingTime(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDaylightSavingTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::ICalendarFactory> : produce_base<D, Windows::Globalization::ICalendarFactory>
{
    HRESULT __stdcall abi_CreateCalendarDefaultCalendarAndClock(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_out<Windows::Globalization::ICalendar> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCalendarDefaultCalendarAndClock(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCalendar(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> calendar, abi_arg_in<hstring> clock, abi_arg_out<Windows::Globalization::ICalendar> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCalendar(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&calendar), *reinterpret_cast<const hstring *>(&clock)));
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
struct produce<D, Windows::Globalization::ICalendarFactory2> : produce_base<D, Windows::Globalization::ICalendarFactory2>
{
    HRESULT __stdcall abi_CreateCalendarWithTimeZone(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> calendar, abi_arg_in<hstring> clock, abi_arg_in<hstring> timeZoneId, abi_arg_out<Windows::Globalization::ICalendar> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCalendarWithTimeZone(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&calendar), *reinterpret_cast<const hstring *>(&clock), *reinterpret_cast<const hstring *>(&timeZoneId)));
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
struct produce<D, Windows::Globalization::ICalendarIdentifiersStatics> : produce_base<D, Windows::Globalization::ICalendarIdentifiersStatics>
{
    HRESULT __stdcall get_Gregorian(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gregorian());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hebrew(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hebrew());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hijri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hijri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Japanese(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Japanese());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Julian(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Julian());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Korean(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Korean());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Taiwan(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Taiwan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thai(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thai());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UmAlQura(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UmAlQura());
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
struct produce<D, Windows::Globalization::ICalendarIdentifiersStatics2> : produce_base<D, Windows::Globalization::ICalendarIdentifiersStatics2>
{
    HRESULT __stdcall get_Persian(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Persian());
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
struct produce<D, Windows::Globalization::ICalendarIdentifiersStatics3> : produce_base<D, Windows::Globalization::ICalendarIdentifiersStatics3>
{
    HRESULT __stdcall get_ChineseLunar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChineseLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JapaneseLunar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JapaneseLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KoreanLunar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KoreanLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaiwanLunar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TaiwanLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VietnameseLunar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VietnameseLunar());
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
struct produce<D, Windows::Globalization::IClockIdentifiersStatics> : produce_base<D, Windows::Globalization::IClockIdentifiersStatics>
{
    HRESULT __stdcall get_TwelveHour(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TwelveHour());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TwentyFourHour(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TwentyFourHour());
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
struct produce<D, Windows::Globalization::ICurrencyIdentifiersStatics> : produce_base<D, Windows::Globalization::ICurrencyIdentifiersStatics>
{
    HRESULT __stdcall get_AED(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AED());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AFN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AFN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ALL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ALL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AMD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ANG(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ANG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AOA(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AOA());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ARS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ARS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AUD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AUD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AWG(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AWG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AZN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AZN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BAM(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BAM());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BBD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BBD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BDT(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BDT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BGN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BGN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BHD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BHD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BIF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BIF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BMD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BND(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BOB(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BOB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BRL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BRL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BSD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BSD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BTN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BTN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BWP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BWP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BYR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BYR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BZD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CAD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CDF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CDF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CHF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CHF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CLP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CLP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CNY(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CNY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_COP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().COP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CRC(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CRC());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CUP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CUP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CVE(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CVE());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CZK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CZK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DJF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DJF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DKK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DKK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DOP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DZD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EGP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EGP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ERN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ERN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ETB(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ETB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EUR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EUR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FJD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FJD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FKP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FKP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GBP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GBP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GEL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GEL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GHS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GHS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GIP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GIP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GMD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GNF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GNF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GTQ(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GTQ());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GYD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HKD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HKD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HNL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HNL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HRK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HRK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HTG(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HTG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HUF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HUF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IDR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IDR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ILS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ILS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_INR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().INR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IQD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IQD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IRR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IRR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ISK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ISK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JMD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JOD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JOD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JPY(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JPY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KES(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KES());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KGS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KGS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KHR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KHR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KMF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KMF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KPW(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KPW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KRW(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KRW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KWD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KWD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KYD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KZT(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KZT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LAK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LAK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LBP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LBP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LKR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LKR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LRD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LRD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LSL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LSL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LTL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LTL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LVL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LVL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LYD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MAD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MDL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MDL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MGA(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MGA());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MKD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MKD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MMK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MMK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MNT(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MNT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MOP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MRO(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MRO());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MUR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MUR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MVR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MVR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MWK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MWK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MXN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MXN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MYR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MYR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MZN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MZN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NAD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NGN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NGN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NIO(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NIO());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NOK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NOK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NPR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NPR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NZD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OMR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OMR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PAB(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PAB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PEN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PEN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PGK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PGK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PHP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PHP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PKR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PKR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PLN(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PLN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PYG(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PYG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QAR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RON(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RON());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RSD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RSD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RUB(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RUB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RWF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RWF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SAR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SBD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SBD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SCR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SCR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SDG(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SDG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SEK(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SEK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SGD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SGD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SHP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SHP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SLL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SLL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SOS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SOS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SRD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SRD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_STD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().STD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SYP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SYP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SZL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SZL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_THB(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().THB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TJS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TJS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TMT(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TMT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TND(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TOP(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TRY(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TRY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TTD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TTD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TWD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TWD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TZS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TZS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UAH(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UAH());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UGX(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UGX());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_USD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().USD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UYU(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UYU());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UZS(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UZS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VEF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VEF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VND(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VUV(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VUV());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WST(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WST());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XAF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XAF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XCD(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XCD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XOF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XOF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XPF(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XPF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XXX(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XXX());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YER(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YER());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZAR(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZMW(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZMW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZWL(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZWL());
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
struct produce<D, Windows::Globalization::IGeographicRegion> : produce_base<D, Windows::Globalization::IGeographicRegion>
{
    HRESULT __stdcall get_Code(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeTwoLetter(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CodeTwoLetter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeThreeLetter(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CodeThreeLetter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeThreeDigit(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CodeThreeDigit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NativeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrenciesInUse(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrenciesInUse());
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
struct produce<D, Windows::Globalization::IGeographicRegionFactory> : produce_base<D, Windows::Globalization::IGeographicRegionFactory>
{
    HRESULT __stdcall abi_CreateGeographicRegion(abi_arg_in<hstring> geographicRegionCode, abi_arg_out<Windows::Globalization::IGeographicRegion> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateGeographicRegion(*reinterpret_cast<const hstring *>(&geographicRegionCode)));
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
struct produce<D, Windows::Globalization::IGeographicRegionStatics> : produce_base<D, Windows::Globalization::IGeographicRegionStatics>
{
    HRESULT __stdcall abi_IsSupported(abi_arg_in<hstring> geographicRegionCode, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSupported(*reinterpret_cast<const hstring *>(&geographicRegionCode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::IJapanesePhoneme> : produce_base<D, Windows::Globalization::IJapanesePhoneme>
{
    HRESULT __stdcall get_DisplayText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YomiText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPhraseStart(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPhraseStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::IJapanesePhoneticAnalyzerStatics> : produce_base<D, Windows::Globalization::IJapanesePhoneticAnalyzerStatics>
{
    HRESULT __stdcall abi_GetWords(abi_arg_in<hstring> input, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetWords(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWordsWithMonoRubyOption(abi_arg_in<hstring> input, bool monoRuby, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetWords(*reinterpret_cast<const hstring *>(&input), monoRuby));
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
struct produce<D, Windows::Globalization::ILanguage> : produce_base<D, Windows::Globalization::ILanguage>
{
    HRESULT __stdcall get_LanguageTag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanguageTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NativeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Script(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Script());
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
struct produce<D, Windows::Globalization::ILanguageExtensionSubtags> : produce_base<D, Windows::Globalization::ILanguageExtensionSubtags>
{
    HRESULT __stdcall abi_GetExtensionSubtags(abi_arg_in<hstring> singleton, abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetExtensionSubtags(*reinterpret_cast<const hstring *>(&singleton)));
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
struct produce<D, Windows::Globalization::ILanguageFactory> : produce_base<D, Windows::Globalization::ILanguageFactory>
{
    HRESULT __stdcall abi_CreateLanguage(abi_arg_in<hstring> languageTag, abi_arg_out<Windows::Globalization::ILanguage> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateLanguage(*reinterpret_cast<const hstring *>(&languageTag)));
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
struct produce<D, Windows::Globalization::ILanguageStatics> : produce_base<D, Windows::Globalization::ILanguageStatics>
{
    HRESULT __stdcall abi_IsWellFormed(abi_arg_in<hstring> languageTag, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsWellFormed(*reinterpret_cast<const hstring *>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentInputMethodLanguageTag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentInputMethodLanguageTag());
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
struct produce<D, Windows::Globalization::ILanguageStatics2> : produce_base<D, Windows::Globalization::ILanguageStatics2>
{
    HRESULT __stdcall abi_TrySetInputMethodLanguageTag(abi_arg_in<hstring> languageTag, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetInputMethodLanguageTag(*reinterpret_cast<const hstring *>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::INumeralSystemIdentifiersStatics> : produce_base<D, Windows::Globalization::INumeralSystemIdentifiersStatics>
{
    HRESULT __stdcall get_Arab(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arab());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArabExt(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ArabExt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bali(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bali());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Beng(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Beng());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cham(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cham());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deva(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deva());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullWide(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullWide());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gujr(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gujr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Guru(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Guru());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HaniDec(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HaniDec());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Java(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Java());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kali(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kali());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Khmr(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Khmr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Knda(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Knda());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lana(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Lana());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanaTham(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanaTham());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Laoo(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Laoo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latn(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Latn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lepc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Lepc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Limb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Limb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mlym(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mlym());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mong(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mong());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mtei(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mtei());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mymr(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mymr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MymrShan(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MymrShan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nkoo(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Nkoo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Olck(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Olck());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orya(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orya());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Saur(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Saur());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sund(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sund());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Talu(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Talu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TamlDec(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TamlDec());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Telu(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Telu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thai(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thai());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tibt(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tibt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Vaii(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Vaii());
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
struct produce<D, Windows::Globalization::INumeralSystemIdentifiersStatics2> : produce_base<D, Windows::Globalization::INumeralSystemIdentifiersStatics2>
{
    HRESULT __stdcall get_Brah(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Brah());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Osma(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Osma());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathBold(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MathBold());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathDbl(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MathDbl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathSans(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MathSans());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathSanb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MathSanb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathMono(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MathMono());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthBold(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZmthBold());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthDbl(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZmthDbl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthSans(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZmthSans());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthSanb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZmthSanb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthMono(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZmthMono());
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
struct produce<D, Windows::Globalization::ITimeZoneOnCalendar> : produce_base<D, Windows::Globalization::ITimeZoneOnCalendar>
{
    HRESULT __stdcall abi_GetTimeZone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTimeZone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeTimeZone(abi_arg_in<hstring> timeZoneId) noexcept override
    {
        try
        {
            this->shim().ChangeTimeZone(*reinterpret_cast<const hstring *>(&timeZoneId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TimeZoneAsFullString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TimeZoneAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TimeZoneAsString(int32_t idealLength, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TimeZoneAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Globalization {

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Gregorian() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Gregorian(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Hebrew() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Hebrew(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Hijri() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Hijri(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Japanese() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Japanese(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Julian() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Julian(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Korean() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Korean(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Taiwan() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Taiwan(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::Thai() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_Thai(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics<D>::UmAlQura() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics &>(static_cast<const D &>(*this))->get_UmAlQura(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics2<D>::Persian() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_Persian(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics3<D>::ChineseLunar() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_ChineseLunar(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics3<D>::JapaneseLunar() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_JapaneseLunar(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics3<D>::KoreanLunar() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_KoreanLunar(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics3<D>::TaiwanLunar() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_TaiwanLunar(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarIdentifiersStatics3<D>::VietnameseLunar() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_VietnameseLunar(put(value)));
    return value;
}

template <typename D> hstring impl_IClockIdentifiersStatics<D>::TwelveHour() const
{
    hstring value;
    check_hresult(static_cast<const IClockIdentifiersStatics &>(static_cast<const D &>(*this))->get_TwelveHour(put(value)));
    return value;
}

template <typename D> hstring impl_IClockIdentifiersStatics<D>::TwentyFourHour() const
{
    hstring value;
    check_hresult(static_cast<const IClockIdentifiersStatics &>(static_cast<const D &>(*this))->get_TwentyFourHour(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Arab() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Arab(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::ArabExt() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_ArabExt(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Bali() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Bali(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Beng() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Beng(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Cham() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Cham(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Deva() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Deva(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::FullWide() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_FullWide(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Gujr() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Gujr(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Guru() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Guru(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::HaniDec() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_HaniDec(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Java() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Java(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Kali() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Kali(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Khmr() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Khmr(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Knda() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Knda(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Lana() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Lana(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::LanaTham() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_LanaTham(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Laoo() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Laoo(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Latn() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Latn(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Lepc() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Lepc(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Limb() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Limb(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Mlym() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Mlym(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Mong() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Mong(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Mtei() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Mtei(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Mymr() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Mymr(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::MymrShan() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_MymrShan(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Nkoo() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Nkoo(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Olck() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Olck(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Orya() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Orya(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Saur() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Saur(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Sund() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Sund(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Talu() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Talu(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::TamlDec() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_TamlDec(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Telu() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Telu(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Thai() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Thai(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Tibt() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Tibt(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics<D>::Vaii() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics &>(static_cast<const D &>(*this))->get_Vaii(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::Brah() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_Brah(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::Osma() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_Osma(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::MathBold() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_MathBold(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::MathDbl() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_MathDbl(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::MathSans() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_MathSans(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::MathSanb() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_MathSanb(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::MathMono() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_MathMono(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::ZmthBold() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ZmthBold(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::ZmthDbl() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ZmthDbl(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::ZmthSans() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ZmthSans(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::ZmthSanb() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ZmthSanb(put(value)));
    return value;
}

template <typename D> hstring impl_INumeralSystemIdentifiersStatics2<D>::ZmthMono() const
{
    hstring value;
    check_hresult(static_cast<const INumeralSystemIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ZmthMono(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AED() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AED(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AFN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AFN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ALL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ALL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AMD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AMD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ANG() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ANG(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AOA() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AOA(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ARS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ARS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AUD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AUD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AWG() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AWG(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::AZN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_AZN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BAM() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BAM(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BBD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BBD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BDT() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BDT(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BGN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BGN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BHD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BHD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BIF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BIF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BMD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BMD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BND() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BND(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BOB() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BOB(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BRL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BRL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BSD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BSD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BTN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BTN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BWP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BWP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BYR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BYR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::BZD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_BZD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CAD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CAD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CDF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CDF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CHF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CHF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CLP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CLP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CNY() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CNY(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::COP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_COP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CRC() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CRC(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CUP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CUP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CVE() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CVE(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::CZK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_CZK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::DJF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_DJF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::DKK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_DKK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::DOP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_DOP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::DZD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_DZD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::EGP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_EGP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ERN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ERN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ETB() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ETB(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::EUR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_EUR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::FJD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_FJD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::FKP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_FKP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GBP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GBP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GEL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GEL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GHS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GHS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GIP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GIP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GMD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GMD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GNF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GNF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GTQ() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GTQ(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::GYD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_GYD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::HKD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_HKD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::HNL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_HNL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::HRK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_HRK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::HTG() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_HTG(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::HUF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_HUF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::IDR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_IDR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ILS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ILS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::INR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_INR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::IQD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_IQD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::IRR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_IRR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ISK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ISK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::JMD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_JMD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::JOD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_JOD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::JPY() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_JPY(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KES() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KES(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KGS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KGS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KHR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KHR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KMF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KMF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KPW() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KPW(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KRW() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KRW(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KWD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KWD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KYD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KYD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::KZT() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_KZT(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LAK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LAK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LBP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LBP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LKR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LKR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LRD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LRD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LSL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LSL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LTL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LTL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LVL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LVL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::LYD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_LYD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MAD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MAD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MDL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MDL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MGA() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MGA(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MKD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MKD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MMK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MMK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MNT() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MNT(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MOP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MOP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MRO() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MRO(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MUR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MUR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MVR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MVR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MWK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MWK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MXN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MXN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MYR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MYR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::MZN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_MZN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NAD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NAD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NGN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NGN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NIO() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NIO(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NOK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NOK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NPR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NPR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::NZD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_NZD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::OMR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_OMR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PAB() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PAB(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PEN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PEN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PGK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PGK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PHP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PHP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PKR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PKR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PLN() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PLN(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::PYG() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_PYG(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::QAR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_QAR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::RON() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_RON(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::RSD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_RSD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::RUB() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_RUB(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::RWF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_RWF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SAR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SAR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SBD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SBD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SCR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SCR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SDG() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SDG(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SEK() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SEK(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SGD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SGD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SHP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SHP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SLL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SLL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SOS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SOS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SRD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SRD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::STD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_STD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SYP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SYP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::SZL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_SZL(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::THB() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_THB(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TJS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TJS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TMT() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TMT(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TND() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TND(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TOP() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TOP(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TRY() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TRY(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TTD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TTD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TWD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TWD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::TZS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_TZS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::UAH() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_UAH(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::UGX() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_UGX(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::USD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_USD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::UYU() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_UYU(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::UZS() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_UZS(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::VEF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_VEF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::VND() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_VND(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::VUV() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_VUV(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::WST() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_WST(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::XAF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_XAF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::XCD() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_XCD(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::XOF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_XOF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::XPF() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_XPF(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::XXX() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_XXX(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::YER() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_YER(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ZAR() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ZAR(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ZMW() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ZMW(put(value)));
    return value;
}

template <typename D> hstring impl_ICurrencyIdentifiersStatics<D>::ZWL() const
{
    hstring value;
    check_hresult(static_cast<const ICurrencyIdentifiersStatics &>(static_cast<const D &>(*this))->get_ZWL(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::Code() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_Code(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::CodeTwoLetter() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_CodeTwoLetter(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::CodeThreeLetter() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_CodeThreeLetter(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::CodeThreeDigit() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_CodeThreeDigit(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IGeographicRegion<D>::NativeName() const
{
    hstring value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_NativeName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGeographicRegion<D>::CurrenciesInUse() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IGeographicRegion &>(static_cast<const D &>(*this))->get_CurrenciesInUse(put(value)));
    return value;
}

template <typename D> Windows::Globalization::GeographicRegion impl_IGeographicRegionFactory<D>::CreateGeographicRegion(hstring_ref geographicRegionCode) const
{
    Windows::Globalization::GeographicRegion result { nullptr };
    check_hresult(static_cast<const IGeographicRegionFactory &>(static_cast<const D &>(*this))->abi_CreateGeographicRegion(get(geographicRegionCode), put(result)));
    return result;
}

template <typename D> bool impl_IGeographicRegionStatics<D>::IsSupported(hstring_ref geographicRegionCode) const
{
    bool result {};
    check_hresult(static_cast<const IGeographicRegionStatics &>(static_cast<const D &>(*this))->abi_IsSupported(get(geographicRegionCode), &result));
    return result;
}

template <typename D> hstring impl_ILanguage<D>::LanguageTag() const
{
    hstring value;
    check_hresult(static_cast<const ILanguage &>(static_cast<const D &>(*this))->get_LanguageTag(put(value)));
    return value;
}

template <typename D> hstring impl_ILanguage<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const ILanguage &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_ILanguage<D>::NativeName() const
{
    hstring value;
    check_hresult(static_cast<const ILanguage &>(static_cast<const D &>(*this))->get_NativeName(put(value)));
    return value;
}

template <typename D> hstring impl_ILanguage<D>::Script() const
{
    hstring value;
    check_hresult(static_cast<const ILanguage &>(static_cast<const D &>(*this))->get_Script(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ILanguageExtensionSubtags<D>::GetExtensionSubtags(hstring_ref singleton) const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const ILanguageExtensionSubtags &>(static_cast<const D &>(*this))->abi_GetExtensionSubtags(get(singleton), put(value)));
    return value;
}

template <typename D> Windows::Globalization::Language impl_ILanguageFactory<D>::CreateLanguage(hstring_ref languageTag) const
{
    Windows::Globalization::Language result { nullptr };
    check_hresult(static_cast<const ILanguageFactory &>(static_cast<const D &>(*this))->abi_CreateLanguage(get(languageTag), put(result)));
    return result;
}

template <typename D> bool impl_ILanguageStatics<D>::IsWellFormed(hstring_ref languageTag) const
{
    bool result {};
    check_hresult(static_cast<const ILanguageStatics &>(static_cast<const D &>(*this))->abi_IsWellFormed(get(languageTag), &result));
    return result;
}

template <typename D> hstring impl_ILanguageStatics<D>::CurrentInputMethodLanguageTag() const
{
    hstring value;
    check_hresult(static_cast<const ILanguageStatics &>(static_cast<const D &>(*this))->get_CurrentInputMethodLanguageTag(put(value)));
    return value;
}

template <typename D> bool impl_ILanguageStatics2<D>::TrySetInputMethodLanguageTag(hstring_ref languageTag) const
{
    bool result {};
    check_hresult(static_cast<const ILanguageStatics2 &>(static_cast<const D &>(*this))->abi_TrySetInputMethodLanguageTag(get(languageTag), &result));
    return result;
}

template <typename D> Windows::Globalization::Calendar impl_ICalendar<D>::Clone() const
{
    Windows::Globalization::Calendar value { nullptr };
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_Clone(put(value)));
    return value;
}

template <typename D> void impl_ICalendar<D>::SetToMin() const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SetToMin());
}

template <typename D> void impl_ICalendar<D>::SetToMax() const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SetToMax());
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ICalendar<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendar<D>::NumeralSystem() const
{
    hstring value;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumeralSystem(put(value)));
    return value;
}

template <typename D> void impl_ICalendar<D>::NumeralSystem(hstring_ref value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_NumeralSystem(get(value)));
}

template <typename D> hstring impl_ICalendar<D>::GetCalendarSystem() const
{
    hstring value;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_GetCalendarSystem(put(value)));
    return value;
}

template <typename D> void impl_ICalendar<D>::ChangeCalendarSystem(hstring_ref value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_ChangeCalendarSystem(get(value)));
}

template <typename D> hstring impl_ICalendar<D>::GetClock() const
{
    hstring value;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_GetClock(put(value)));
    return value;
}

template <typename D> void impl_ICalendar<D>::ChangeClock(hstring_ref value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_ChangeClock(get(value)));
}

template <typename D> Windows::Foundation::DateTime impl_ICalendar<D>::GetDateTime() const
{
    Windows::Foundation::DateTime result {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_GetDateTime(put(result)));
    return result;
}

template <typename D> void impl_ICalendar<D>::SetDateTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SetDateTime(get(value)));
}

template <typename D> void impl_ICalendar<D>::SetToNow() const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SetToNow());
}

template <typename D> int32_t impl_ICalendar<D>::FirstEra() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstEra(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastEra() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastEra(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfEras() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfEras(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Era() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Era(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Era(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Era(value));
}

template <typename D> void impl_ICalendar<D>::AddEras(int32_t eras) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddEras(eras));
}

template <typename D> hstring impl_ICalendar<D>::EraAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_EraAsFullString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::EraAsString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_EraAsString(idealLength, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::FirstYearInThisEra() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstYearInThisEra(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastYearInThisEra() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastYearInThisEra(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfYearsInThisEra() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfYearsInThisEra(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Year() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Year(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Year(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Year(value));
}

template <typename D> void impl_ICalendar<D>::AddYears(int32_t years) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddYears(years));
}

template <typename D> hstring impl_ICalendar<D>::YearAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_YearAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::YearAsTruncatedString(int32_t remainingDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_YearAsTruncatedString(remainingDigits, put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::YearAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_YearAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::FirstMonthInThisYear() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstMonthInThisYear(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastMonthInThisYear() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastMonthInThisYear(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfMonthsInThisYear() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfMonthsInThisYear(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Month() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Month(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Month(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Month(value));
}

template <typename D> void impl_ICalendar<D>::AddMonths(int32_t months) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddMonths(months));
}

template <typename D> hstring impl_ICalendar<D>::MonthAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsFullString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MonthAsString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsString(idealLength, put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MonthAsSoloString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsFullSoloString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MonthAsSoloString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsSoloString(idealLength, put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MonthAsNumericString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsNumericString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MonthAsPaddedNumericString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MonthAsPaddedNumericString(minDigits, put(result)));
    return result;
}

template <typename D> void impl_ICalendar<D>::AddWeeks(int32_t weeks) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddWeeks(weeks));
}

template <typename D> int32_t impl_ICalendar<D>::FirstDayInThisMonth() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstDayInThisMonth(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastDayInThisMonth() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastDayInThisMonth(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfDaysInThisMonth() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfDaysInThisMonth(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Day() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Day(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Day(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Day(value));
}

template <typename D> void impl_ICalendar<D>::AddDays(int32_t days) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddDays(days));
}

template <typename D> hstring impl_ICalendar<D>::DayAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::DayAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> Windows::Globalization::DayOfWeek impl_ICalendar<D>::DayOfWeek() const
{
    Windows::Globalization::DayOfWeek value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_DayOfWeek(&value));
    return value;
}

template <typename D> hstring impl_ICalendar<D>::DayOfWeekAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayOfWeekAsFullString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::DayOfWeekAsString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayOfWeekAsString(idealLength, put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::DayOfWeekAsSoloString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayOfWeekAsFullSoloString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::DayOfWeekAsSoloString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_DayOfWeekAsSoloString(idealLength, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::FirstPeriodInThisDay() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstPeriodInThisDay(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastPeriodInThisDay() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastPeriodInThisDay(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfPeriodsInThisDay() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfPeriodsInThisDay(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Period() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Period(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Period(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Period(value));
}

template <typename D> void impl_ICalendar<D>::AddPeriods(int32_t periods) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddPeriods(periods));
}

template <typename D> hstring impl_ICalendar<D>::PeriodAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_PeriodAsFullString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::PeriodAsString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_PeriodAsString(idealLength, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::FirstHourInThisPeriod() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstHourInThisPeriod(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastHourInThisPeriod() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastHourInThisPeriod(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfHoursInThisPeriod() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfHoursInThisPeriod(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::Hour() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Hour(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Hour(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Hour(value));
}

template <typename D> void impl_ICalendar<D>::AddHours(int32_t hours) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddHours(hours));
}

template <typename D> hstring impl_ICalendar<D>::HourAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_HourAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::HourAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_HourAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::Minute() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Minute(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Minute(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Minute(value));
}

template <typename D> void impl_ICalendar<D>::AddMinutes(int32_t minutes) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddMinutes(minutes));
}

template <typename D> hstring impl_ICalendar<D>::MinuteAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MinuteAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::MinuteAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_MinuteAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::Second() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Second(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Second(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Second(value));
}

template <typename D> void impl_ICalendar<D>::AddSeconds(int32_t seconds) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddSeconds(seconds));
}

template <typename D> hstring impl_ICalendar<D>::SecondAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SecondAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::SecondAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_SecondAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::Nanosecond() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_Nanosecond(&value));
    return value;
}

template <typename D> void impl_ICalendar<D>::Nanosecond(int32_t value) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->put_Nanosecond(value));
}

template <typename D> void impl_ICalendar<D>::AddNanoseconds(int32_t nanoseconds) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_AddNanoseconds(nanoseconds));
}

template <typename D> hstring impl_ICalendar<D>::NanosecondAsString() const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_NanosecondAsString(put(result)));
    return result;
}

template <typename D> hstring impl_ICalendar<D>::NanosecondAsPaddedString(int32_t minDigits) const
{
    hstring result;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_NanosecondAsPaddedString(minDigits, put(result)));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::Compare(const Windows::Globalization::Calendar & other) const
{
    int32_t result {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_Compare(get(other), &result));
    return result;
}

template <typename D> int32_t impl_ICalendar<D>::CompareDateTime(const Windows::Foundation::DateTime & other) const
{
    int32_t result {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_CompareDateTime(get(other), &result));
    return result;
}

template <typename D> void impl_ICalendar<D>::CopyTo(const Windows::Globalization::Calendar & other) const
{
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->abi_CopyTo(get(other)));
}

template <typename D> int32_t impl_ICalendar<D>::FirstMinuteInThisHour() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstMinuteInThisHour(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastMinuteInThisHour() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastMinuteInThisHour(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfMinutesInThisHour() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfMinutesInThisHour(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::FirstSecondInThisMinute() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_FirstSecondInThisMinute(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::LastSecondInThisMinute() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_LastSecondInThisMinute(&value));
    return value;
}

template <typename D> int32_t impl_ICalendar<D>::NumberOfSecondsInThisMinute() const
{
    int32_t value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_NumberOfSecondsInThisMinute(&value));
    return value;
}

template <typename D> hstring impl_ICalendar<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> bool impl_ICalendar<D>::IsDaylightSavingTime() const
{
    bool value {};
    check_hresult(static_cast<const ICalendar &>(static_cast<const D &>(*this))->get_IsDaylightSavingTime(&value));
    return value;
}

template <typename D> Windows::Globalization::Calendar impl_ICalendarFactory2<D>::CreateCalendarWithTimeZone(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock, hstring_ref timeZoneId) const
{
    Windows::Globalization::Calendar result { nullptr };
    check_hresult(static_cast<const ICalendarFactory2 &>(static_cast<const D &>(*this))->abi_CreateCalendarWithTimeZone(get(languages), get(calendar), get(clock), get(timeZoneId), put(result)));
    return result;
}

template <typename D> hstring impl_ITimeZoneOnCalendar<D>::GetTimeZone() const
{
    hstring value;
    check_hresult(static_cast<const ITimeZoneOnCalendar &>(static_cast<const D &>(*this))->abi_GetTimeZone(put(value)));
    return value;
}

template <typename D> void impl_ITimeZoneOnCalendar<D>::ChangeTimeZone(hstring_ref timeZoneId) const
{
    check_hresult(static_cast<const ITimeZoneOnCalendar &>(static_cast<const D &>(*this))->abi_ChangeTimeZone(get(timeZoneId)));
}

template <typename D> hstring impl_ITimeZoneOnCalendar<D>::TimeZoneAsString() const
{
    hstring result;
    check_hresult(static_cast<const ITimeZoneOnCalendar &>(static_cast<const D &>(*this))->abi_TimeZoneAsFullString(put(result)));
    return result;
}

template <typename D> hstring impl_ITimeZoneOnCalendar<D>::TimeZoneAsString(int32_t idealLength) const
{
    hstring result;
    check_hresult(static_cast<const ITimeZoneOnCalendar &>(static_cast<const D &>(*this))->abi_TimeZoneAsString(idealLength, put(result)));
    return result;
}

template <typename D> Windows::Globalization::Calendar impl_ICalendarFactory<D>::CreateCalendarDefaultCalendarAndClock(const Windows::Foundation::Collections::IIterable<hstring> & languages) const
{
    Windows::Globalization::Calendar result { nullptr };
    check_hresult(static_cast<const ICalendarFactory &>(static_cast<const D &>(*this))->abi_CreateCalendarDefaultCalendarAndClock(get(languages), put(result)));
    return result;
}

template <typename D> Windows::Globalization::Calendar impl_ICalendarFactory<D>::CreateCalendar(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock) const
{
    Windows::Globalization::Calendar result { nullptr };
    check_hresult(static_cast<const ICalendarFactory &>(static_cast<const D &>(*this))->abi_CreateCalendar(get(languages), get(calendar), get(clock), put(result)));
    return result;
}

template <typename D> hstring impl_IApplicationLanguagesStatics<D>::PrimaryLanguageOverride() const
{
    hstring value;
    check_hresult(static_cast<const IApplicationLanguagesStatics &>(static_cast<const D &>(*this))->get_PrimaryLanguageOverride(put(value)));
    return value;
}

template <typename D> void impl_IApplicationLanguagesStatics<D>::PrimaryLanguageOverride(hstring_ref value) const
{
    check_hresult(static_cast<const IApplicationLanguagesStatics &>(static_cast<const D &>(*this))->put_PrimaryLanguageOverride(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IApplicationLanguagesStatics<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IApplicationLanguagesStatics &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IApplicationLanguagesStatics<D>::ManifestLanguages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IApplicationLanguagesStatics &>(static_cast<const D &>(*this))->get_ManifestLanguages(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> impl_IJapanesePhoneticAnalyzerStatics<D>::GetWords(hstring_ref input) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> result;
    check_hresult(static_cast<const IJapanesePhoneticAnalyzerStatics &>(static_cast<const D &>(*this))->abi_GetWords(get(input), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> impl_IJapanesePhoneticAnalyzerStatics<D>::GetWords(hstring_ref input, bool monoRuby) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> result;
    check_hresult(static_cast<const IJapanesePhoneticAnalyzerStatics &>(static_cast<const D &>(*this))->abi_GetWordsWithMonoRubyOption(get(input), monoRuby, put(result)));
    return result;
}

template <typename D> hstring impl_IJapanesePhoneme<D>::DisplayText() const
{
    hstring value;
    check_hresult(static_cast<const IJapanesePhoneme &>(static_cast<const D &>(*this))->get_DisplayText(put(value)));
    return value;
}

template <typename D> hstring impl_IJapanesePhoneme<D>::YomiText() const
{
    hstring value;
    check_hresult(static_cast<const IJapanesePhoneme &>(static_cast<const D &>(*this))->get_YomiText(put(value)));
    return value;
}

template <typename D> bool impl_IJapanesePhoneme<D>::IsPhraseStart() const
{
    bool value {};
    check_hresult(static_cast<const IJapanesePhoneme &>(static_cast<const D &>(*this))->get_IsPhraseStart(&value));
    return value;
}

inline hstring ApplicationLanguages::PrimaryLanguageOverride()
{
    return get_activation_factory<ApplicationLanguages, IApplicationLanguagesStatics>().PrimaryLanguageOverride();
}

inline void ApplicationLanguages::PrimaryLanguageOverride(hstring_ref value)
{
    get_activation_factory<ApplicationLanguages, IApplicationLanguagesStatics>().PrimaryLanguageOverride(value);
}

inline Windows::Foundation::Collections::IVectorView<hstring> ApplicationLanguages::Languages()
{
    return get_activation_factory<ApplicationLanguages, IApplicationLanguagesStatics>().Languages();
}

inline Windows::Foundation::Collections::IVectorView<hstring> ApplicationLanguages::ManifestLanguages()
{
    return get_activation_factory<ApplicationLanguages, IApplicationLanguagesStatics>().ManifestLanguages();
}

inline Calendar::Calendar() :
    Calendar(activate_instance<Calendar>())
{}

inline Calendar::Calendar(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock, hstring_ref timeZoneId) :
    Calendar(get_activation_factory<Calendar, ICalendarFactory2>().CreateCalendarWithTimeZone(languages, calendar, clock, timeZoneId))
{}

inline Calendar::Calendar(const Windows::Foundation::Collections::IIterable<hstring> & languages) :
    Calendar(get_activation_factory<Calendar, ICalendarFactory>().CreateCalendarDefaultCalendarAndClock(languages))
{}

inline Calendar::Calendar(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock) :
    Calendar(get_activation_factory<Calendar, ICalendarFactory>().CreateCalendar(languages, calendar, clock))
{}

inline hstring CalendarIdentifiers::Gregorian()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Gregorian();
}

inline hstring CalendarIdentifiers::Hebrew()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Hebrew();
}

inline hstring CalendarIdentifiers::Hijri()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Hijri();
}

inline hstring CalendarIdentifiers::Japanese()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Japanese();
}

inline hstring CalendarIdentifiers::Julian()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Julian();
}

inline hstring CalendarIdentifiers::Korean()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Korean();
}

inline hstring CalendarIdentifiers::Taiwan()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Taiwan();
}

inline hstring CalendarIdentifiers::Thai()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().Thai();
}

inline hstring CalendarIdentifiers::UmAlQura()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics>().UmAlQura();
}

inline hstring CalendarIdentifiers::Persian()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics2>().Persian();
}

inline hstring CalendarIdentifiers::ChineseLunar()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics3>().ChineseLunar();
}

inline hstring CalendarIdentifiers::JapaneseLunar()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics3>().JapaneseLunar();
}

inline hstring CalendarIdentifiers::KoreanLunar()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics3>().KoreanLunar();
}

inline hstring CalendarIdentifiers::TaiwanLunar()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics3>().TaiwanLunar();
}

inline hstring CalendarIdentifiers::VietnameseLunar()
{
    return get_activation_factory<CalendarIdentifiers, ICalendarIdentifiersStatics3>().VietnameseLunar();
}

inline hstring ClockIdentifiers::TwelveHour()
{
    return get_activation_factory<ClockIdentifiers, IClockIdentifiersStatics>().TwelveHour();
}

inline hstring ClockIdentifiers::TwentyFourHour()
{
    return get_activation_factory<ClockIdentifiers, IClockIdentifiersStatics>().TwentyFourHour();
}

inline hstring CurrencyIdentifiers::AED()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AED();
}

inline hstring CurrencyIdentifiers::AFN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AFN();
}

inline hstring CurrencyIdentifiers::ALL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ALL();
}

inline hstring CurrencyIdentifiers::AMD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AMD();
}

inline hstring CurrencyIdentifiers::ANG()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ANG();
}

inline hstring CurrencyIdentifiers::AOA()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AOA();
}

inline hstring CurrencyIdentifiers::ARS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ARS();
}

inline hstring CurrencyIdentifiers::AUD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AUD();
}

inline hstring CurrencyIdentifiers::AWG()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AWG();
}

inline hstring CurrencyIdentifiers::AZN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().AZN();
}

inline hstring CurrencyIdentifiers::BAM()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BAM();
}

inline hstring CurrencyIdentifiers::BBD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BBD();
}

inline hstring CurrencyIdentifiers::BDT()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BDT();
}

inline hstring CurrencyIdentifiers::BGN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BGN();
}

inline hstring CurrencyIdentifiers::BHD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BHD();
}

inline hstring CurrencyIdentifiers::BIF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BIF();
}

inline hstring CurrencyIdentifiers::BMD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BMD();
}

inline hstring CurrencyIdentifiers::BND()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BND();
}

inline hstring CurrencyIdentifiers::BOB()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BOB();
}

inline hstring CurrencyIdentifiers::BRL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BRL();
}

inline hstring CurrencyIdentifiers::BSD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BSD();
}

inline hstring CurrencyIdentifiers::BTN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BTN();
}

inline hstring CurrencyIdentifiers::BWP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BWP();
}

inline hstring CurrencyIdentifiers::BYR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BYR();
}

inline hstring CurrencyIdentifiers::BZD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().BZD();
}

inline hstring CurrencyIdentifiers::CAD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CAD();
}

inline hstring CurrencyIdentifiers::CDF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CDF();
}

inline hstring CurrencyIdentifiers::CHF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CHF();
}

inline hstring CurrencyIdentifiers::CLP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CLP();
}

inline hstring CurrencyIdentifiers::CNY()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CNY();
}

inline hstring CurrencyIdentifiers::COP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().COP();
}

inline hstring CurrencyIdentifiers::CRC()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CRC();
}

inline hstring CurrencyIdentifiers::CUP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CUP();
}

inline hstring CurrencyIdentifiers::CVE()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CVE();
}

inline hstring CurrencyIdentifiers::CZK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().CZK();
}

inline hstring CurrencyIdentifiers::DJF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().DJF();
}

inline hstring CurrencyIdentifiers::DKK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().DKK();
}

inline hstring CurrencyIdentifiers::DOP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().DOP();
}

inline hstring CurrencyIdentifiers::DZD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().DZD();
}

inline hstring CurrencyIdentifiers::EGP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().EGP();
}

inline hstring CurrencyIdentifiers::ERN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ERN();
}

inline hstring CurrencyIdentifiers::ETB()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ETB();
}

inline hstring CurrencyIdentifiers::EUR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().EUR();
}

inline hstring CurrencyIdentifiers::FJD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().FJD();
}

inline hstring CurrencyIdentifiers::FKP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().FKP();
}

inline hstring CurrencyIdentifiers::GBP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GBP();
}

inline hstring CurrencyIdentifiers::GEL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GEL();
}

inline hstring CurrencyIdentifiers::GHS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GHS();
}

inline hstring CurrencyIdentifiers::GIP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GIP();
}

inline hstring CurrencyIdentifiers::GMD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GMD();
}

inline hstring CurrencyIdentifiers::GNF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GNF();
}

inline hstring CurrencyIdentifiers::GTQ()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GTQ();
}

inline hstring CurrencyIdentifiers::GYD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().GYD();
}

inline hstring CurrencyIdentifiers::HKD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().HKD();
}

inline hstring CurrencyIdentifiers::HNL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().HNL();
}

inline hstring CurrencyIdentifiers::HRK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().HRK();
}

inline hstring CurrencyIdentifiers::HTG()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().HTG();
}

inline hstring CurrencyIdentifiers::HUF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().HUF();
}

inline hstring CurrencyIdentifiers::IDR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().IDR();
}

inline hstring CurrencyIdentifiers::ILS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ILS();
}

inline hstring CurrencyIdentifiers::INR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().INR();
}

inline hstring CurrencyIdentifiers::IQD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().IQD();
}

inline hstring CurrencyIdentifiers::IRR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().IRR();
}

inline hstring CurrencyIdentifiers::ISK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ISK();
}

inline hstring CurrencyIdentifiers::JMD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().JMD();
}

inline hstring CurrencyIdentifiers::JOD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().JOD();
}

inline hstring CurrencyIdentifiers::JPY()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().JPY();
}

inline hstring CurrencyIdentifiers::KES()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KES();
}

inline hstring CurrencyIdentifiers::KGS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KGS();
}

inline hstring CurrencyIdentifiers::KHR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KHR();
}

inline hstring CurrencyIdentifiers::KMF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KMF();
}

inline hstring CurrencyIdentifiers::KPW()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KPW();
}

inline hstring CurrencyIdentifiers::KRW()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KRW();
}

inline hstring CurrencyIdentifiers::KWD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KWD();
}

inline hstring CurrencyIdentifiers::KYD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KYD();
}

inline hstring CurrencyIdentifiers::KZT()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().KZT();
}

inline hstring CurrencyIdentifiers::LAK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LAK();
}

inline hstring CurrencyIdentifiers::LBP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LBP();
}

inline hstring CurrencyIdentifiers::LKR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LKR();
}

inline hstring CurrencyIdentifiers::LRD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LRD();
}

inline hstring CurrencyIdentifiers::LSL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LSL();
}

inline hstring CurrencyIdentifiers::LTL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LTL();
}

inline hstring CurrencyIdentifiers::LVL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LVL();
}

inline hstring CurrencyIdentifiers::LYD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().LYD();
}

inline hstring CurrencyIdentifiers::MAD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MAD();
}

inline hstring CurrencyIdentifiers::MDL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MDL();
}

inline hstring CurrencyIdentifiers::MGA()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MGA();
}

inline hstring CurrencyIdentifiers::MKD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MKD();
}

inline hstring CurrencyIdentifiers::MMK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MMK();
}

inline hstring CurrencyIdentifiers::MNT()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MNT();
}

inline hstring CurrencyIdentifiers::MOP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MOP();
}

inline hstring CurrencyIdentifiers::MRO()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MRO();
}

inline hstring CurrencyIdentifiers::MUR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MUR();
}

inline hstring CurrencyIdentifiers::MVR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MVR();
}

inline hstring CurrencyIdentifiers::MWK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MWK();
}

inline hstring CurrencyIdentifiers::MXN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MXN();
}

inline hstring CurrencyIdentifiers::MYR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MYR();
}

inline hstring CurrencyIdentifiers::MZN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().MZN();
}

inline hstring CurrencyIdentifiers::NAD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NAD();
}

inline hstring CurrencyIdentifiers::NGN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NGN();
}

inline hstring CurrencyIdentifiers::NIO()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NIO();
}

inline hstring CurrencyIdentifiers::NOK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NOK();
}

inline hstring CurrencyIdentifiers::NPR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NPR();
}

inline hstring CurrencyIdentifiers::NZD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().NZD();
}

inline hstring CurrencyIdentifiers::OMR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().OMR();
}

inline hstring CurrencyIdentifiers::PAB()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PAB();
}

inline hstring CurrencyIdentifiers::PEN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PEN();
}

inline hstring CurrencyIdentifiers::PGK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PGK();
}

inline hstring CurrencyIdentifiers::PHP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PHP();
}

inline hstring CurrencyIdentifiers::PKR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PKR();
}

inline hstring CurrencyIdentifiers::PLN()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PLN();
}

inline hstring CurrencyIdentifiers::PYG()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().PYG();
}

inline hstring CurrencyIdentifiers::QAR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().QAR();
}

inline hstring CurrencyIdentifiers::RON()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().RON();
}

inline hstring CurrencyIdentifiers::RSD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().RSD();
}

inline hstring CurrencyIdentifiers::RUB()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().RUB();
}

inline hstring CurrencyIdentifiers::RWF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().RWF();
}

inline hstring CurrencyIdentifiers::SAR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SAR();
}

inline hstring CurrencyIdentifiers::SBD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SBD();
}

inline hstring CurrencyIdentifiers::SCR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SCR();
}

inline hstring CurrencyIdentifiers::SDG()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SDG();
}

inline hstring CurrencyIdentifiers::SEK()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SEK();
}

inline hstring CurrencyIdentifiers::SGD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SGD();
}

inline hstring CurrencyIdentifiers::SHP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SHP();
}

inline hstring CurrencyIdentifiers::SLL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SLL();
}

inline hstring CurrencyIdentifiers::SOS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SOS();
}

inline hstring CurrencyIdentifiers::SRD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SRD();
}

inline hstring CurrencyIdentifiers::STD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().STD();
}

inline hstring CurrencyIdentifiers::SYP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SYP();
}

inline hstring CurrencyIdentifiers::SZL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().SZL();
}

inline hstring CurrencyIdentifiers::THB()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().THB();
}

inline hstring CurrencyIdentifiers::TJS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TJS();
}

inline hstring CurrencyIdentifiers::TMT()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TMT();
}

inline hstring CurrencyIdentifiers::TND()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TND();
}

inline hstring CurrencyIdentifiers::TOP()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TOP();
}

inline hstring CurrencyIdentifiers::TRY()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TRY();
}

inline hstring CurrencyIdentifiers::TTD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TTD();
}

inline hstring CurrencyIdentifiers::TWD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TWD();
}

inline hstring CurrencyIdentifiers::TZS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().TZS();
}

inline hstring CurrencyIdentifiers::UAH()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().UAH();
}

inline hstring CurrencyIdentifiers::UGX()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().UGX();
}

inline hstring CurrencyIdentifiers::USD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().USD();
}

inline hstring CurrencyIdentifiers::UYU()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().UYU();
}

inline hstring CurrencyIdentifiers::UZS()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().UZS();
}

inline hstring CurrencyIdentifiers::VEF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().VEF();
}

inline hstring CurrencyIdentifiers::VND()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().VND();
}

inline hstring CurrencyIdentifiers::VUV()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().VUV();
}

inline hstring CurrencyIdentifiers::WST()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().WST();
}

inline hstring CurrencyIdentifiers::XAF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().XAF();
}

inline hstring CurrencyIdentifiers::XCD()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().XCD();
}

inline hstring CurrencyIdentifiers::XOF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().XOF();
}

inline hstring CurrencyIdentifiers::XPF()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().XPF();
}

inline hstring CurrencyIdentifiers::XXX()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().XXX();
}

inline hstring CurrencyIdentifiers::YER()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().YER();
}

inline hstring CurrencyIdentifiers::ZAR()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ZAR();
}

inline hstring CurrencyIdentifiers::ZMW()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ZMW();
}

inline hstring CurrencyIdentifiers::ZWL()
{
    return get_activation_factory<CurrencyIdentifiers, ICurrencyIdentifiersStatics>().ZWL();
}

inline GeographicRegion::GeographicRegion() :
    GeographicRegion(activate_instance<GeographicRegion>())
{}

inline GeographicRegion::GeographicRegion(hstring_ref geographicRegionCode) :
    GeographicRegion(get_activation_factory<GeographicRegion, IGeographicRegionFactory>().CreateGeographicRegion(geographicRegionCode))
{}

inline bool GeographicRegion::IsSupported(hstring_ref geographicRegionCode)
{
    return get_activation_factory<GeographicRegion, IGeographicRegionStatics>().IsSupported(geographicRegionCode);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> JapanesePhoneticAnalyzer::GetWords(hstring_ref input)
{
    return get_activation_factory<JapanesePhoneticAnalyzer, IJapanesePhoneticAnalyzerStatics>().GetWords(input);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> JapanesePhoneticAnalyzer::GetWords(hstring_ref input, bool monoRuby)
{
    return get_activation_factory<JapanesePhoneticAnalyzer, IJapanesePhoneticAnalyzerStatics>().GetWords(input, monoRuby);
}

inline Language::Language(hstring_ref languageTag) :
    Language(get_activation_factory<Language, ILanguageFactory>().CreateLanguage(languageTag))
{}

inline bool Language::IsWellFormed(hstring_ref languageTag)
{
    return get_activation_factory<Language, ILanguageStatics>().IsWellFormed(languageTag);
}

inline hstring Language::CurrentInputMethodLanguageTag()
{
    return get_activation_factory<Language, ILanguageStatics>().CurrentInputMethodLanguageTag();
}

inline bool Language::TrySetInputMethodLanguageTag(hstring_ref languageTag)
{
    return get_activation_factory<Language, ILanguageStatics2>().TrySetInputMethodLanguageTag(languageTag);
}

inline hstring NumeralSystemIdentifiers::Arab()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Arab();
}

inline hstring NumeralSystemIdentifiers::ArabExt()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().ArabExt();
}

inline hstring NumeralSystemIdentifiers::Bali()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Bali();
}

inline hstring NumeralSystemIdentifiers::Beng()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Beng();
}

inline hstring NumeralSystemIdentifiers::Cham()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Cham();
}

inline hstring NumeralSystemIdentifiers::Deva()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Deva();
}

inline hstring NumeralSystemIdentifiers::FullWide()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().FullWide();
}

inline hstring NumeralSystemIdentifiers::Gujr()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Gujr();
}

inline hstring NumeralSystemIdentifiers::Guru()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Guru();
}

inline hstring NumeralSystemIdentifiers::HaniDec()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().HaniDec();
}

inline hstring NumeralSystemIdentifiers::Java()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Java();
}

inline hstring NumeralSystemIdentifiers::Kali()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Kali();
}

inline hstring NumeralSystemIdentifiers::Khmr()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Khmr();
}

inline hstring NumeralSystemIdentifiers::Knda()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Knda();
}

inline hstring NumeralSystemIdentifiers::Lana()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Lana();
}

inline hstring NumeralSystemIdentifiers::LanaTham()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().LanaTham();
}

inline hstring NumeralSystemIdentifiers::Laoo()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Laoo();
}

inline hstring NumeralSystemIdentifiers::Latn()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Latn();
}

inline hstring NumeralSystemIdentifiers::Lepc()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Lepc();
}

inline hstring NumeralSystemIdentifiers::Limb()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Limb();
}

inline hstring NumeralSystemIdentifiers::Mlym()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Mlym();
}

inline hstring NumeralSystemIdentifiers::Mong()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Mong();
}

inline hstring NumeralSystemIdentifiers::Mtei()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Mtei();
}

inline hstring NumeralSystemIdentifiers::Mymr()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Mymr();
}

inline hstring NumeralSystemIdentifiers::MymrShan()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().MymrShan();
}

inline hstring NumeralSystemIdentifiers::Nkoo()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Nkoo();
}

inline hstring NumeralSystemIdentifiers::Olck()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Olck();
}

inline hstring NumeralSystemIdentifiers::Orya()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Orya();
}

inline hstring NumeralSystemIdentifiers::Saur()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Saur();
}

inline hstring NumeralSystemIdentifiers::Sund()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Sund();
}

inline hstring NumeralSystemIdentifiers::Talu()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Talu();
}

inline hstring NumeralSystemIdentifiers::TamlDec()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().TamlDec();
}

inline hstring NumeralSystemIdentifiers::Telu()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Telu();
}

inline hstring NumeralSystemIdentifiers::Thai()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Thai();
}

inline hstring NumeralSystemIdentifiers::Tibt()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Tibt();
}

inline hstring NumeralSystemIdentifiers::Vaii()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics>().Vaii();
}

inline hstring NumeralSystemIdentifiers::Brah()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().Brah();
}

inline hstring NumeralSystemIdentifiers::Osma()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().Osma();
}

inline hstring NumeralSystemIdentifiers::MathBold()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().MathBold();
}

inline hstring NumeralSystemIdentifiers::MathDbl()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().MathDbl();
}

inline hstring NumeralSystemIdentifiers::MathSans()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().MathSans();
}

inline hstring NumeralSystemIdentifiers::MathSanb()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().MathSanb();
}

inline hstring NumeralSystemIdentifiers::MathMono()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().MathMono();
}

inline hstring NumeralSystemIdentifiers::ZmthBold()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().ZmthBold();
}

inline hstring NumeralSystemIdentifiers::ZmthDbl()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().ZmthDbl();
}

inline hstring NumeralSystemIdentifiers::ZmthSans()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().ZmthSans();
}

inline hstring NumeralSystemIdentifiers::ZmthSanb()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().ZmthSanb();
}

inline hstring NumeralSystemIdentifiers::ZmthMono()
{
    return get_activation_factory<NumeralSystemIdentifiers, INumeralSystemIdentifiersStatics2>().ZmthMono();
}

}

}
