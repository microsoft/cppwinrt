// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.1.h"

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

#ifndef WINRT_GENERIC_4cdc5bd0_d4aa_5b60_bf25_7144905050f9
#define WINRT_GENERIC_4cdc5bd0_d4aa_5b60_bf25_7144905050f9
template <> struct __declspec(uuid("4cdc5bd0-d4aa-5b60-bf25-7144905050f9")) __declspec(novtable) IVectorView<Windows::Globalization::JapanesePhoneme> : impl_IVectorView<Windows::Globalization::JapanesePhoneme> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_f15ca7e7_69a8_564d_9c20_4da75a773432
#define WINRT_GENERIC_f15ca7e7_69a8_564d_9c20_4da75a773432
template <> struct __declspec(uuid("f15ca7e7-69a8-564d-9c20-4da75a773432")) __declspec(novtable) IIterator<Windows::Globalization::JapanesePhoneme> : impl_IIterator<Windows::Globalization::JapanesePhoneme> {};
#endif

#ifndef WINRT_GENERIC_1aad17cb_1829_5236_8aef_0b75f8dfd7a6
#define WINRT_GENERIC_1aad17cb_1829_5236_8aef_0b75f8dfd7a6
template <> struct __declspec(uuid("1aad17cb-1829-5236-8aef-0b75f8dfd7a6")) __declspec(novtable) IIterable<Windows::Globalization::JapanesePhoneme> : impl_IIterable<Windows::Globalization::JapanesePhoneme> {};
#endif


}

namespace Windows::Globalization {

template <typename D>
struct WINRT_EBO impl_IApplicationLanguagesStatics
{
    hstring PrimaryLanguageOverride() const;
    void PrimaryLanguageOverride(hstring_ref value) const;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    Windows::Foundation::Collections::IVectorView<hstring> ManifestLanguages() const;
};

template <typename D>
struct WINRT_EBO impl_ICalendar
{
    Windows::Globalization::Calendar Clone() const;
    void SetToMin() const;
    void SetToMax() const;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring NumeralSystem() const;
    void NumeralSystem(hstring_ref value) const;
    hstring GetCalendarSystem() const;
    void ChangeCalendarSystem(hstring_ref value) const;
    hstring GetClock() const;
    void ChangeClock(hstring_ref value) const;
    Windows::Foundation::DateTime GetDateTime() const;
    void SetDateTime(const Windows::Foundation::DateTime & value) const;
    void SetToNow() const;
    int32_t FirstEra() const;
    int32_t LastEra() const;
    int32_t NumberOfEras() const;
    int32_t Era() const;
    void Era(int32_t value) const;
    void AddEras(int32_t eras) const;
    hstring EraAsString() const;
    hstring EraAsString(int32_t idealLength) const;
    int32_t FirstYearInThisEra() const;
    int32_t LastYearInThisEra() const;
    int32_t NumberOfYearsInThisEra() const;
    int32_t Year() const;
    void Year(int32_t value) const;
    void AddYears(int32_t years) const;
    hstring YearAsString() const;
    hstring YearAsTruncatedString(int32_t remainingDigits) const;
    hstring YearAsPaddedString(int32_t minDigits) const;
    int32_t FirstMonthInThisYear() const;
    int32_t LastMonthInThisYear() const;
    int32_t NumberOfMonthsInThisYear() const;
    int32_t Month() const;
    void Month(int32_t value) const;
    void AddMonths(int32_t months) const;
    hstring MonthAsString() const;
    hstring MonthAsString(int32_t idealLength) const;
    hstring MonthAsSoloString() const;
    hstring MonthAsSoloString(int32_t idealLength) const;
    hstring MonthAsNumericString() const;
    hstring MonthAsPaddedNumericString(int32_t minDigits) const;
    void AddWeeks(int32_t weeks) const;
    int32_t FirstDayInThisMonth() const;
    int32_t LastDayInThisMonth() const;
    int32_t NumberOfDaysInThisMonth() const;
    int32_t Day() const;
    void Day(int32_t value) const;
    void AddDays(int32_t days) const;
    hstring DayAsString() const;
    hstring DayAsPaddedString(int32_t minDigits) const;
    Windows::Globalization::DayOfWeek DayOfWeek() const;
    hstring DayOfWeekAsString() const;
    hstring DayOfWeekAsString(int32_t idealLength) const;
    hstring DayOfWeekAsSoloString() const;
    hstring DayOfWeekAsSoloString(int32_t idealLength) const;
    int32_t FirstPeriodInThisDay() const;
    int32_t LastPeriodInThisDay() const;
    int32_t NumberOfPeriodsInThisDay() const;
    int32_t Period() const;
    void Period(int32_t value) const;
    void AddPeriods(int32_t periods) const;
    hstring PeriodAsString() const;
    hstring PeriodAsString(int32_t idealLength) const;
    int32_t FirstHourInThisPeriod() const;
    int32_t LastHourInThisPeriod() const;
    int32_t NumberOfHoursInThisPeriod() const;
    int32_t Hour() const;
    void Hour(int32_t value) const;
    void AddHours(int32_t hours) const;
    hstring HourAsString() const;
    hstring HourAsPaddedString(int32_t minDigits) const;
    int32_t Minute() const;
    void Minute(int32_t value) const;
    void AddMinutes(int32_t minutes) const;
    hstring MinuteAsString() const;
    hstring MinuteAsPaddedString(int32_t minDigits) const;
    int32_t Second() const;
    void Second(int32_t value) const;
    void AddSeconds(int32_t seconds) const;
    hstring SecondAsString() const;
    hstring SecondAsPaddedString(int32_t minDigits) const;
    int32_t Nanosecond() const;
    void Nanosecond(int32_t value) const;
    void AddNanoseconds(int32_t nanoseconds) const;
    hstring NanosecondAsString() const;
    hstring NanosecondAsPaddedString(int32_t minDigits) const;
    int32_t Compare(const Windows::Globalization::Calendar & other) const;
    int32_t CompareDateTime(const Windows::Foundation::DateTime & other) const;
    void CopyTo(const Windows::Globalization::Calendar & other) const;
    int32_t FirstMinuteInThisHour() const;
    int32_t LastMinuteInThisHour() const;
    int32_t NumberOfMinutesInThisHour() const;
    int32_t FirstSecondInThisMinute() const;
    int32_t LastSecondInThisMinute() const;
    int32_t NumberOfSecondsInThisMinute() const;
    hstring ResolvedLanguage() const;
    bool IsDaylightSavingTime() const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarFactory
{
    Windows::Globalization::Calendar CreateCalendarDefaultCalendarAndClock(const Windows::Foundation::Collections::IIterable<hstring> & languages) const;
    Windows::Globalization::Calendar CreateCalendar(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock) const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarFactory2
{
    Windows::Globalization::Calendar CreateCalendarWithTimeZone(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref calendar, hstring_ref clock, hstring_ref timeZoneId) const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarIdentifiersStatics
{
    hstring Gregorian() const;
    hstring Hebrew() const;
    hstring Hijri() const;
    hstring Japanese() const;
    hstring Julian() const;
    hstring Korean() const;
    hstring Taiwan() const;
    hstring Thai() const;
    hstring UmAlQura() const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarIdentifiersStatics2
{
    hstring Persian() const;
};

template <typename D>
struct WINRT_EBO impl_ICalendarIdentifiersStatics3
{
    hstring ChineseLunar() const;
    hstring JapaneseLunar() const;
    hstring KoreanLunar() const;
    hstring TaiwanLunar() const;
    hstring VietnameseLunar() const;
};

template <typename D>
struct WINRT_EBO impl_IClockIdentifiersStatics
{
    hstring TwelveHour() const;
    hstring TwentyFourHour() const;
};

template <typename D>
struct WINRT_EBO impl_ICurrencyIdentifiersStatics
{
    hstring AED() const;
    hstring AFN() const;
    hstring ALL() const;
    hstring AMD() const;
    hstring ANG() const;
    hstring AOA() const;
    hstring ARS() const;
    hstring AUD() const;
    hstring AWG() const;
    hstring AZN() const;
    hstring BAM() const;
    hstring BBD() const;
    hstring BDT() const;
    hstring BGN() const;
    hstring BHD() const;
    hstring BIF() const;
    hstring BMD() const;
    hstring BND() const;
    hstring BOB() const;
    hstring BRL() const;
    hstring BSD() const;
    hstring BTN() const;
    hstring BWP() const;
    hstring BYR() const;
    hstring BZD() const;
    hstring CAD() const;
    hstring CDF() const;
    hstring CHF() const;
    hstring CLP() const;
    hstring CNY() const;
    hstring COP() const;
    hstring CRC() const;
    hstring CUP() const;
    hstring CVE() const;
    hstring CZK() const;
    hstring DJF() const;
    hstring DKK() const;
    hstring DOP() const;
    hstring DZD() const;
    hstring EGP() const;
    hstring ERN() const;
    hstring ETB() const;
    hstring EUR() const;
    hstring FJD() const;
    hstring FKP() const;
    hstring GBP() const;
    hstring GEL() const;
    hstring GHS() const;
    hstring GIP() const;
    hstring GMD() const;
    hstring GNF() const;
    hstring GTQ() const;
    hstring GYD() const;
    hstring HKD() const;
    hstring HNL() const;
    hstring HRK() const;
    hstring HTG() const;
    hstring HUF() const;
    hstring IDR() const;
    hstring ILS() const;
    hstring INR() const;
    hstring IQD() const;
    hstring IRR() const;
    hstring ISK() const;
    hstring JMD() const;
    hstring JOD() const;
    hstring JPY() const;
    hstring KES() const;
    hstring KGS() const;
    hstring KHR() const;
    hstring KMF() const;
    hstring KPW() const;
    hstring KRW() const;
    hstring KWD() const;
    hstring KYD() const;
    hstring KZT() const;
    hstring LAK() const;
    hstring LBP() const;
    hstring LKR() const;
    hstring LRD() const;
    hstring LSL() const;
    hstring LTL() const;
    hstring LVL() const;
    hstring LYD() const;
    hstring MAD() const;
    hstring MDL() const;
    hstring MGA() const;
    hstring MKD() const;
    hstring MMK() const;
    hstring MNT() const;
    hstring MOP() const;
    hstring MRO() const;
    hstring MUR() const;
    hstring MVR() const;
    hstring MWK() const;
    hstring MXN() const;
    hstring MYR() const;
    hstring MZN() const;
    hstring NAD() const;
    hstring NGN() const;
    hstring NIO() const;
    hstring NOK() const;
    hstring NPR() const;
    hstring NZD() const;
    hstring OMR() const;
    hstring PAB() const;
    hstring PEN() const;
    hstring PGK() const;
    hstring PHP() const;
    hstring PKR() const;
    hstring PLN() const;
    hstring PYG() const;
    hstring QAR() const;
    hstring RON() const;
    hstring RSD() const;
    hstring RUB() const;
    hstring RWF() const;
    hstring SAR() const;
    hstring SBD() const;
    hstring SCR() const;
    hstring SDG() const;
    hstring SEK() const;
    hstring SGD() const;
    hstring SHP() const;
    hstring SLL() const;
    hstring SOS() const;
    hstring SRD() const;
    hstring STD() const;
    hstring SYP() const;
    hstring SZL() const;
    hstring THB() const;
    hstring TJS() const;
    hstring TMT() const;
    hstring TND() const;
    hstring TOP() const;
    hstring TRY() const;
    hstring TTD() const;
    hstring TWD() const;
    hstring TZS() const;
    hstring UAH() const;
    hstring UGX() const;
    hstring USD() const;
    hstring UYU() const;
    hstring UZS() const;
    hstring VEF() const;
    hstring VND() const;
    hstring VUV() const;
    hstring WST() const;
    hstring XAF() const;
    hstring XCD() const;
    hstring XOF() const;
    hstring XPF() const;
    hstring XXX() const;
    hstring YER() const;
    hstring ZAR() const;
    hstring ZMW() const;
    hstring ZWL() const;
};

template <typename D>
struct WINRT_EBO impl_IGeographicRegion
{
    hstring Code() const;
    hstring CodeTwoLetter() const;
    hstring CodeThreeLetter() const;
    hstring CodeThreeDigit() const;
    hstring DisplayName() const;
    hstring NativeName() const;
    Windows::Foundation::Collections::IVectorView<hstring> CurrenciesInUse() const;
};

template <typename D>
struct WINRT_EBO impl_IGeographicRegionFactory
{
    Windows::Globalization::GeographicRegion CreateGeographicRegion(hstring_ref geographicRegionCode) const;
};

template <typename D>
struct WINRT_EBO impl_IGeographicRegionStatics
{
    bool IsSupported(hstring_ref geographicRegionCode) const;
};

template <typename D>
struct WINRT_EBO impl_IJapanesePhoneme
{
    hstring DisplayText() const;
    hstring YomiText() const;
    bool IsPhraseStart() const;
};

template <typename D>
struct WINRT_EBO impl_IJapanesePhoneticAnalyzerStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> GetWords(hstring_ref input) const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> GetWords(hstring_ref input, bool monoRuby) const;
};

template <typename D>
struct WINRT_EBO impl_ILanguage
{
    hstring LanguageTag() const;
    hstring DisplayName() const;
    hstring NativeName() const;
    hstring Script() const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageExtensionSubtags
{
    Windows::Foundation::Collections::IVectorView<hstring> GetExtensionSubtags(hstring_ref singleton) const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageFactory
{
    Windows::Globalization::Language CreateLanguage(hstring_ref languageTag) const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageStatics
{
    bool IsWellFormed(hstring_ref languageTag) const;
    hstring CurrentInputMethodLanguageTag() const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageStatics2
{
    bool TrySetInputMethodLanguageTag(hstring_ref languageTag) const;
};

template <typename D>
struct WINRT_EBO impl_INumeralSystemIdentifiersStatics
{
    hstring Arab() const;
    hstring ArabExt() const;
    hstring Bali() const;
    hstring Beng() const;
    hstring Cham() const;
    hstring Deva() const;
    hstring FullWide() const;
    hstring Gujr() const;
    hstring Guru() const;
    hstring HaniDec() const;
    hstring Java() const;
    hstring Kali() const;
    hstring Khmr() const;
    hstring Knda() const;
    hstring Lana() const;
    hstring LanaTham() const;
    hstring Laoo() const;
    hstring Latn() const;
    hstring Lepc() const;
    hstring Limb() const;
    hstring Mlym() const;
    hstring Mong() const;
    hstring Mtei() const;
    hstring Mymr() const;
    hstring MymrShan() const;
    hstring Nkoo() const;
    hstring Olck() const;
    hstring Orya() const;
    hstring Saur() const;
    hstring Sund() const;
    hstring Talu() const;
    hstring TamlDec() const;
    hstring Telu() const;
    hstring Thai() const;
    hstring Tibt() const;
    hstring Vaii() const;
};

template <typename D>
struct WINRT_EBO impl_INumeralSystemIdentifiersStatics2
{
    hstring Brah() const;
    hstring Osma() const;
    hstring MathBold() const;
    hstring MathDbl() const;
    hstring MathSans() const;
    hstring MathSanb() const;
    hstring MathMono() const;
    hstring ZmthBold() const;
    hstring ZmthDbl() const;
    hstring ZmthSans() const;
    hstring ZmthSanb() const;
    hstring ZmthMono() const;
};

template <typename D>
struct WINRT_EBO impl_ITimeZoneOnCalendar
{
    hstring GetTimeZone() const;
    void ChangeTimeZone(hstring_ref timeZoneId) const;
    hstring TimeZoneAsString() const;
    hstring TimeZoneAsString(int32_t idealLength) const;
};

struct IApplicationLanguagesStatics :
    Windows::IInspectable,
    impl::consume<IApplicationLanguagesStatics>
{
    IApplicationLanguagesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationLanguagesStatics>(m_ptr); }
};

struct ICalendar :
    Windows::IInspectable,
    impl::consume<ICalendar>
{
    ICalendar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendar>(m_ptr); }
};

struct ICalendarFactory :
    Windows::IInspectable,
    impl::consume<ICalendarFactory>
{
    ICalendarFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarFactory>(m_ptr); }
};

struct ICalendarFactory2 :
    Windows::IInspectable,
    impl::consume<ICalendarFactory2>
{
    ICalendarFactory2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarFactory2>(m_ptr); }
};

struct ICalendarIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ICalendarIdentifiersStatics>
{
    ICalendarIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarIdentifiersStatics>(m_ptr); }
};

struct ICalendarIdentifiersStatics2 :
    Windows::IInspectable,
    impl::consume<ICalendarIdentifiersStatics2>
{
    ICalendarIdentifiersStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarIdentifiersStatics2>(m_ptr); }
};

struct ICalendarIdentifiersStatics3 :
    Windows::IInspectable,
    impl::consume<ICalendarIdentifiersStatics3>
{
    ICalendarIdentifiersStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICalendarIdentifiersStatics3>(m_ptr); }
};

struct IClockIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<IClockIdentifiersStatics>
{
    IClockIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IClockIdentifiersStatics>(m_ptr); }
};

struct ICurrencyIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<ICurrencyIdentifiersStatics>
{
    ICurrencyIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrencyIdentifiersStatics>(m_ptr); }
};

struct IGeographicRegion :
    Windows::IInspectable,
    impl::consume<IGeographicRegion>
{
    IGeographicRegion(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeographicRegion>(m_ptr); }
};

struct IGeographicRegionFactory :
    Windows::IInspectable,
    impl::consume<IGeographicRegionFactory>
{
    IGeographicRegionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeographicRegionFactory>(m_ptr); }
};

struct IGeographicRegionStatics :
    Windows::IInspectable,
    impl::consume<IGeographicRegionStatics>
{
    IGeographicRegionStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGeographicRegionStatics>(m_ptr); }
};

struct IJapanesePhoneme :
    Windows::IInspectable,
    impl::consume<IJapanesePhoneme>
{
    IJapanesePhoneme(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJapanesePhoneme>(m_ptr); }
};

struct IJapanesePhoneticAnalyzerStatics :
    Windows::IInspectable,
    impl::consume<IJapanesePhoneticAnalyzerStatics>
{
    IJapanesePhoneticAnalyzerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJapanesePhoneticAnalyzerStatics>(m_ptr); }
};

struct ILanguage :
    Windows::IInspectable,
    impl::consume<ILanguage>
{
    ILanguage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguage>(m_ptr); }
};

struct ILanguageExtensionSubtags :
    Windows::IInspectable,
    impl::consume<ILanguageExtensionSubtags>
{
    ILanguageExtensionSubtags(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageExtensionSubtags>(m_ptr); }
};

struct ILanguageFactory :
    Windows::IInspectable,
    impl::consume<ILanguageFactory>
{
    ILanguageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageFactory>(m_ptr); }
};

struct ILanguageStatics :
    Windows::IInspectable,
    impl::consume<ILanguageStatics>
{
    ILanguageStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageStatics>(m_ptr); }
};

struct ILanguageStatics2 :
    Windows::IInspectable,
    impl::consume<ILanguageStatics2>
{
    ILanguageStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageStatics2>(m_ptr); }
};

struct INumeralSystemIdentifiersStatics :
    Windows::IInspectable,
    impl::consume<INumeralSystemIdentifiersStatics>
{
    INumeralSystemIdentifiersStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumeralSystemIdentifiersStatics>(m_ptr); }
};

struct INumeralSystemIdentifiersStatics2 :
    Windows::IInspectable,
    impl::consume<INumeralSystemIdentifiersStatics2>
{
    INumeralSystemIdentifiersStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INumeralSystemIdentifiersStatics2>(m_ptr); }
};

struct ITimeZoneOnCalendar :
    Windows::IInspectable,
    impl::consume<ITimeZoneOnCalendar>
{
    ITimeZoneOnCalendar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimeZoneOnCalendar>(m_ptr); }
};

}

}
