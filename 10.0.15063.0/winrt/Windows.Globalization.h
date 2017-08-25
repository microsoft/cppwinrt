// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Globalization.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_IApplicationLanguagesStatics<D>::PrimaryLanguageOverride() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IApplicationLanguagesStatics)->get_PrimaryLanguageOverride(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_IApplicationLanguagesStatics<D>::PrimaryLanguageOverride(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::IApplicationLanguagesStatics)->put_PrimaryLanguageOverride(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_IApplicationLanguagesStatics<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IApplicationLanguagesStatics)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_IApplicationLanguagesStatics<D>::ManifestLanguages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IApplicationLanguagesStatics)->get_ManifestLanguages(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Calendar consume_Windows_Globalization_ICalendar<D>::Clone() const
{
    Windows::Globalization::Calendar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->Clone(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::SetToMin() const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SetToMin());
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::SetToMax() const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SetToMax());
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_ICalendar<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::NumeralSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumeralSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::NumeralSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_NumeralSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::GetCalendarSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->GetCalendarSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::ChangeCalendarSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->ChangeCalendarSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::GetClock() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->GetClock(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::ChangeClock(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->ChangeClock(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Globalization_ICalendar<D>::GetDateTime() const
{
    Windows::Foundation::DateTime result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->GetDateTime(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::SetDateTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SetDateTime(get_abi(value)));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::SetToNow() const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SetToNow());
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstEra() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstEra(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastEra() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastEra(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfEras() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfEras(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Era() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Era(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Era(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Era(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddEras(int32_t eras) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddEras(eras));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::EraAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->EraAsFullString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::EraAsString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->EraAsString(idealLength, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstYearInThisEra() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstYearInThisEra(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastYearInThisEra() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastYearInThisEra(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfYearsInThisEra() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfYearsInThisEra(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Year() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Year(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Year(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Year(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddYears(int32_t years) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddYears(years));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::YearAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->YearAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::YearAsTruncatedString(int32_t remainingDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->YearAsTruncatedString(remainingDigits, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::YearAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->YearAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstMonthInThisYear() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstMonthInThisYear(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastMonthInThisYear() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastMonthInThisYear(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfMonthsInThisYear() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfMonthsInThisYear(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Month() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Month(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Month(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Month(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddMonths(int32_t months) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddMonths(months));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsFullString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsString(idealLength, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsSoloString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsFullSoloString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsSoloString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsSoloString(idealLength, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsNumericString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsNumericString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MonthAsPaddedNumericString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MonthAsPaddedNumericString(minDigits, put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddWeeks(int32_t weeks) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddWeeks(weeks));
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstDayInThisMonth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstDayInThisMonth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastDayInThisMonth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastDayInThisMonth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfDaysInThisMonth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfDaysInThisMonth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Day() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Day(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Day(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Day(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddDays(int32_t days) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddDays(days));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::DayOfWeek consume_Windows_Globalization_ICalendar<D>::DayOfWeek() const
{
    Windows::Globalization::DayOfWeek value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_DayOfWeek(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayOfWeekAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayOfWeekAsFullString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayOfWeekAsString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayOfWeekAsString(idealLength, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayOfWeekAsSoloString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayOfWeekAsFullSoloString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::DayOfWeekAsSoloString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->DayOfWeekAsSoloString(idealLength, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstPeriodInThisDay() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstPeriodInThisDay(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastPeriodInThisDay() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastPeriodInThisDay(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfPeriodsInThisDay() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfPeriodsInThisDay(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Period() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Period(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Period(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Period(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddPeriods(int32_t periods) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddPeriods(periods));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::PeriodAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->PeriodAsFullString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::PeriodAsString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->PeriodAsString(idealLength, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstHourInThisPeriod() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstHourInThisPeriod(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastHourInThisPeriod() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastHourInThisPeriod(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfHoursInThisPeriod() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfHoursInThisPeriod(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Hour() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Hour(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Hour(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Hour(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddHours(int32_t hours) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddHours(hours));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::HourAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->HourAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::HourAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->HourAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Minute() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Minute(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Minute(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Minute(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddMinutes(int32_t minutes) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddMinutes(minutes));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MinuteAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MinuteAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::MinuteAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->MinuteAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Second() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Second(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Second(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Second(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddSeconds(int32_t seconds) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddSeconds(seconds));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::SecondAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SecondAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::SecondAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->SecondAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Nanosecond() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_Nanosecond(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::Nanosecond(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->put_Nanosecond(value));
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::AddNanoseconds(int32_t nanoseconds) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->AddNanoseconds(nanoseconds));
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::NanosecondAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->NanosecondAsString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::NanosecondAsPaddedString(int32_t minDigits) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->NanosecondAsPaddedString(minDigits, put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::Compare(Windows::Globalization::Calendar const& other) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->Compare(get_abi(other), &result));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::CompareDateTime(Windows::Foundation::DateTime const& other) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->CompareDateTime(get_abi(other), &result));
    return result;
}

template <typename D> void consume_Windows_Globalization_ICalendar<D>::CopyTo(Windows::Globalization::Calendar const& other) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->CopyTo(get_abi(other)));
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstMinuteInThisHour() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstMinuteInThisHour(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastMinuteInThisHour() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastMinuteInThisHour(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfMinutesInThisHour() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfMinutesInThisHour(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::FirstSecondInThisMinute() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_FirstSecondInThisMinute(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::LastSecondInThisMinute() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_LastSecondInThisMinute(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_ICalendar<D>::NumberOfSecondsInThisMinute() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_NumberOfSecondsInThisMinute(&value));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendar<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Globalization_ICalendar<D>::IsDaylightSavingTime() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendar)->get_IsDaylightSavingTime(&value));
    return value;
}

template <typename D> Windows::Globalization::Calendar consume_Windows_Globalization_ICalendarFactory<D>::CreateCalendarDefaultCalendarAndClock(param::iterable<hstring> const& languages) const
{
    Windows::Globalization::Calendar result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarFactory)->CreateCalendarDefaultCalendarAndClock(get_abi(languages), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::Calendar consume_Windows_Globalization_ICalendarFactory<D>::CreateCalendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock) const
{
    Windows::Globalization::Calendar result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarFactory)->CreateCalendar(get_abi(languages), get_abi(calendar), get_abi(clock), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::Calendar consume_Windows_Globalization_ICalendarFactory2<D>::CreateCalendarWithTimeZone(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock, param::hstring const& timeZoneId) const
{
    Windows::Globalization::Calendar result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarFactory2)->CreateCalendarWithTimeZone(get_abi(languages), get_abi(calendar), get_abi(clock), get_abi(timeZoneId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Gregorian() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Gregorian(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Hebrew() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Hebrew(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Hijri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Hijri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Japanese() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Japanese(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Julian() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Julian(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Korean() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Korean(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Taiwan() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Taiwan(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::Thai() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_Thai(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics<D>::UmAlQura() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics)->get_UmAlQura(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics2<D>::Persian() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics2)->get_Persian(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>::ChineseLunar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics3)->get_ChineseLunar(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>::JapaneseLunar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics3)->get_JapaneseLunar(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>::KoreanLunar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics3)->get_KoreanLunar(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>::TaiwanLunar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics3)->get_TaiwanLunar(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>::VietnameseLunar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICalendarIdentifiersStatics3)->get_VietnameseLunar(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IClockIdentifiersStatics<D>::TwelveHour() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IClockIdentifiersStatics)->get_TwelveHour(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IClockIdentifiersStatics<D>::TwentyFourHour() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IClockIdentifiersStatics)->get_TwentyFourHour(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AED() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AED(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AFN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AFN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ALL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ALL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AMD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AMD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ANG() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ANG(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AOA() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AOA(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ARS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ARS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AUD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AUD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AWG() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AWG(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::AZN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_AZN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BAM() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BAM(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BBD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BBD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BDT() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BDT(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BGN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BGN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BHD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BHD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BIF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BIF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BMD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BMD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BND() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BND(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BOB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BOB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BRL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BRL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BSD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BSD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BTN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BTN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BWP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BWP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BYR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BYR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::BZD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_BZD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CAD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CAD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CDF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CDF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CHF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CHF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CLP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CLP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CNY() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CNY(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::COP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_COP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CRC() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CRC(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CUP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CUP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CVE() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CVE(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::CZK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_CZK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::DJF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_DJF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::DKK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_DKK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::DOP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_DOP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::DZD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_DZD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::EGP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_EGP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ERN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ERN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ETB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ETB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::EUR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_EUR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::FJD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_FJD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::FKP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_FKP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GBP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GBP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GEL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GEL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GHS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GHS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GIP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GIP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GMD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GMD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GNF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GNF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GTQ() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GTQ(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::GYD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_GYD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::HKD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_HKD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::HNL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_HNL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::HRK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_HRK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::HTG() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_HTG(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::HUF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_HUF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::IDR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_IDR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ILS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ILS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::INR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_INR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::IQD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_IQD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::IRR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_IRR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ISK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ISK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::JMD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_JMD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::JOD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_JOD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::JPY() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_JPY(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KES() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KES(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KGS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KGS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KHR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KHR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KMF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KMF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KPW() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KPW(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KRW() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KRW(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KWD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KWD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KYD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KYD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::KZT() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_KZT(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LAK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LAK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LBP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LBP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LKR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LKR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LRD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LRD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LSL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LSL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LTL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LTL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LVL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LVL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::LYD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_LYD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MAD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MAD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MDL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MDL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MGA() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MGA(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MKD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MKD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MMK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MMK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MNT() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MNT(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MOP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MOP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MRO() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MRO(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MUR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MUR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MVR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MVR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MWK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MWK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MXN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MXN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MYR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MYR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::MZN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_MZN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NAD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NAD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NGN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NGN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NIO() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NIO(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NOK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NOK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NPR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NPR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::NZD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_NZD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::OMR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_OMR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PAB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PAB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PEN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PEN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PGK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PGK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PHP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PHP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PKR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PKR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PLN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PLN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::PYG() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_PYG(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::QAR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_QAR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::RON() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_RON(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::RSD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_RSD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::RUB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_RUB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::RWF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_RWF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SAR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SAR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SBD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SBD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SCR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SCR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SDG() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SDG(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SEK() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SEK(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SGD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SGD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SHP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SHP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SLL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SLL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SOS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SOS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SRD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SRD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::STD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_STD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SYP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SYP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::SZL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_SZL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::THB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_THB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TJS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TJS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TMT() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TMT(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TND() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TND(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TOP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TOP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TRY() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TRY(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TTD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TTD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TWD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TWD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::TZS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_TZS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::UAH() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_UAH(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::UGX() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_UGX(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::USD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_USD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::UYU() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_UYU(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::UZS() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_UZS(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::VEF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_VEF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::VND() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_VND(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::VUV() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_VUV(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::WST() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_WST(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::XAF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_XAF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::XCD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_XCD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::XOF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_XOF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::XPF() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_XPF(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::XXX() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_XXX(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::YER() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_YER(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ZAR() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ZAR(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ZMW() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ZMW(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>::ZWL() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics)->get_ZWL(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ICurrencyIdentifiersStatics2<D>::BYN() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ICurrencyIdentifiersStatics2)->get_BYN(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::Code() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_Code(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::CodeTwoLetter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_CodeTwoLetter(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::CodeThreeLetter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_CodeThreeLetter(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::CodeThreeDigit() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_CodeThreeDigit(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IGeographicRegion<D>::NativeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_NativeName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_IGeographicRegion<D>::CurrenciesInUse() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegion)->get_CurrenciesInUse(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::GeographicRegion consume_Windows_Globalization_IGeographicRegionFactory<D>::CreateGeographicRegion(param::hstring const& geographicRegionCode) const
{
    Windows::Globalization::GeographicRegion result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegionFactory)->CreateGeographicRegion(get_abi(geographicRegionCode), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Globalization_IGeographicRegionStatics<D>::IsSupported(param::hstring const& geographicRegionCode) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IGeographicRegionStatics)->IsSupported(get_abi(geographicRegionCode), &result));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_IJapanesePhoneme<D>::DisplayText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IJapanesePhoneme)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_IJapanesePhoneme<D>::YomiText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IJapanesePhoneme)->get_YomiText(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Globalization_IJapanesePhoneme<D>::IsPhraseStart() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::IJapanesePhoneme)->get_IsPhraseStart(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics<D>::GetWords(param::hstring const& input) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IJapanesePhoneticAnalyzerStatics)->GetWords(get_abi(input), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics<D>::GetWords(param::hstring const& input, bool monoRuby) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::IJapanesePhoneticAnalyzerStatics)->GetWordsWithMonoRubyOption(get_abi(input), monoRuby, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ILanguage<D>::LanguageTag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguage)->get_LanguageTag(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ILanguage<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguage)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ILanguage<D>::NativeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguage)->get_NativeName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ILanguage<D>::Script() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguage)->get_Script(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_ILanguageExtensionSubtags<D>::GetExtensionSubtags(param::hstring const& singleton) const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguageExtensionSubtags)->GetExtensionSubtags(get_abi(singleton), put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Language consume_Windows_Globalization_ILanguageFactory<D>::CreateLanguage(param::hstring const& languageTag) const
{
    Windows::Globalization::Language result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguageFactory)->CreateLanguage(get_abi(languageTag), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Globalization_ILanguageStatics<D>::IsWellFormed(param::hstring const& languageTag) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguageStatics)->IsWellFormed(get_abi(languageTag), &result));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ILanguageStatics<D>::CurrentInputMethodLanguageTag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguageStatics)->get_CurrentInputMethodLanguageTag(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Globalization_ILanguageStatics2<D>::TrySetInputMethodLanguageTag(param::hstring const& languageTag) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ILanguageStatics2)->TrySetInputMethodLanguageTag(get_abi(languageTag), &result));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Arab() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Arab(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::ArabExt() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_ArabExt(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Bali() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Bali(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Beng() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Beng(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Cham() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Cham(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Deva() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Deva(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::FullWide() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_FullWide(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Gujr() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Gujr(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Guru() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Guru(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::HaniDec() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_HaniDec(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Java() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Java(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Kali() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Kali(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Khmr() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Khmr(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Knda() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Knda(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Lana() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Lana(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::LanaTham() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_LanaTham(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Laoo() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Laoo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Latn() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Latn(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Lepc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Lepc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Limb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Limb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Mlym() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Mlym(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Mong() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Mong(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Mtei() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Mtei(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Mymr() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Mymr(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::MymrShan() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_MymrShan(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Nkoo() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Nkoo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Olck() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Olck(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Orya() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Orya(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Saur() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Saur(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Sund() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Sund(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Talu() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Talu(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::TamlDec() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_TamlDec(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Telu() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Telu(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Thai() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Thai(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Tibt() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Tibt(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>::Vaii() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics)->get_Vaii(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::Brah() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_Brah(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::Osma() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_Osma(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::MathBold() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_MathBold(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::MathDbl() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_MathDbl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::MathSans() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_MathSans(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::MathSanb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_MathSanb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::MathMono() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_MathMono(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::ZmthBold() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_ZmthBold(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::ZmthDbl() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_ZmthDbl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::ZmthSans() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_ZmthSans(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::ZmthSanb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_ZmthSanb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>::ZmthMono() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::INumeralSystemIdentifiersStatics2)->get_ZmthMono(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_ITimeZoneOnCalendar<D>::GetTimeZone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ITimeZoneOnCalendar)->GetTimeZone(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_ITimeZoneOnCalendar<D>::ChangeTimeZone(param::hstring const& timeZoneId) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::ITimeZoneOnCalendar)->ChangeTimeZone(get_abi(timeZoneId)));
}

template <typename D> hstring consume_Windows_Globalization_ITimeZoneOnCalendar<D>::TimeZoneAsString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ITimeZoneOnCalendar)->TimeZoneAsFullString(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_ITimeZoneOnCalendar<D>::TimeZoneAsString(int32_t idealLength) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::ITimeZoneOnCalendar)->TimeZoneAsString(idealLength, put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Globalization::IApplicationLanguagesStatics> : produce_base<D, Windows::Globalization::IApplicationLanguagesStatics>
{
    HRESULT __stdcall get_PrimaryLanguageOverride(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryLanguageOverride());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryLanguageOverride(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryLanguageOverride(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_ManifestLanguages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManifestLanguages());
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
    HRESULT __stdcall Clone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetToMin() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetToMin();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetToMax() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetToMax();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall GetCalendarSystem(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCalendarSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeCalendarSystem(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeCalendarSystem(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClock(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetClock());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeClock(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeClock(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDateTime(abi_t<Windows::Foundation::DateTime>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDateTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetToNow() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetToNow();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstEra(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastEra(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfEras(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfEras());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Era(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Era());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Era(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddEras(int32_t eras) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEras(eras);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EraAsFullString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EraAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EraAsString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EraAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstYearInThisEra(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstYearInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastYearInThisEra(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastYearInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfYearsInThisEra(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfYearsInThisEra());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Year());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Year(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddYears(int32_t years) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddYears(years);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall YearAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().YearAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall YearAsTruncatedString(int32_t remainingDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().YearAsTruncatedString(remainingDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall YearAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().YearAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstMonthInThisYear(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstMonthInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastMonthInThisYear(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastMonthInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfMonthsInThisYear(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfMonthsInThisYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Month());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Month(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddMonths(int32_t months) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMonths(months);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsFullString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsFullSoloString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsSoloString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsSoloString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsSoloString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsNumericString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsNumericString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MonthAsPaddedNumericString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MonthAsPaddedNumericString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWeeks(int32_t weeks) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddWeeks(weeks);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstDayInThisMonth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstDayInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastDayInThisMonth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastDayInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfDaysInThisMonth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfDaysInThisMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Day(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Day());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Day(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddDays(int32_t days) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDays(days);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DayOfWeek(abi_t<Windows::Globalization::DayOfWeek>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DayOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayOfWeekAsFullString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayOfWeekAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayOfWeekAsString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayOfWeekAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayOfWeekAsFullSoloString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayOfWeekAsSoloString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DayOfWeekAsSoloString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DayOfWeekAsSoloString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstPeriodInThisDay(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstPeriodInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastPeriodInThisDay(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastPeriodInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfPeriodsInThisDay(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfPeriodsInThisDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Period(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Period());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Period(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPeriods(int32_t periods) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPeriods(periods);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PeriodAsFullString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PeriodAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PeriodAsString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PeriodAsString(idealLength));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstHourInThisPeriod(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstHourInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastHourInThisPeriod(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastHourInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfHoursInThisPeriod(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfHoursInThisPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hour(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hour());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Hour(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddHours(int32_t hours) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddHours(hours);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HourAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().HourAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HourAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().HourAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Minute(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Minute());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Minute(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddMinutes(int32_t minutes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMinutes(minutes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MinuteAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MinuteAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MinuteAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MinuteAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Second(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Second());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Second(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddSeconds(int32_t seconds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddSeconds(seconds);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SecondAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SecondAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SecondAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SecondAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nanosecond(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Nanosecond());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Nanosecond(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddNanoseconds(int32_t nanoseconds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddNanoseconds(nanoseconds);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NanosecondAsString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().NanosecondAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NanosecondAsPaddedString(int32_t minDigits, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().NanosecondAsPaddedString(minDigits));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Compare(::IUnknown* other, int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Compare(*reinterpret_cast<Windows::Globalization::Calendar const*>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompareDateTime(abi_t<Windows::Foundation::DateTime> other, int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CompareDateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyTo(::IUnknown* other) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyTo(*reinterpret_cast<Windows::Globalization::Calendar const*>(&other));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstMinuteInThisHour(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstMinuteInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastMinuteInThisHour(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastMinuteInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfMinutesInThisHour(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfMinutesInThisHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstSecondInThisMinute(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstSecondInThisMinute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSecondInThisMinute(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSecondInThisMinute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfSecondsInThisMinute(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfSecondsInThisMinute());
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

    HRESULT __stdcall get_IsDaylightSavingTime(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDaylightSavingTime());
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
    HRESULT __stdcall CreateCalendarDefaultCalendarAndClock(::IUnknown* languages, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCalendarDefaultCalendarAndClock(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCalendar(::IUnknown* languages, HSTRING calendar, HSTRING clock, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCalendar(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&calendar), *reinterpret_cast<hstring const*>(&clock)));
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
    HRESULT __stdcall CreateCalendarWithTimeZone(::IUnknown* languages, HSTRING calendar, HSTRING clock, HSTRING timeZoneId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCalendarWithTimeZone(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&calendar), *reinterpret_cast<hstring const*>(&clock), *reinterpret_cast<hstring const*>(&timeZoneId)));
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
    HRESULT __stdcall get_Gregorian(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gregorian());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hebrew(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hebrew());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hijri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hijri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Japanese(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Japanese());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Julian(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Julian());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Korean(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Korean());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Taiwan(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Taiwan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thai(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thai());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UmAlQura(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UmAlQura());
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
    HRESULT __stdcall get_Persian(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Persian());
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
    HRESULT __stdcall get_ChineseLunar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChineseLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JapaneseLunar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JapaneseLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KoreanLunar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KoreanLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaiwanLunar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaiwanLunar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VietnameseLunar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VietnameseLunar());
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
    HRESULT __stdcall get_TwelveHour(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TwelveHour());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TwentyFourHour(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TwentyFourHour());
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
    HRESULT __stdcall get_AED(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AED());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AFN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AFN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ALL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ALL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AMD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ANG(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ANG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AOA(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AOA());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ARS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ARS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AUD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AUD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AWG(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AWG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AZN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AZN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BAM(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BAM());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BBD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BBD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BDT(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BDT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BGN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BGN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BHD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BHD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BIF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BIF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BMD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BND(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BOB(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BOB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BRL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BRL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BSD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BSD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BTN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BTN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BWP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BWP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BYR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BYR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BZD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CAD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CDF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CDF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CHF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CHF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CLP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CLP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CNY(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CNY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_COP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().COP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CRC(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CRC());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CUP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CUP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CVE(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CVE());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CZK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CZK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DJF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DJF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DKK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DKK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DOP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DZD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EGP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EGP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ERN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ERN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ETB(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ETB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EUR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EUR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FJD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FJD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FKP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FKP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GBP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GBP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GEL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GEL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GHS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GHS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GIP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GIP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GMD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GNF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GNF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GTQ(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GTQ());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GYD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HKD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HKD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HNL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HNL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HRK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HRK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HTG(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HTG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HUF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HUF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IDR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IDR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ILS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ILS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_INR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().INR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IQD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IQD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IRR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IRR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ISK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ISK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JMD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JMD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JOD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JOD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JPY(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JPY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KES(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KES());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KGS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KGS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KHR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KHR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KMF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KMF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KPW(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KPW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KRW(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KRW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KWD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KWD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KYD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KZT(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KZT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LAK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LAK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LBP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LBP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LKR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LKR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LRD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LRD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LSL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LSL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LTL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LTL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LVL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LVL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LYD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LYD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MAD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MDL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MDL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MGA(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MGA());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MKD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MKD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MMK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MMK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MNT(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MNT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MOP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MRO(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MRO());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MUR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MUR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MVR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MVR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MWK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MWK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MXN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MXN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MYR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MYR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MZN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MZN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NAD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NAD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NGN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NGN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NIO(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NIO());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NOK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NOK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NPR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NPR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NZD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NZD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OMR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OMR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PAB(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PAB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PEN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PEN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PGK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PGK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PHP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PHP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PKR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PKR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PLN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PLN());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PYG(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PYG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QAR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RON(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RON());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RSD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RSD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RUB(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RUB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RWF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RWF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SAR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SBD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SBD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SCR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SCR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SDG(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SDG());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SEK(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SEK());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SGD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SGD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SHP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SHP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SLL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SLL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SOS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SOS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SRD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SRD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_STD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().STD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SYP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SYP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SZL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SZL());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_THB(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().THB());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TJS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TJS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TMT(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TMT());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TND(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TOP(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TOP());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TRY(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TRY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TTD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TTD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TWD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TWD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TZS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TZS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UAH(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UAH());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UGX(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UGX());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_USD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().USD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UYU(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UYU());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UZS(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UZS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VEF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VEF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VND(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VND());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VUV(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VUV());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WST(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WST());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XAF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XAF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XCD(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XCD());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XOF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XOF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XPF(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XPF());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XXX(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XXX());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YER(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YER());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZAR(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZAR());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZMW(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZMW());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZWL(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZWL());
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
struct produce<D, Windows::Globalization::ICurrencyIdentifiersStatics2> : produce_base<D, Windows::Globalization::ICurrencyIdentifiersStatics2>
{
    HRESULT __stdcall get_BYN(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BYN());
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
    HRESULT __stdcall get_Code(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeTwoLetter(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CodeTwoLetter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeThreeLetter(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CodeThreeLetter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodeThreeDigit(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CodeThreeDigit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NativeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrenciesInUse(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrenciesInUse());
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
    HRESULT __stdcall CreateGeographicRegion(HSTRING geographicRegionCode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateGeographicRegion(*reinterpret_cast<hstring const*>(&geographicRegionCode)));
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
    HRESULT __stdcall IsSupported(HSTRING geographicRegionCode, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported(*reinterpret_cast<hstring const*>(&geographicRegionCode)));
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
    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YomiText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPhraseStart(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPhraseStart());
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
    HRESULT __stdcall GetWords(HSTRING input, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetWords(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWordsWithMonoRubyOption(HSTRING input, bool monoRuby, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetWords(*reinterpret_cast<hstring const*>(&input), monoRuby));
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
    HRESULT __stdcall get_LanguageTag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NativeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Script(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Script());
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
    HRESULT __stdcall GetExtensionSubtags(HSTRING singleton, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetExtensionSubtags(*reinterpret_cast<hstring const*>(&singleton)));
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
    HRESULT __stdcall CreateLanguage(HSTRING languageTag, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateLanguage(*reinterpret_cast<hstring const*>(&languageTag)));
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
    HRESULT __stdcall IsWellFormed(HSTRING languageTag, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsWellFormed(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentInputMethodLanguageTag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentInputMethodLanguageTag());
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
    HRESULT __stdcall TrySetInputMethodLanguageTag(HSTRING languageTag, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetInputMethodLanguageTag(*reinterpret_cast<hstring const*>(&languageTag)));
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
    HRESULT __stdcall get_Arab(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arab());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArabExt(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ArabExt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bali(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bali());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Beng(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Beng());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cham(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cham());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deva(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deva());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullWide(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullWide());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gujr(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gujr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Guru(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Guru());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HaniDec(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HaniDec());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Java(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Java());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kali(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kali());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Khmr(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Khmr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Knda(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Knda());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lana(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Lana());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanaTham(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanaTham());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Laoo(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Laoo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latn(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Latn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lepc(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Lepc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Limb(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Limb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mlym(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mlym());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mong(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mong());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mtei(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mtei());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mymr(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mymr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MymrShan(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MymrShan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nkoo(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Nkoo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Olck(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Olck());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orya(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orya());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Saur(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Saur());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sund(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sund());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Talu(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Talu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TamlDec(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TamlDec());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Telu(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Telu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thai(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thai());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tibt(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tibt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Vaii(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Vaii());
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
    HRESULT __stdcall get_Brah(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Brah());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Osma(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Osma());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathBold(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathBold());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathDbl(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathDbl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathSans(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathSans());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathSanb(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathSanb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathMono(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathMono());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthBold(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZmthBold());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthDbl(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZmthDbl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthSans(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZmthSans());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthSanb(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZmthSanb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZmthMono(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZmthMono());
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
    HRESULT __stdcall GetTimeZone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTimeZone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeTimeZone(HSTRING timeZoneId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeTimeZone(*reinterpret_cast<hstring const*>(&timeZoneId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TimeZoneAsFullString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TimeZoneAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TimeZoneAsString(int32_t idealLength, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TimeZoneAsString(idealLength));
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

WINRT_EXPORT namespace winrt::Windows::Globalization {

inline hstring ApplicationLanguages::PrimaryLanguageOverride()
{
    return get_activation_factory<ApplicationLanguages, Windows::Globalization::IApplicationLanguagesStatics>().PrimaryLanguageOverride();
}

inline void ApplicationLanguages::PrimaryLanguageOverride(param::hstring const& value)
{
    get_activation_factory<ApplicationLanguages, Windows::Globalization::IApplicationLanguagesStatics>().PrimaryLanguageOverride(value);
}

inline Windows::Foundation::Collections::IVectorView<hstring> ApplicationLanguages::Languages()
{
    return get_activation_factory<ApplicationLanguages, Windows::Globalization::IApplicationLanguagesStatics>().Languages();
}

inline Windows::Foundation::Collections::IVectorView<hstring> ApplicationLanguages::ManifestLanguages()
{
    return get_activation_factory<ApplicationLanguages, Windows::Globalization::IApplicationLanguagesStatics>().ManifestLanguages();
}

inline Calendar::Calendar() :
    Calendar(activate_instance<Calendar>())
{}

inline Calendar::Calendar(param::iterable<hstring> const& languages) :
    Calendar(get_activation_factory<Calendar, Windows::Globalization::ICalendarFactory>().CreateCalendarDefaultCalendarAndClock(languages))
{}

inline Calendar::Calendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock) :
    Calendar(get_activation_factory<Calendar, Windows::Globalization::ICalendarFactory>().CreateCalendar(languages, calendar, clock))
{}

inline Calendar::Calendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock, param::hstring const& timeZoneId) :
    Calendar(get_activation_factory<Calendar, Windows::Globalization::ICalendarFactory2>().CreateCalendarWithTimeZone(languages, calendar, clock, timeZoneId))
{}

inline hstring CalendarIdentifiers::Gregorian()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Gregorian();
}

inline hstring CalendarIdentifiers::Hebrew()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Hebrew();
}

inline hstring CalendarIdentifiers::Hijri()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Hijri();
}

inline hstring CalendarIdentifiers::Japanese()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Japanese();
}

inline hstring CalendarIdentifiers::Julian()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Julian();
}

inline hstring CalendarIdentifiers::Korean()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Korean();
}

inline hstring CalendarIdentifiers::Taiwan()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Taiwan();
}

inline hstring CalendarIdentifiers::Thai()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().Thai();
}

inline hstring CalendarIdentifiers::UmAlQura()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics>().UmAlQura();
}

inline hstring CalendarIdentifiers::Persian()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics2>().Persian();
}

inline hstring CalendarIdentifiers::ChineseLunar()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics3>().ChineseLunar();
}

inline hstring CalendarIdentifiers::JapaneseLunar()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics3>().JapaneseLunar();
}

inline hstring CalendarIdentifiers::KoreanLunar()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics3>().KoreanLunar();
}

inline hstring CalendarIdentifiers::TaiwanLunar()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics3>().TaiwanLunar();
}

inline hstring CalendarIdentifiers::VietnameseLunar()
{
    return get_activation_factory<CalendarIdentifiers, Windows::Globalization::ICalendarIdentifiersStatics3>().VietnameseLunar();
}

inline hstring ClockIdentifiers::TwelveHour()
{
    return get_activation_factory<ClockIdentifiers, Windows::Globalization::IClockIdentifiersStatics>().TwelveHour();
}

inline hstring ClockIdentifiers::TwentyFourHour()
{
    return get_activation_factory<ClockIdentifiers, Windows::Globalization::IClockIdentifiersStatics>().TwentyFourHour();
}

inline hstring CurrencyIdentifiers::AED()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AED();
}

inline hstring CurrencyIdentifiers::AFN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AFN();
}

inline hstring CurrencyIdentifiers::ALL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ALL();
}

inline hstring CurrencyIdentifiers::AMD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AMD();
}

inline hstring CurrencyIdentifiers::ANG()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ANG();
}

inline hstring CurrencyIdentifiers::AOA()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AOA();
}

inline hstring CurrencyIdentifiers::ARS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ARS();
}

inline hstring CurrencyIdentifiers::AUD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AUD();
}

inline hstring CurrencyIdentifiers::AWG()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AWG();
}

inline hstring CurrencyIdentifiers::AZN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().AZN();
}

inline hstring CurrencyIdentifiers::BAM()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BAM();
}

inline hstring CurrencyIdentifiers::BBD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BBD();
}

inline hstring CurrencyIdentifiers::BDT()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BDT();
}

inline hstring CurrencyIdentifiers::BGN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BGN();
}

inline hstring CurrencyIdentifiers::BHD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BHD();
}

inline hstring CurrencyIdentifiers::BIF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BIF();
}

inline hstring CurrencyIdentifiers::BMD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BMD();
}

inline hstring CurrencyIdentifiers::BND()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BND();
}

inline hstring CurrencyIdentifiers::BOB()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BOB();
}

inline hstring CurrencyIdentifiers::BRL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BRL();
}

inline hstring CurrencyIdentifiers::BSD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BSD();
}

inline hstring CurrencyIdentifiers::BTN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BTN();
}

inline hstring CurrencyIdentifiers::BWP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BWP();
}

inline hstring CurrencyIdentifiers::BYR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BYR();
}

inline hstring CurrencyIdentifiers::BZD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().BZD();
}

inline hstring CurrencyIdentifiers::CAD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CAD();
}

inline hstring CurrencyIdentifiers::CDF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CDF();
}

inline hstring CurrencyIdentifiers::CHF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CHF();
}

inline hstring CurrencyIdentifiers::CLP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CLP();
}

inline hstring CurrencyIdentifiers::CNY()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CNY();
}

inline hstring CurrencyIdentifiers::COP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().COP();
}

inline hstring CurrencyIdentifiers::CRC()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CRC();
}

inline hstring CurrencyIdentifiers::CUP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CUP();
}

inline hstring CurrencyIdentifiers::CVE()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CVE();
}

inline hstring CurrencyIdentifiers::CZK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().CZK();
}

inline hstring CurrencyIdentifiers::DJF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().DJF();
}

inline hstring CurrencyIdentifiers::DKK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().DKK();
}

inline hstring CurrencyIdentifiers::DOP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().DOP();
}

inline hstring CurrencyIdentifiers::DZD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().DZD();
}

inline hstring CurrencyIdentifiers::EGP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().EGP();
}

inline hstring CurrencyIdentifiers::ERN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ERN();
}

inline hstring CurrencyIdentifiers::ETB()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ETB();
}

inline hstring CurrencyIdentifiers::EUR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().EUR();
}

inline hstring CurrencyIdentifiers::FJD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().FJD();
}

inline hstring CurrencyIdentifiers::FKP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().FKP();
}

inline hstring CurrencyIdentifiers::GBP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GBP();
}

inline hstring CurrencyIdentifiers::GEL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GEL();
}

inline hstring CurrencyIdentifiers::GHS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GHS();
}

inline hstring CurrencyIdentifiers::GIP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GIP();
}

inline hstring CurrencyIdentifiers::GMD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GMD();
}

inline hstring CurrencyIdentifiers::GNF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GNF();
}

inline hstring CurrencyIdentifiers::GTQ()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GTQ();
}

inline hstring CurrencyIdentifiers::GYD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().GYD();
}

inline hstring CurrencyIdentifiers::HKD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().HKD();
}

inline hstring CurrencyIdentifiers::HNL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().HNL();
}

inline hstring CurrencyIdentifiers::HRK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().HRK();
}

inline hstring CurrencyIdentifiers::HTG()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().HTG();
}

inline hstring CurrencyIdentifiers::HUF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().HUF();
}

inline hstring CurrencyIdentifiers::IDR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().IDR();
}

inline hstring CurrencyIdentifiers::ILS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ILS();
}

inline hstring CurrencyIdentifiers::INR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().INR();
}

inline hstring CurrencyIdentifiers::IQD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().IQD();
}

inline hstring CurrencyIdentifiers::IRR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().IRR();
}

inline hstring CurrencyIdentifiers::ISK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ISK();
}

inline hstring CurrencyIdentifiers::JMD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().JMD();
}

inline hstring CurrencyIdentifiers::JOD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().JOD();
}

inline hstring CurrencyIdentifiers::JPY()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().JPY();
}

inline hstring CurrencyIdentifiers::KES()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KES();
}

inline hstring CurrencyIdentifiers::KGS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KGS();
}

inline hstring CurrencyIdentifiers::KHR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KHR();
}

inline hstring CurrencyIdentifiers::KMF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KMF();
}

inline hstring CurrencyIdentifiers::KPW()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KPW();
}

inline hstring CurrencyIdentifiers::KRW()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KRW();
}

inline hstring CurrencyIdentifiers::KWD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KWD();
}

inline hstring CurrencyIdentifiers::KYD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KYD();
}

inline hstring CurrencyIdentifiers::KZT()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().KZT();
}

inline hstring CurrencyIdentifiers::LAK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LAK();
}

inline hstring CurrencyIdentifiers::LBP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LBP();
}

inline hstring CurrencyIdentifiers::LKR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LKR();
}

inline hstring CurrencyIdentifiers::LRD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LRD();
}

inline hstring CurrencyIdentifiers::LSL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LSL();
}

inline hstring CurrencyIdentifiers::LTL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LTL();
}

inline hstring CurrencyIdentifiers::LVL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LVL();
}

inline hstring CurrencyIdentifiers::LYD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().LYD();
}

inline hstring CurrencyIdentifiers::MAD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MAD();
}

inline hstring CurrencyIdentifiers::MDL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MDL();
}

inline hstring CurrencyIdentifiers::MGA()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MGA();
}

inline hstring CurrencyIdentifiers::MKD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MKD();
}

inline hstring CurrencyIdentifiers::MMK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MMK();
}

inline hstring CurrencyIdentifiers::MNT()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MNT();
}

inline hstring CurrencyIdentifiers::MOP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MOP();
}

inline hstring CurrencyIdentifiers::MRO()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MRO();
}

inline hstring CurrencyIdentifiers::MUR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MUR();
}

inline hstring CurrencyIdentifiers::MVR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MVR();
}

inline hstring CurrencyIdentifiers::MWK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MWK();
}

inline hstring CurrencyIdentifiers::MXN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MXN();
}

inline hstring CurrencyIdentifiers::MYR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MYR();
}

inline hstring CurrencyIdentifiers::MZN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().MZN();
}

inline hstring CurrencyIdentifiers::NAD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NAD();
}

inline hstring CurrencyIdentifiers::NGN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NGN();
}

inline hstring CurrencyIdentifiers::NIO()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NIO();
}

inline hstring CurrencyIdentifiers::NOK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NOK();
}

inline hstring CurrencyIdentifiers::NPR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NPR();
}

inline hstring CurrencyIdentifiers::NZD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().NZD();
}

inline hstring CurrencyIdentifiers::OMR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().OMR();
}

inline hstring CurrencyIdentifiers::PAB()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PAB();
}

inline hstring CurrencyIdentifiers::PEN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PEN();
}

inline hstring CurrencyIdentifiers::PGK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PGK();
}

inline hstring CurrencyIdentifiers::PHP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PHP();
}

inline hstring CurrencyIdentifiers::PKR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PKR();
}

inline hstring CurrencyIdentifiers::PLN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PLN();
}

inline hstring CurrencyIdentifiers::PYG()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().PYG();
}

inline hstring CurrencyIdentifiers::QAR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().QAR();
}

inline hstring CurrencyIdentifiers::RON()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().RON();
}

inline hstring CurrencyIdentifiers::RSD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().RSD();
}

inline hstring CurrencyIdentifiers::RUB()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().RUB();
}

inline hstring CurrencyIdentifiers::RWF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().RWF();
}

inline hstring CurrencyIdentifiers::SAR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SAR();
}

inline hstring CurrencyIdentifiers::SBD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SBD();
}

inline hstring CurrencyIdentifiers::SCR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SCR();
}

inline hstring CurrencyIdentifiers::SDG()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SDG();
}

inline hstring CurrencyIdentifiers::SEK()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SEK();
}

inline hstring CurrencyIdentifiers::SGD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SGD();
}

inline hstring CurrencyIdentifiers::SHP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SHP();
}

inline hstring CurrencyIdentifiers::SLL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SLL();
}

inline hstring CurrencyIdentifiers::SOS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SOS();
}

inline hstring CurrencyIdentifiers::SRD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SRD();
}

inline hstring CurrencyIdentifiers::STD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().STD();
}

inline hstring CurrencyIdentifiers::SYP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SYP();
}

inline hstring CurrencyIdentifiers::SZL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().SZL();
}

inline hstring CurrencyIdentifiers::THB()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().THB();
}

inline hstring CurrencyIdentifiers::TJS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TJS();
}

inline hstring CurrencyIdentifiers::TMT()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TMT();
}

inline hstring CurrencyIdentifiers::TND()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TND();
}

inline hstring CurrencyIdentifiers::TOP()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TOP();
}

inline hstring CurrencyIdentifiers::TRY()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TRY();
}

inline hstring CurrencyIdentifiers::TTD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TTD();
}

inline hstring CurrencyIdentifiers::TWD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TWD();
}

inline hstring CurrencyIdentifiers::TZS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().TZS();
}

inline hstring CurrencyIdentifiers::UAH()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().UAH();
}

inline hstring CurrencyIdentifiers::UGX()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().UGX();
}

inline hstring CurrencyIdentifiers::USD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().USD();
}

inline hstring CurrencyIdentifiers::UYU()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().UYU();
}

inline hstring CurrencyIdentifiers::UZS()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().UZS();
}

inline hstring CurrencyIdentifiers::VEF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().VEF();
}

inline hstring CurrencyIdentifiers::VND()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().VND();
}

inline hstring CurrencyIdentifiers::VUV()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().VUV();
}

inline hstring CurrencyIdentifiers::WST()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().WST();
}

inline hstring CurrencyIdentifiers::XAF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().XAF();
}

inline hstring CurrencyIdentifiers::XCD()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().XCD();
}

inline hstring CurrencyIdentifiers::XOF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().XOF();
}

inline hstring CurrencyIdentifiers::XPF()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().XPF();
}

inline hstring CurrencyIdentifiers::XXX()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().XXX();
}

inline hstring CurrencyIdentifiers::YER()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().YER();
}

inline hstring CurrencyIdentifiers::ZAR()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ZAR();
}

inline hstring CurrencyIdentifiers::ZMW()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ZMW();
}

inline hstring CurrencyIdentifiers::ZWL()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics>().ZWL();
}

inline hstring CurrencyIdentifiers::BYN()
{
    return get_activation_factory<CurrencyIdentifiers, Windows::Globalization::ICurrencyIdentifiersStatics2>().BYN();
}

inline GeographicRegion::GeographicRegion() :
    GeographicRegion(activate_instance<GeographicRegion>())
{}

inline GeographicRegion::GeographicRegion(param::hstring const& geographicRegionCode) :
    GeographicRegion(get_activation_factory<GeographicRegion, Windows::Globalization::IGeographicRegionFactory>().CreateGeographicRegion(geographicRegionCode))
{}

inline bool GeographicRegion::IsSupported(param::hstring const& geographicRegionCode)
{
    return get_activation_factory<GeographicRegion, Windows::Globalization::IGeographicRegionStatics>().IsSupported(geographicRegionCode);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> JapanesePhoneticAnalyzer::GetWords(param::hstring const& input)
{
    return get_activation_factory<JapanesePhoneticAnalyzer, Windows::Globalization::IJapanesePhoneticAnalyzerStatics>().GetWords(input);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> JapanesePhoneticAnalyzer::GetWords(param::hstring const& input, bool monoRuby)
{
    return get_activation_factory<JapanesePhoneticAnalyzer, Windows::Globalization::IJapanesePhoneticAnalyzerStatics>().GetWords(input, monoRuby);
}

inline Language::Language(param::hstring const& languageTag) :
    Language(get_activation_factory<Language, Windows::Globalization::ILanguageFactory>().CreateLanguage(languageTag))
{}

inline bool Language::IsWellFormed(param::hstring const& languageTag)
{
    return get_activation_factory<Language, Windows::Globalization::ILanguageStatics>().IsWellFormed(languageTag);
}

inline hstring Language::CurrentInputMethodLanguageTag()
{
    return get_activation_factory<Language, Windows::Globalization::ILanguageStatics>().CurrentInputMethodLanguageTag();
}

inline bool Language::TrySetInputMethodLanguageTag(param::hstring const& languageTag)
{
    return get_activation_factory<Language, Windows::Globalization::ILanguageStatics2>().TrySetInputMethodLanguageTag(languageTag);
}

inline hstring NumeralSystemIdentifiers::Arab()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Arab();
}

inline hstring NumeralSystemIdentifiers::ArabExt()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().ArabExt();
}

inline hstring NumeralSystemIdentifiers::Bali()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Bali();
}

inline hstring NumeralSystemIdentifiers::Beng()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Beng();
}

inline hstring NumeralSystemIdentifiers::Cham()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Cham();
}

inline hstring NumeralSystemIdentifiers::Deva()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Deva();
}

inline hstring NumeralSystemIdentifiers::FullWide()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().FullWide();
}

inline hstring NumeralSystemIdentifiers::Gujr()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Gujr();
}

inline hstring NumeralSystemIdentifiers::Guru()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Guru();
}

inline hstring NumeralSystemIdentifiers::HaniDec()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().HaniDec();
}

inline hstring NumeralSystemIdentifiers::Java()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Java();
}

inline hstring NumeralSystemIdentifiers::Kali()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Kali();
}

inline hstring NumeralSystemIdentifiers::Khmr()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Khmr();
}

inline hstring NumeralSystemIdentifiers::Knda()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Knda();
}

inline hstring NumeralSystemIdentifiers::Lana()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Lana();
}

inline hstring NumeralSystemIdentifiers::LanaTham()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().LanaTham();
}

inline hstring NumeralSystemIdentifiers::Laoo()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Laoo();
}

inline hstring NumeralSystemIdentifiers::Latn()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Latn();
}

inline hstring NumeralSystemIdentifiers::Lepc()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Lepc();
}

inline hstring NumeralSystemIdentifiers::Limb()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Limb();
}

inline hstring NumeralSystemIdentifiers::Mlym()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Mlym();
}

inline hstring NumeralSystemIdentifiers::Mong()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Mong();
}

inline hstring NumeralSystemIdentifiers::Mtei()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Mtei();
}

inline hstring NumeralSystemIdentifiers::Mymr()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Mymr();
}

inline hstring NumeralSystemIdentifiers::MymrShan()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().MymrShan();
}

inline hstring NumeralSystemIdentifiers::Nkoo()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Nkoo();
}

inline hstring NumeralSystemIdentifiers::Olck()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Olck();
}

inline hstring NumeralSystemIdentifiers::Orya()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Orya();
}

inline hstring NumeralSystemIdentifiers::Saur()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Saur();
}

inline hstring NumeralSystemIdentifiers::Sund()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Sund();
}

inline hstring NumeralSystemIdentifiers::Talu()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Talu();
}

inline hstring NumeralSystemIdentifiers::TamlDec()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().TamlDec();
}

inline hstring NumeralSystemIdentifiers::Telu()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Telu();
}

inline hstring NumeralSystemIdentifiers::Thai()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Thai();
}

inline hstring NumeralSystemIdentifiers::Tibt()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Tibt();
}

inline hstring NumeralSystemIdentifiers::Vaii()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics>().Vaii();
}

inline hstring NumeralSystemIdentifiers::Brah()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().Brah();
}

inline hstring NumeralSystemIdentifiers::Osma()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().Osma();
}

inline hstring NumeralSystemIdentifiers::MathBold()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().MathBold();
}

inline hstring NumeralSystemIdentifiers::MathDbl()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().MathDbl();
}

inline hstring NumeralSystemIdentifiers::MathSans()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().MathSans();
}

inline hstring NumeralSystemIdentifiers::MathSanb()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().MathSanb();
}

inline hstring NumeralSystemIdentifiers::MathMono()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().MathMono();
}

inline hstring NumeralSystemIdentifiers::ZmthBold()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().ZmthBold();
}

inline hstring NumeralSystemIdentifiers::ZmthDbl()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().ZmthDbl();
}

inline hstring NumeralSystemIdentifiers::ZmthSans()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().ZmthSans();
}

inline hstring NumeralSystemIdentifiers::ZmthSanb()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().ZmthSanb();
}

inline hstring NumeralSystemIdentifiers::ZmthMono()
{
    return get_activation_factory<NumeralSystemIdentifiers, Windows::Globalization::INumeralSystemIdentifiersStatics2>().ZmthMono();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::IApplicationLanguagesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IApplicationLanguagesStatics> {};

template<> struct hash<winrt::Windows::Globalization::ICalendar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendar> {};

template<> struct hash<winrt::Windows::Globalization::ICalendarFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendarFactory> {};

template<> struct hash<winrt::Windows::Globalization::ICalendarFactory2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendarFactory2> {};

template<> struct hash<winrt::Windows::Globalization::ICalendarIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendarIdentifiersStatics> {};

template<> struct hash<winrt::Windows::Globalization::ICalendarIdentifiersStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendarIdentifiersStatics2> {};

template<> struct hash<winrt::Windows::Globalization::ICalendarIdentifiersStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICalendarIdentifiersStatics3> {};

template<> struct hash<winrt::Windows::Globalization::IClockIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IClockIdentifiersStatics> {};

template<> struct hash<winrt::Windows::Globalization::ICurrencyIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICurrencyIdentifiersStatics> {};

template<> struct hash<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2> {};

template<> struct hash<winrt::Windows::Globalization::IGeographicRegion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IGeographicRegion> {};

template<> struct hash<winrt::Windows::Globalization::IGeographicRegionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IGeographicRegionFactory> {};

template<> struct hash<winrt::Windows::Globalization::IGeographicRegionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IGeographicRegionStatics> {};

template<> struct hash<winrt::Windows::Globalization::IJapanesePhoneme> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IJapanesePhoneme> {};

template<> struct hash<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics> {};

template<> struct hash<winrt::Windows::Globalization::ILanguage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ILanguage> {};

template<> struct hash<winrt::Windows::Globalization::ILanguageExtensionSubtags> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ILanguageExtensionSubtags> {};

template<> struct hash<winrt::Windows::Globalization::ILanguageFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ILanguageFactory> {};

template<> struct hash<winrt::Windows::Globalization::ILanguageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ILanguageStatics> {};

template<> struct hash<winrt::Windows::Globalization::ILanguageStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ILanguageStatics2> {};

template<> struct hash<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics> {};

template<> struct hash<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2> {};

template<> struct hash<winrt::Windows::Globalization::ITimeZoneOnCalendar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ITimeZoneOnCalendar> {};

template<> struct hash<winrt::Windows::Globalization::ApplicationLanguages> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ApplicationLanguages> {};

template<> struct hash<winrt::Windows::Globalization::Calendar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Calendar> {};

template<> struct hash<winrt::Windows::Globalization::CalendarIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::CalendarIdentifiers> {};

template<> struct hash<winrt::Windows::Globalization::ClockIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::ClockIdentifiers> {};

template<> struct hash<winrt::Windows::Globalization::CurrencyIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::CurrencyIdentifiers> {};

template<> struct hash<winrt::Windows::Globalization::GeographicRegion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::GeographicRegion> {};

template<> struct hash<winrt::Windows::Globalization::JapanesePhoneme> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::JapanesePhoneme> {};

template<> struct hash<winrt::Windows::Globalization::JapanesePhoneticAnalyzer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::JapanesePhoneticAnalyzer> {};

template<> struct hash<winrt::Windows::Globalization::Language> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Language> {};

template<> struct hash<winrt::Windows::Globalization::NumeralSystemIdentifiers> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::NumeralSystemIdentifiers> {};

}

WINRT_WARNING_POP
