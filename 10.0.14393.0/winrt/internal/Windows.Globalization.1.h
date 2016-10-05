// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Globalization.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Globalization {

struct __declspec(uuid("75b40847-0a4c-4a92-9565-fd63c95f7aed")) __declspec(novtable) IApplicationLanguagesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PrimaryLanguageOverride(hstring * value) = 0;
    virtual HRESULT __stdcall put_PrimaryLanguageOverride(hstring value) = 0;
    virtual HRESULT __stdcall get_Languages(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_ManifestLanguages(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("ca30221d-86d9-40fb-a26b-d44eb7cf08ea")) __declspec(novtable) ICalendar : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Clone(Windows::Globalization::ICalendar ** value) = 0;
    virtual HRESULT __stdcall abi_SetToMin() = 0;
    virtual HRESULT __stdcall abi_SetToMax() = 0;
    virtual HRESULT __stdcall get_Languages(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(hstring * value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(hstring value) = 0;
    virtual HRESULT __stdcall abi_GetCalendarSystem(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ChangeCalendarSystem(hstring value) = 0;
    virtual HRESULT __stdcall abi_GetClock(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ChangeClock(hstring value) = 0;
    virtual HRESULT __stdcall abi_GetDateTime(Windows::Foundation::DateTime * result) = 0;
    virtual HRESULT __stdcall abi_SetDateTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall abi_SetToNow() = 0;
    virtual HRESULT __stdcall get_FirstEra(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastEra(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfEras(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Era(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Era(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddEras(int32_t eras) = 0;
    virtual HRESULT __stdcall abi_EraAsFullString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_EraAsString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall get_FirstYearInThisEra(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastYearInThisEra(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfYearsInThisEra(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Year(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Year(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddYears(int32_t years) = 0;
    virtual HRESULT __stdcall abi_YearAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_YearAsTruncatedString(int32_t remainingDigits, hstring * result) = 0;
    virtual HRESULT __stdcall abi_YearAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall get_FirstMonthInThisYear(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastMonthInThisYear(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfMonthsInThisYear(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Month(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Month(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddMonths(int32_t months) = 0;
    virtual HRESULT __stdcall abi_MonthAsFullString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_MonthAsString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall abi_MonthAsFullSoloString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_MonthAsSoloString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall abi_MonthAsNumericString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_MonthAsPaddedNumericString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall abi_AddWeeks(int32_t weeks) = 0;
    virtual HRESULT __stdcall get_FirstDayInThisMonth(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastDayInThisMonth(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfDaysInThisMonth(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Day(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Day(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddDays(int32_t days) = 0;
    virtual HRESULT __stdcall abi_DayAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_DayAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall get_DayOfWeek(winrt::Windows::Globalization::DayOfWeek * value) = 0;
    virtual HRESULT __stdcall abi_DayOfWeekAsFullString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_DayOfWeekAsString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall abi_DayOfWeekAsFullSoloString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_DayOfWeekAsSoloString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall get_FirstPeriodInThisDay(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastPeriodInThisDay(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfPeriodsInThisDay(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Period(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Period(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddPeriods(int32_t periods) = 0;
    virtual HRESULT __stdcall abi_PeriodAsFullString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_PeriodAsString(int32_t idealLength, hstring * result) = 0;
    virtual HRESULT __stdcall get_FirstHourInThisPeriod(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastHourInThisPeriod(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfHoursInThisPeriod(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Hour(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Hour(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddHours(int32_t hours) = 0;
    virtual HRESULT __stdcall abi_HourAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_HourAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall get_Minute(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Minute(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddMinutes(int32_t minutes) = 0;
    virtual HRESULT __stdcall abi_MinuteAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_MinuteAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall get_Second(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Second(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddSeconds(int32_t seconds) = 0;
    virtual HRESULT __stdcall abi_SecondAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_SecondAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall get_Nanosecond(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Nanosecond(int32_t value) = 0;
    virtual HRESULT __stdcall abi_AddNanoseconds(int32_t nanoseconds) = 0;
    virtual HRESULT __stdcall abi_NanosecondAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_NanosecondAsPaddedString(int32_t minDigits, hstring * result) = 0;
    virtual HRESULT __stdcall abi_Compare(Windows::Globalization::ICalendar * other, int32_t * result) = 0;
    virtual HRESULT __stdcall abi_CompareDateTime(Windows::Foundation::DateTime other, int32_t * result) = 0;
    virtual HRESULT __stdcall abi_CopyTo(Windows::Globalization::ICalendar * other) = 0;
    virtual HRESULT __stdcall get_FirstMinuteInThisHour(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastMinuteInThisHour(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfMinutesInThisHour(int32_t * value) = 0;
    virtual HRESULT __stdcall get_FirstSecondInThisMinute(int32_t * value) = 0;
    virtual HRESULT __stdcall get_LastSecondInThisMinute(int32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfSecondsInThisMinute(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsDaylightSavingTime(bool * value) = 0;
};

struct __declspec(uuid("83f58412-e56b-4c75-a66e-0f63d57758a6")) __declspec(novtable) ICalendarFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCalendarDefaultCalendarAndClock(Windows::Foundation::Collections::IIterable<hstring> * languages, Windows::Globalization::ICalendar ** result) = 0;
    virtual HRESULT __stdcall abi_CreateCalendar(Windows::Foundation::Collections::IIterable<hstring> * languages, hstring calendar, hstring clock, Windows::Globalization::ICalendar ** result) = 0;
};

struct __declspec(uuid("b44b378c-ca7e-4590-9e72-ea2bec1a5115")) __declspec(novtable) ICalendarFactory2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCalendarWithTimeZone(Windows::Foundation::Collections::IIterable<hstring> * languages, hstring calendar, hstring clock, hstring timeZoneId, Windows::Globalization::ICalendar ** result) = 0;
};

struct __declspec(uuid("80653f68-2cb2-4c1f-b590-f0f52bf4fd1a")) __declspec(novtable) ICalendarIdentifiersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Gregorian(hstring * value) = 0;
    virtual HRESULT __stdcall get_Hebrew(hstring * value) = 0;
    virtual HRESULT __stdcall get_Hijri(hstring * value) = 0;
    virtual HRESULT __stdcall get_Japanese(hstring * value) = 0;
    virtual HRESULT __stdcall get_Julian(hstring * value) = 0;
    virtual HRESULT __stdcall get_Korean(hstring * value) = 0;
    virtual HRESULT __stdcall get_Taiwan(hstring * value) = 0;
    virtual HRESULT __stdcall get_Thai(hstring * value) = 0;
    virtual HRESULT __stdcall get_UmAlQura(hstring * value) = 0;
};

struct __declspec(uuid("7df4d488-5fd0-42a7-95b5-7d98d823075f")) __declspec(novtable) ICalendarIdentifiersStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Persian(hstring * value) = 0;
};

struct __declspec(uuid("2c225423-1fad-40c0-9334-a8eb90db04f5")) __declspec(novtable) ICalendarIdentifiersStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChineseLunar(hstring * value) = 0;
    virtual HRESULT __stdcall get_JapaneseLunar(hstring * value) = 0;
    virtual HRESULT __stdcall get_KoreanLunar(hstring * value) = 0;
    virtual HRESULT __stdcall get_TaiwanLunar(hstring * value) = 0;
    virtual HRESULT __stdcall get_VietnameseLunar(hstring * value) = 0;
};

struct __declspec(uuid("523805bb-12ec-4f83-bc31-b1b4376b0808")) __declspec(novtable) IClockIdentifiersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TwelveHour(hstring * value) = 0;
    virtual HRESULT __stdcall get_TwentyFourHour(hstring * value) = 0;
};

struct __declspec(uuid("9f1d091b-d586-4913-9b6a-a9bd2dc12874")) __declspec(novtable) ICurrencyIdentifiersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AED(hstring * value) = 0;
    virtual HRESULT __stdcall get_AFN(hstring * value) = 0;
    virtual HRESULT __stdcall get_ALL(hstring * value) = 0;
    virtual HRESULT __stdcall get_AMD(hstring * value) = 0;
    virtual HRESULT __stdcall get_ANG(hstring * value) = 0;
    virtual HRESULT __stdcall get_AOA(hstring * value) = 0;
    virtual HRESULT __stdcall get_ARS(hstring * value) = 0;
    virtual HRESULT __stdcall get_AUD(hstring * value) = 0;
    virtual HRESULT __stdcall get_AWG(hstring * value) = 0;
    virtual HRESULT __stdcall get_AZN(hstring * value) = 0;
    virtual HRESULT __stdcall get_BAM(hstring * value) = 0;
    virtual HRESULT __stdcall get_BBD(hstring * value) = 0;
    virtual HRESULT __stdcall get_BDT(hstring * value) = 0;
    virtual HRESULT __stdcall get_BGN(hstring * value) = 0;
    virtual HRESULT __stdcall get_BHD(hstring * value) = 0;
    virtual HRESULT __stdcall get_BIF(hstring * value) = 0;
    virtual HRESULT __stdcall get_BMD(hstring * value) = 0;
    virtual HRESULT __stdcall get_BND(hstring * value) = 0;
    virtual HRESULT __stdcall get_BOB(hstring * value) = 0;
    virtual HRESULT __stdcall get_BRL(hstring * value) = 0;
    virtual HRESULT __stdcall get_BSD(hstring * value) = 0;
    virtual HRESULT __stdcall get_BTN(hstring * value) = 0;
    virtual HRESULT __stdcall get_BWP(hstring * value) = 0;
    virtual HRESULT __stdcall get_BYR(hstring * value) = 0;
    virtual HRESULT __stdcall get_BZD(hstring * value) = 0;
    virtual HRESULT __stdcall get_CAD(hstring * value) = 0;
    virtual HRESULT __stdcall get_CDF(hstring * value) = 0;
    virtual HRESULT __stdcall get_CHF(hstring * value) = 0;
    virtual HRESULT __stdcall get_CLP(hstring * value) = 0;
    virtual HRESULT __stdcall get_CNY(hstring * value) = 0;
    virtual HRESULT __stdcall get_COP(hstring * value) = 0;
    virtual HRESULT __stdcall get_CRC(hstring * value) = 0;
    virtual HRESULT __stdcall get_CUP(hstring * value) = 0;
    virtual HRESULT __stdcall get_CVE(hstring * value) = 0;
    virtual HRESULT __stdcall get_CZK(hstring * value) = 0;
    virtual HRESULT __stdcall get_DJF(hstring * value) = 0;
    virtual HRESULT __stdcall get_DKK(hstring * value) = 0;
    virtual HRESULT __stdcall get_DOP(hstring * value) = 0;
    virtual HRESULT __stdcall get_DZD(hstring * value) = 0;
    virtual HRESULT __stdcall get_EGP(hstring * value) = 0;
    virtual HRESULT __stdcall get_ERN(hstring * value) = 0;
    virtual HRESULT __stdcall get_ETB(hstring * value) = 0;
    virtual HRESULT __stdcall get_EUR(hstring * value) = 0;
    virtual HRESULT __stdcall get_FJD(hstring * value) = 0;
    virtual HRESULT __stdcall get_FKP(hstring * value) = 0;
    virtual HRESULT __stdcall get_GBP(hstring * value) = 0;
    virtual HRESULT __stdcall get_GEL(hstring * value) = 0;
    virtual HRESULT __stdcall get_GHS(hstring * value) = 0;
    virtual HRESULT __stdcall get_GIP(hstring * value) = 0;
    virtual HRESULT __stdcall get_GMD(hstring * value) = 0;
    virtual HRESULT __stdcall get_GNF(hstring * value) = 0;
    virtual HRESULT __stdcall get_GTQ(hstring * value) = 0;
    virtual HRESULT __stdcall get_GYD(hstring * value) = 0;
    virtual HRESULT __stdcall get_HKD(hstring * value) = 0;
    virtual HRESULT __stdcall get_HNL(hstring * value) = 0;
    virtual HRESULT __stdcall get_HRK(hstring * value) = 0;
    virtual HRESULT __stdcall get_HTG(hstring * value) = 0;
    virtual HRESULT __stdcall get_HUF(hstring * value) = 0;
    virtual HRESULT __stdcall get_IDR(hstring * value) = 0;
    virtual HRESULT __stdcall get_ILS(hstring * value) = 0;
    virtual HRESULT __stdcall get_INR(hstring * value) = 0;
    virtual HRESULT __stdcall get_IQD(hstring * value) = 0;
    virtual HRESULT __stdcall get_IRR(hstring * value) = 0;
    virtual HRESULT __stdcall get_ISK(hstring * value) = 0;
    virtual HRESULT __stdcall get_JMD(hstring * value) = 0;
    virtual HRESULT __stdcall get_JOD(hstring * value) = 0;
    virtual HRESULT __stdcall get_JPY(hstring * value) = 0;
    virtual HRESULT __stdcall get_KES(hstring * value) = 0;
    virtual HRESULT __stdcall get_KGS(hstring * value) = 0;
    virtual HRESULT __stdcall get_KHR(hstring * value) = 0;
    virtual HRESULT __stdcall get_KMF(hstring * value) = 0;
    virtual HRESULT __stdcall get_KPW(hstring * value) = 0;
    virtual HRESULT __stdcall get_KRW(hstring * value) = 0;
    virtual HRESULT __stdcall get_KWD(hstring * value) = 0;
    virtual HRESULT __stdcall get_KYD(hstring * value) = 0;
    virtual HRESULT __stdcall get_KZT(hstring * value) = 0;
    virtual HRESULT __stdcall get_LAK(hstring * value) = 0;
    virtual HRESULT __stdcall get_LBP(hstring * value) = 0;
    virtual HRESULT __stdcall get_LKR(hstring * value) = 0;
    virtual HRESULT __stdcall get_LRD(hstring * value) = 0;
    virtual HRESULT __stdcall get_LSL(hstring * value) = 0;
    virtual HRESULT __stdcall get_LTL(hstring * value) = 0;
    virtual HRESULT __stdcall get_LVL(hstring * value) = 0;
    virtual HRESULT __stdcall get_LYD(hstring * value) = 0;
    virtual HRESULT __stdcall get_MAD(hstring * value) = 0;
    virtual HRESULT __stdcall get_MDL(hstring * value) = 0;
    virtual HRESULT __stdcall get_MGA(hstring * value) = 0;
    virtual HRESULT __stdcall get_MKD(hstring * value) = 0;
    virtual HRESULT __stdcall get_MMK(hstring * value) = 0;
    virtual HRESULT __stdcall get_MNT(hstring * value) = 0;
    virtual HRESULT __stdcall get_MOP(hstring * value) = 0;
    virtual HRESULT __stdcall get_MRO(hstring * value) = 0;
    virtual HRESULT __stdcall get_MUR(hstring * value) = 0;
    virtual HRESULT __stdcall get_MVR(hstring * value) = 0;
    virtual HRESULT __stdcall get_MWK(hstring * value) = 0;
    virtual HRESULT __stdcall get_MXN(hstring * value) = 0;
    virtual HRESULT __stdcall get_MYR(hstring * value) = 0;
    virtual HRESULT __stdcall get_MZN(hstring * value) = 0;
    virtual HRESULT __stdcall get_NAD(hstring * value) = 0;
    virtual HRESULT __stdcall get_NGN(hstring * value) = 0;
    virtual HRESULT __stdcall get_NIO(hstring * value) = 0;
    virtual HRESULT __stdcall get_NOK(hstring * value) = 0;
    virtual HRESULT __stdcall get_NPR(hstring * value) = 0;
    virtual HRESULT __stdcall get_NZD(hstring * value) = 0;
    virtual HRESULT __stdcall get_OMR(hstring * value) = 0;
    virtual HRESULT __stdcall get_PAB(hstring * value) = 0;
    virtual HRESULT __stdcall get_PEN(hstring * value) = 0;
    virtual HRESULT __stdcall get_PGK(hstring * value) = 0;
    virtual HRESULT __stdcall get_PHP(hstring * value) = 0;
    virtual HRESULT __stdcall get_PKR(hstring * value) = 0;
    virtual HRESULT __stdcall get_PLN(hstring * value) = 0;
    virtual HRESULT __stdcall get_PYG(hstring * value) = 0;
    virtual HRESULT __stdcall get_QAR(hstring * value) = 0;
    virtual HRESULT __stdcall get_RON(hstring * value) = 0;
    virtual HRESULT __stdcall get_RSD(hstring * value) = 0;
    virtual HRESULT __stdcall get_RUB(hstring * value) = 0;
    virtual HRESULT __stdcall get_RWF(hstring * value) = 0;
    virtual HRESULT __stdcall get_SAR(hstring * value) = 0;
    virtual HRESULT __stdcall get_SBD(hstring * value) = 0;
    virtual HRESULT __stdcall get_SCR(hstring * value) = 0;
    virtual HRESULT __stdcall get_SDG(hstring * value) = 0;
    virtual HRESULT __stdcall get_SEK(hstring * value) = 0;
    virtual HRESULT __stdcall get_SGD(hstring * value) = 0;
    virtual HRESULT __stdcall get_SHP(hstring * value) = 0;
    virtual HRESULT __stdcall get_SLL(hstring * value) = 0;
    virtual HRESULT __stdcall get_SOS(hstring * value) = 0;
    virtual HRESULT __stdcall get_SRD(hstring * value) = 0;
    virtual HRESULT __stdcall get_STD(hstring * value) = 0;
    virtual HRESULT __stdcall get_SYP(hstring * value) = 0;
    virtual HRESULT __stdcall get_SZL(hstring * value) = 0;
    virtual HRESULT __stdcall get_THB(hstring * value) = 0;
    virtual HRESULT __stdcall get_TJS(hstring * value) = 0;
    virtual HRESULT __stdcall get_TMT(hstring * value) = 0;
    virtual HRESULT __stdcall get_TND(hstring * value) = 0;
    virtual HRESULT __stdcall get_TOP(hstring * value) = 0;
    virtual HRESULT __stdcall get_TRY(hstring * value) = 0;
    virtual HRESULT __stdcall get_TTD(hstring * value) = 0;
    virtual HRESULT __stdcall get_TWD(hstring * value) = 0;
    virtual HRESULT __stdcall get_TZS(hstring * value) = 0;
    virtual HRESULT __stdcall get_UAH(hstring * value) = 0;
    virtual HRESULT __stdcall get_UGX(hstring * value) = 0;
    virtual HRESULT __stdcall get_USD(hstring * value) = 0;
    virtual HRESULT __stdcall get_UYU(hstring * value) = 0;
    virtual HRESULT __stdcall get_UZS(hstring * value) = 0;
    virtual HRESULT __stdcall get_VEF(hstring * value) = 0;
    virtual HRESULT __stdcall get_VND(hstring * value) = 0;
    virtual HRESULT __stdcall get_VUV(hstring * value) = 0;
    virtual HRESULT __stdcall get_WST(hstring * value) = 0;
    virtual HRESULT __stdcall get_XAF(hstring * value) = 0;
    virtual HRESULT __stdcall get_XCD(hstring * value) = 0;
    virtual HRESULT __stdcall get_XOF(hstring * value) = 0;
    virtual HRESULT __stdcall get_XPF(hstring * value) = 0;
    virtual HRESULT __stdcall get_XXX(hstring * value) = 0;
    virtual HRESULT __stdcall get_YER(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZAR(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZMW(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZWL(hstring * value) = 0;
};

struct __declspec(uuid("01e9a621-4a64-4ed9-954f-9edeb07bd903")) __declspec(novtable) IGeographicRegion : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Code(hstring * value) = 0;
    virtual HRESULT __stdcall get_CodeTwoLetter(hstring * value) = 0;
    virtual HRESULT __stdcall get_CodeThreeLetter(hstring * value) = 0;
    virtual HRESULT __stdcall get_CodeThreeDigit(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_NativeName(hstring * value) = 0;
    virtual HRESULT __stdcall get_CurrenciesInUse(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("53425270-77b4-426b-859f-81e19d512546")) __declspec(novtable) IGeographicRegionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateGeographicRegion(hstring geographicRegionCode, Windows::Globalization::IGeographicRegion ** result) = 0;
};

struct __declspec(uuid("29e28974-7ad9-4ef4-8799-b3b44fadec08")) __declspec(novtable) IGeographicRegionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupported(hstring geographicRegionCode, bool * result) = 0;
};

struct __declspec(uuid("2f6a9300-e85b-43e6-897d-5d82f862df21")) __declspec(novtable) IJapanesePhoneme : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(hstring * value) = 0;
    virtual HRESULT __stdcall get_YomiText(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsPhraseStart(bool * value) = 0;
};

struct __declspec(uuid("88ab9e90-93de-41b2-b4d5-8edb227fd1c2")) __declspec(novtable) IJapanesePhoneticAnalyzerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetWords(hstring input, Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> ** result) = 0;
    virtual HRESULT __stdcall abi_GetWordsWithMonoRubyOption(hstring input, bool monoRuby, Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> ** result) = 0;
};

struct __declspec(uuid("ea79a752-f7c2-4265-b1bd-c4dec4e4f080")) __declspec(novtable) ILanguage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LanguageTag(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_NativeName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Script(hstring * value) = 0;
};

struct __declspec(uuid("7d7daf45-368d-4364-852b-dec927037b85")) __declspec(novtable) ILanguageExtensionSubtags : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetExtensionSubtags(hstring singleton, Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("9b0252ac-0c27-44f8-b792-9793fb66c63e")) __declspec(novtable) ILanguageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateLanguage(hstring languageTag, Windows::Globalization::ILanguage ** result) = 0;
};

struct __declspec(uuid("b23cd557-0865-46d4-89b8-d59be8990f0d")) __declspec(novtable) ILanguageStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsWellFormed(hstring languageTag, bool * result) = 0;
    virtual HRESULT __stdcall get_CurrentInputMethodLanguageTag(hstring * value) = 0;
};

struct __declspec(uuid("30199f6e-914b-4b2a-9d6e-e3b0e27dbe4f")) __declspec(novtable) ILanguageStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TrySetInputMethodLanguageTag(hstring languageTag, bool * result) = 0;
};

struct __declspec(uuid("a5c662c3-68c9-4d3d-b765-972029e21dec")) __declspec(novtable) INumeralSystemIdentifiersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Arab(hstring * value) = 0;
    virtual HRESULT __stdcall get_ArabExt(hstring * value) = 0;
    virtual HRESULT __stdcall get_Bali(hstring * value) = 0;
    virtual HRESULT __stdcall get_Beng(hstring * value) = 0;
    virtual HRESULT __stdcall get_Cham(hstring * value) = 0;
    virtual HRESULT __stdcall get_Deva(hstring * value) = 0;
    virtual HRESULT __stdcall get_FullWide(hstring * value) = 0;
    virtual HRESULT __stdcall get_Gujr(hstring * value) = 0;
    virtual HRESULT __stdcall get_Guru(hstring * value) = 0;
    virtual HRESULT __stdcall get_HaniDec(hstring * value) = 0;
    virtual HRESULT __stdcall get_Java(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kali(hstring * value) = 0;
    virtual HRESULT __stdcall get_Khmr(hstring * value) = 0;
    virtual HRESULT __stdcall get_Knda(hstring * value) = 0;
    virtual HRESULT __stdcall get_Lana(hstring * value) = 0;
    virtual HRESULT __stdcall get_LanaTham(hstring * value) = 0;
    virtual HRESULT __stdcall get_Laoo(hstring * value) = 0;
    virtual HRESULT __stdcall get_Latn(hstring * value) = 0;
    virtual HRESULT __stdcall get_Lepc(hstring * value) = 0;
    virtual HRESULT __stdcall get_Limb(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mlym(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mong(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mtei(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mymr(hstring * value) = 0;
    virtual HRESULT __stdcall get_MymrShan(hstring * value) = 0;
    virtual HRESULT __stdcall get_Nkoo(hstring * value) = 0;
    virtual HRESULT __stdcall get_Olck(hstring * value) = 0;
    virtual HRESULT __stdcall get_Orya(hstring * value) = 0;
    virtual HRESULT __stdcall get_Saur(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sund(hstring * value) = 0;
    virtual HRESULT __stdcall get_Talu(hstring * value) = 0;
    virtual HRESULT __stdcall get_TamlDec(hstring * value) = 0;
    virtual HRESULT __stdcall get_Telu(hstring * value) = 0;
    virtual HRESULT __stdcall get_Thai(hstring * value) = 0;
    virtual HRESULT __stdcall get_Tibt(hstring * value) = 0;
    virtual HRESULT __stdcall get_Vaii(hstring * value) = 0;
};

struct __declspec(uuid("7f003228-9ddb-4a34-9104-0260c091a7c7")) __declspec(novtable) INumeralSystemIdentifiersStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Brah(hstring * value) = 0;
    virtual HRESULT __stdcall get_Osma(hstring * value) = 0;
    virtual HRESULT __stdcall get_MathBold(hstring * value) = 0;
    virtual HRESULT __stdcall get_MathDbl(hstring * value) = 0;
    virtual HRESULT __stdcall get_MathSans(hstring * value) = 0;
    virtual HRESULT __stdcall get_MathSanb(hstring * value) = 0;
    virtual HRESULT __stdcall get_MathMono(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZmthBold(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZmthDbl(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZmthSans(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZmthSanb(hstring * value) = 0;
    virtual HRESULT __stdcall get_ZmthMono(hstring * value) = 0;
};

struct __declspec(uuid("bb3c25e5-46cf-4317-a3f5-02621ad54478")) __declspec(novtable) ITimeZoneOnCalendar : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetTimeZone(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ChangeTimeZone(hstring timeZoneId) = 0;
    virtual HRESULT __stdcall abi_TimeZoneAsFullString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_TimeZoneAsString(int32_t idealLength, hstring * result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Globalization::Calendar> { using default_interface = Windows::Globalization::ICalendar; };
template <> struct traits<Windows::Globalization::GeographicRegion> { using default_interface = Windows::Globalization::IGeographicRegion; };
template <> struct traits<Windows::Globalization::JapanesePhoneme> { using default_interface = Windows::Globalization::IJapanesePhoneme; };
template <> struct traits<Windows::Globalization::Language> { using default_interface = Windows::Globalization::ILanguage; };

}

namespace Windows::Globalization {

template <typename T> struct impl_IApplicationLanguagesStatics;
template <typename T> struct impl_ICalendar;
template <typename T> struct impl_ICalendarFactory;
template <typename T> struct impl_ICalendarFactory2;
template <typename T> struct impl_ICalendarIdentifiersStatics;
template <typename T> struct impl_ICalendarIdentifiersStatics2;
template <typename T> struct impl_ICalendarIdentifiersStatics3;
template <typename T> struct impl_IClockIdentifiersStatics;
template <typename T> struct impl_ICurrencyIdentifiersStatics;
template <typename T> struct impl_IGeographicRegion;
template <typename T> struct impl_IGeographicRegionFactory;
template <typename T> struct impl_IGeographicRegionStatics;
template <typename T> struct impl_IJapanesePhoneme;
template <typename T> struct impl_IJapanesePhoneticAnalyzerStatics;
template <typename T> struct impl_ILanguage;
template <typename T> struct impl_ILanguageExtensionSubtags;
template <typename T> struct impl_ILanguageFactory;
template <typename T> struct impl_ILanguageStatics;
template <typename T> struct impl_ILanguageStatics2;
template <typename T> struct impl_INumeralSystemIdentifiersStatics;
template <typename T> struct impl_INumeralSystemIdentifiersStatics2;
template <typename T> struct impl_ITimeZoneOnCalendar;

}

namespace impl {

template <> struct traits<Windows::Globalization::IApplicationLanguagesStatics>
{
    using abi = ABI::Windows::Globalization::IApplicationLanguagesStatics;
    template <typename D> using consume = Windows::Globalization::impl_IApplicationLanguagesStatics<D>;
};

template <> struct traits<Windows::Globalization::ICalendar>
{
    using abi = ABI::Windows::Globalization::ICalendar;
    template <typename D> using consume = Windows::Globalization::impl_ICalendar<D>;
};

template <> struct traits<Windows::Globalization::ICalendarFactory>
{
    using abi = ABI::Windows::Globalization::ICalendarFactory;
    template <typename D> using consume = Windows::Globalization::impl_ICalendarFactory<D>;
};

template <> struct traits<Windows::Globalization::ICalendarFactory2>
{
    using abi = ABI::Windows::Globalization::ICalendarFactory2;
    template <typename D> using consume = Windows::Globalization::impl_ICalendarFactory2<D>;
};

template <> struct traits<Windows::Globalization::ICalendarIdentifiersStatics>
{
    using abi = ABI::Windows::Globalization::ICalendarIdentifiersStatics;
    template <typename D> using consume = Windows::Globalization::impl_ICalendarIdentifiersStatics<D>;
};

template <> struct traits<Windows::Globalization::ICalendarIdentifiersStatics2>
{
    using abi = ABI::Windows::Globalization::ICalendarIdentifiersStatics2;
    template <typename D> using consume = Windows::Globalization::impl_ICalendarIdentifiersStatics2<D>;
};

template <> struct traits<Windows::Globalization::ICalendarIdentifiersStatics3>
{
    using abi = ABI::Windows::Globalization::ICalendarIdentifiersStatics3;
    template <typename D> using consume = Windows::Globalization::impl_ICalendarIdentifiersStatics3<D>;
};

template <> struct traits<Windows::Globalization::IClockIdentifiersStatics>
{
    using abi = ABI::Windows::Globalization::IClockIdentifiersStatics;
    template <typename D> using consume = Windows::Globalization::impl_IClockIdentifiersStatics<D>;
};

template <> struct traits<Windows::Globalization::ICurrencyIdentifiersStatics>
{
    using abi = ABI::Windows::Globalization::ICurrencyIdentifiersStatics;
    template <typename D> using consume = Windows::Globalization::impl_ICurrencyIdentifiersStatics<D>;
};

template <> struct traits<Windows::Globalization::IGeographicRegion>
{
    using abi = ABI::Windows::Globalization::IGeographicRegion;
    template <typename D> using consume = Windows::Globalization::impl_IGeographicRegion<D>;
};

template <> struct traits<Windows::Globalization::IGeographicRegionFactory>
{
    using abi = ABI::Windows::Globalization::IGeographicRegionFactory;
    template <typename D> using consume = Windows::Globalization::impl_IGeographicRegionFactory<D>;
};

template <> struct traits<Windows::Globalization::IGeographicRegionStatics>
{
    using abi = ABI::Windows::Globalization::IGeographicRegionStatics;
    template <typename D> using consume = Windows::Globalization::impl_IGeographicRegionStatics<D>;
};

template <> struct traits<Windows::Globalization::IJapanesePhoneme>
{
    using abi = ABI::Windows::Globalization::IJapanesePhoneme;
    template <typename D> using consume = Windows::Globalization::impl_IJapanesePhoneme<D>;
};

template <> struct traits<Windows::Globalization::IJapanesePhoneticAnalyzerStatics>
{
    using abi = ABI::Windows::Globalization::IJapanesePhoneticAnalyzerStatics;
    template <typename D> using consume = Windows::Globalization::impl_IJapanesePhoneticAnalyzerStatics<D>;
};

template <> struct traits<Windows::Globalization::ILanguage>
{
    using abi = ABI::Windows::Globalization::ILanguage;
    template <typename D> using consume = Windows::Globalization::impl_ILanguage<D>;
};

template <> struct traits<Windows::Globalization::ILanguageExtensionSubtags>
{
    using abi = ABI::Windows::Globalization::ILanguageExtensionSubtags;
    template <typename D> using consume = Windows::Globalization::impl_ILanguageExtensionSubtags<D>;
};

template <> struct traits<Windows::Globalization::ILanguageFactory>
{
    using abi = ABI::Windows::Globalization::ILanguageFactory;
    template <typename D> using consume = Windows::Globalization::impl_ILanguageFactory<D>;
};

template <> struct traits<Windows::Globalization::ILanguageStatics>
{
    using abi = ABI::Windows::Globalization::ILanguageStatics;
    template <typename D> using consume = Windows::Globalization::impl_ILanguageStatics<D>;
};

template <> struct traits<Windows::Globalization::ILanguageStatics2>
{
    using abi = ABI::Windows::Globalization::ILanguageStatics2;
    template <typename D> using consume = Windows::Globalization::impl_ILanguageStatics2<D>;
};

template <> struct traits<Windows::Globalization::INumeralSystemIdentifiersStatics>
{
    using abi = ABI::Windows::Globalization::INumeralSystemIdentifiersStatics;
    template <typename D> using consume = Windows::Globalization::impl_INumeralSystemIdentifiersStatics<D>;
};

template <> struct traits<Windows::Globalization::INumeralSystemIdentifiersStatics2>
{
    using abi = ABI::Windows::Globalization::INumeralSystemIdentifiersStatics2;
    template <typename D> using consume = Windows::Globalization::impl_INumeralSystemIdentifiersStatics2<D>;
};

template <> struct traits<Windows::Globalization::ITimeZoneOnCalendar>
{
    using abi = ABI::Windows::Globalization::ITimeZoneOnCalendar;
    template <typename D> using consume = Windows::Globalization::impl_ITimeZoneOnCalendar<D>;
};

template <> struct traits<Windows::Globalization::ApplicationLanguages>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.ApplicationLanguages"; }
};

template <> struct traits<Windows::Globalization::Calendar>
{
    using abi = ABI::Windows::Globalization::Calendar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.Calendar"; }
};

template <> struct traits<Windows::Globalization::CalendarIdentifiers>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.CalendarIdentifiers"; }
};

template <> struct traits<Windows::Globalization::ClockIdentifiers>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.ClockIdentifiers"; }
};

template <> struct traits<Windows::Globalization::CurrencyIdentifiers>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.CurrencyIdentifiers"; }
};

template <> struct traits<Windows::Globalization::GeographicRegion>
{
    using abi = ABI::Windows::Globalization::GeographicRegion;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.GeographicRegion"; }
};

template <> struct traits<Windows::Globalization::JapanesePhoneme>
{
    using abi = ABI::Windows::Globalization::JapanesePhoneme;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.JapanesePhoneme"; }
};

template <> struct traits<Windows::Globalization::JapanesePhoneticAnalyzer>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.JapanesePhoneticAnalyzer"; }
};

template <> struct traits<Windows::Globalization::Language>
{
    using abi = ABI::Windows::Globalization::Language;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.Language"; }
};

template <> struct traits<Windows::Globalization::NumeralSystemIdentifiers>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.NumeralSystemIdentifiers"; }
};

}

}
