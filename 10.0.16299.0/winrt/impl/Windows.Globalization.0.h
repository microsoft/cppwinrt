// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization {

enum class DayOfWeek : int32_t
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
};

struct IApplicationLanguagesStatics;
struct ICalendar;
struct ICalendarFactory;
struct ICalendarFactory2;
struct ICalendarIdentifiersStatics;
struct ICalendarIdentifiersStatics2;
struct ICalendarIdentifiersStatics3;
struct IClockIdentifiersStatics;
struct ICurrencyIdentifiersStatics;
struct ICurrencyIdentifiersStatics2;
struct IGeographicRegion;
struct IGeographicRegionFactory;
struct IGeographicRegionStatics;
struct IJapanesePhoneme;
struct IJapanesePhoneticAnalyzerStatics;
struct ILanguage;
struct ILanguageExtensionSubtags;
struct ILanguageFactory;
struct ILanguageStatics;
struct ILanguageStatics2;
struct INumeralSystemIdentifiersStatics;
struct INumeralSystemIdentifiersStatics2;
struct ITimeZoneOnCalendar;
struct ApplicationLanguages;
struct Calendar;
struct CalendarIdentifiers;
struct ClockIdentifiers;
struct CurrencyIdentifiers;
struct GeographicRegion;
struct JapanesePhoneme;
struct JapanesePhoneticAnalyzer;
struct Language;
struct NumeralSystemIdentifiers;

}

namespace winrt::impl {

template <> struct category<Windows::Globalization::IApplicationLanguagesStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendar>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendarFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendarFactory2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendarIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendarIdentifiersStatics2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICalendarIdentifiersStatics3>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IClockIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICurrencyIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ICurrencyIdentifiersStatics2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IGeographicRegion>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IGeographicRegionFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IGeographicRegionStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IJapanesePhoneme>{ using type = interface_category; };
template <> struct category<Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ILanguage>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ILanguageExtensionSubtags>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ILanguageFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ILanguageStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ILanguageStatics2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::INumeralSystemIdentifiersStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::INumeralSystemIdentifiersStatics2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ITimeZoneOnCalendar>{ using type = interface_category; };
template <> struct category<Windows::Globalization::ApplicationLanguages>{ using type = class_category; };
template <> struct category<Windows::Globalization::Calendar>{ using type = class_category; };
template <> struct category<Windows::Globalization::CalendarIdentifiers>{ using type = class_category; };
template <> struct category<Windows::Globalization::ClockIdentifiers>{ using type = class_category; };
template <> struct category<Windows::Globalization::CurrencyIdentifiers>{ using type = class_category; };
template <> struct category<Windows::Globalization::GeographicRegion>{ using type = class_category; };
template <> struct category<Windows::Globalization::JapanesePhoneme>{ using type = class_category; };
template <> struct category<Windows::Globalization::JapanesePhoneticAnalyzer>{ using type = class_category; };
template <> struct category<Windows::Globalization::Language>{ using type = class_category; };
template <> struct category<Windows::Globalization::NumeralSystemIdentifiers>{ using type = class_category; };
template <> struct category<Windows::Globalization::DayOfWeek>{ using type = enum_category; };
template <> struct name<Windows::Globalization::IApplicationLanguagesStatics>{ static constexpr auto & value{ L"Windows.Globalization.IApplicationLanguagesStatics" }; };
template <> struct name<Windows::Globalization::ICalendar>{ static constexpr auto & value{ L"Windows.Globalization.ICalendar" }; };
template <> struct name<Windows::Globalization::ICalendarFactory>{ static constexpr auto & value{ L"Windows.Globalization.ICalendarFactory" }; };
template <> struct name<Windows::Globalization::ICalendarFactory2>{ static constexpr auto & value{ L"Windows.Globalization.ICalendarFactory2" }; };
template <> struct name<Windows::Globalization::ICalendarIdentifiersStatics>{ static constexpr auto & value{ L"Windows.Globalization.ICalendarIdentifiersStatics" }; };
template <> struct name<Windows::Globalization::ICalendarIdentifiersStatics2>{ static constexpr auto & value{ L"Windows.Globalization.ICalendarIdentifiersStatics2" }; };
template <> struct name<Windows::Globalization::ICalendarIdentifiersStatics3>{ static constexpr auto & value{ L"Windows.Globalization.ICalendarIdentifiersStatics3" }; };
template <> struct name<Windows::Globalization::IClockIdentifiersStatics>{ static constexpr auto & value{ L"Windows.Globalization.IClockIdentifiersStatics" }; };
template <> struct name<Windows::Globalization::ICurrencyIdentifiersStatics>{ static constexpr auto & value{ L"Windows.Globalization.ICurrencyIdentifiersStatics" }; };
template <> struct name<Windows::Globalization::ICurrencyIdentifiersStatics2>{ static constexpr auto & value{ L"Windows.Globalization.ICurrencyIdentifiersStatics2" }; };
template <> struct name<Windows::Globalization::IGeographicRegion>{ static constexpr auto & value{ L"Windows.Globalization.IGeographicRegion" }; };
template <> struct name<Windows::Globalization::IGeographicRegionFactory>{ static constexpr auto & value{ L"Windows.Globalization.IGeographicRegionFactory" }; };
template <> struct name<Windows::Globalization::IGeographicRegionStatics>{ static constexpr auto & value{ L"Windows.Globalization.IGeographicRegionStatics" }; };
template <> struct name<Windows::Globalization::IJapanesePhoneme>{ static constexpr auto & value{ L"Windows.Globalization.IJapanesePhoneme" }; };
template <> struct name<Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ static constexpr auto & value{ L"Windows.Globalization.IJapanesePhoneticAnalyzerStatics" }; };
template <> struct name<Windows::Globalization::ILanguage>{ static constexpr auto & value{ L"Windows.Globalization.ILanguage" }; };
template <> struct name<Windows::Globalization::ILanguageExtensionSubtags>{ static constexpr auto & value{ L"Windows.Globalization.ILanguageExtensionSubtags" }; };
template <> struct name<Windows::Globalization::ILanguageFactory>{ static constexpr auto & value{ L"Windows.Globalization.ILanguageFactory" }; };
template <> struct name<Windows::Globalization::ILanguageStatics>{ static constexpr auto & value{ L"Windows.Globalization.ILanguageStatics" }; };
template <> struct name<Windows::Globalization::ILanguageStatics2>{ static constexpr auto & value{ L"Windows.Globalization.ILanguageStatics2" }; };
template <> struct name<Windows::Globalization::INumeralSystemIdentifiersStatics>{ static constexpr auto & value{ L"Windows.Globalization.INumeralSystemIdentifiersStatics" }; };
template <> struct name<Windows::Globalization::INumeralSystemIdentifiersStatics2>{ static constexpr auto & value{ L"Windows.Globalization.INumeralSystemIdentifiersStatics2" }; };
template <> struct name<Windows::Globalization::ITimeZoneOnCalendar>{ static constexpr auto & value{ L"Windows.Globalization.ITimeZoneOnCalendar" }; };
template <> struct name<Windows::Globalization::ApplicationLanguages>{ static constexpr auto & value{ L"Windows.Globalization.ApplicationLanguages" }; };
template <> struct name<Windows::Globalization::Calendar>{ static constexpr auto & value{ L"Windows.Globalization.Calendar" }; };
template <> struct name<Windows::Globalization::CalendarIdentifiers>{ static constexpr auto & value{ L"Windows.Globalization.CalendarIdentifiers" }; };
template <> struct name<Windows::Globalization::ClockIdentifiers>{ static constexpr auto & value{ L"Windows.Globalization.ClockIdentifiers" }; };
template <> struct name<Windows::Globalization::CurrencyIdentifiers>{ static constexpr auto & value{ L"Windows.Globalization.CurrencyIdentifiers" }; };
template <> struct name<Windows::Globalization::GeographicRegion>{ static constexpr auto & value{ L"Windows.Globalization.GeographicRegion" }; };
template <> struct name<Windows::Globalization::JapanesePhoneme>{ static constexpr auto & value{ L"Windows.Globalization.JapanesePhoneme" }; };
template <> struct name<Windows::Globalization::JapanesePhoneticAnalyzer>{ static constexpr auto & value{ L"Windows.Globalization.JapanesePhoneticAnalyzer" }; };
template <> struct name<Windows::Globalization::Language>{ static constexpr auto & value{ L"Windows.Globalization.Language" }; };
template <> struct name<Windows::Globalization::NumeralSystemIdentifiers>{ static constexpr auto & value{ L"Windows.Globalization.NumeralSystemIdentifiers" }; };
template <> struct name<Windows::Globalization::DayOfWeek>{ static constexpr auto & value{ L"Windows.Globalization.DayOfWeek" }; };
template <> struct guid<Windows::Globalization::IApplicationLanguagesStatics>{ static constexpr GUID value{ 0x75B40847,0x0A4C,0x4A92,{ 0x95,0x65,0xFD,0x63,0xC9,0x5F,0x7A,0xED } }; };
template <> struct guid<Windows::Globalization::ICalendar>{ static constexpr GUID value{ 0xCA30221D,0x86D9,0x40FB,{ 0xA2,0x6B,0xD4,0x4E,0xB7,0xCF,0x08,0xEA } }; };
template <> struct guid<Windows::Globalization::ICalendarFactory>{ static constexpr GUID value{ 0x83F58412,0xE56B,0x4C75,{ 0xA6,0x6E,0x0F,0x63,0xD5,0x77,0x58,0xA6 } }; };
template <> struct guid<Windows::Globalization::ICalendarFactory2>{ static constexpr GUID value{ 0xB44B378C,0xCA7E,0x4590,{ 0x9E,0x72,0xEA,0x2B,0xEC,0x1A,0x51,0x15 } }; };
template <> struct guid<Windows::Globalization::ICalendarIdentifiersStatics>{ static constexpr GUID value{ 0x80653F68,0x2CB2,0x4C1F,{ 0xB5,0x90,0xF0,0xF5,0x2B,0xF4,0xFD,0x1A } }; };
template <> struct guid<Windows::Globalization::ICalendarIdentifiersStatics2>{ static constexpr GUID value{ 0x7DF4D488,0x5FD0,0x42A7,{ 0x95,0xB5,0x7D,0x98,0xD8,0x23,0x07,0x5F } }; };
template <> struct guid<Windows::Globalization::ICalendarIdentifiersStatics3>{ static constexpr GUID value{ 0x2C225423,0x1FAD,0x40C0,{ 0x93,0x34,0xA8,0xEB,0x90,0xDB,0x04,0xF5 } }; };
template <> struct guid<Windows::Globalization::IClockIdentifiersStatics>{ static constexpr GUID value{ 0x523805BB,0x12EC,0x4F83,{ 0xBC,0x31,0xB1,0xB4,0x37,0x6B,0x08,0x08 } }; };
template <> struct guid<Windows::Globalization::ICurrencyIdentifiersStatics>{ static constexpr GUID value{ 0x9F1D091B,0xD586,0x4913,{ 0x9B,0x6A,0xA9,0xBD,0x2D,0xC1,0x28,0x74 } }; };
template <> struct guid<Windows::Globalization::ICurrencyIdentifiersStatics2>{ static constexpr GUID value{ 0x1814797F,0xC3B2,0x4C33,{ 0x95,0x91,0x98,0x00,0x11,0x95,0x0D,0x37 } }; };
template <> struct guid<Windows::Globalization::IGeographicRegion>{ static constexpr GUID value{ 0x01E9A621,0x4A64,0x4ED9,{ 0x95,0x4F,0x9E,0xDE,0xB0,0x7B,0xD9,0x03 } }; };
template <> struct guid<Windows::Globalization::IGeographicRegionFactory>{ static constexpr GUID value{ 0x53425270,0x77B4,0x426B,{ 0x85,0x9F,0x81,0xE1,0x9D,0x51,0x25,0x46 } }; };
template <> struct guid<Windows::Globalization::IGeographicRegionStatics>{ static constexpr GUID value{ 0x29E28974,0x7AD9,0x4EF4,{ 0x87,0x99,0xB3,0xB4,0x4F,0xAD,0xEC,0x08 } }; };
template <> struct guid<Windows::Globalization::IJapanesePhoneme>{ static constexpr GUID value{ 0x2F6A9300,0xE85B,0x43E6,{ 0x89,0x7D,0x5D,0x82,0xF8,0x62,0xDF,0x21 } }; };
template <> struct guid<Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ static constexpr GUID value{ 0x88AB9E90,0x93DE,0x41B2,{ 0xB4,0xD5,0x8E,0xDB,0x22,0x7F,0xD1,0xC2 } }; };
template <> struct guid<Windows::Globalization::ILanguage>{ static constexpr GUID value{ 0xEA79A752,0xF7C2,0x4265,{ 0xB1,0xBD,0xC4,0xDE,0xC4,0xE4,0xF0,0x80 } }; };
template <> struct guid<Windows::Globalization::ILanguageExtensionSubtags>{ static constexpr GUID value{ 0x7D7DAF45,0x368D,0x4364,{ 0x85,0x2B,0xDE,0xC9,0x27,0x03,0x7B,0x85 } }; };
template <> struct guid<Windows::Globalization::ILanguageFactory>{ static constexpr GUID value{ 0x9B0252AC,0x0C27,0x44F8,{ 0xB7,0x92,0x97,0x93,0xFB,0x66,0xC6,0x3E } }; };
template <> struct guid<Windows::Globalization::ILanguageStatics>{ static constexpr GUID value{ 0xB23CD557,0x0865,0x46D4,{ 0x89,0xB8,0xD5,0x9B,0xE8,0x99,0x0F,0x0D } }; };
template <> struct guid<Windows::Globalization::ILanguageStatics2>{ static constexpr GUID value{ 0x30199F6E,0x914B,0x4B2A,{ 0x9D,0x6E,0xE3,0xB0,0xE2,0x7D,0xBE,0x4F } }; };
template <> struct guid<Windows::Globalization::INumeralSystemIdentifiersStatics>{ static constexpr GUID value{ 0xA5C662C3,0x68C9,0x4D3D,{ 0xB7,0x65,0x97,0x20,0x29,0xE2,0x1D,0xEC } }; };
template <> struct guid<Windows::Globalization::INumeralSystemIdentifiersStatics2>{ static constexpr GUID value{ 0x7F003228,0x9DDB,0x4A34,{ 0x91,0x04,0x02,0x60,0xC0,0x91,0xA7,0xC7 } }; };
template <> struct guid<Windows::Globalization::ITimeZoneOnCalendar>{ static constexpr GUID value{ 0xBB3C25E5,0x46CF,0x4317,{ 0xA3,0xF5,0x02,0x62,0x1A,0xD5,0x44,0x78 } }; };
template <> struct default_interface<Windows::Globalization::Calendar>{ using type = Windows::Globalization::ICalendar; };
template <> struct default_interface<Windows::Globalization::GeographicRegion>{ using type = Windows::Globalization::IGeographicRegion; };
template <> struct default_interface<Windows::Globalization::JapanesePhoneme>{ using type = Windows::Globalization::IJapanesePhoneme; };
template <> struct default_interface<Windows::Globalization::Language>{ using type = Windows::Globalization::ILanguage; };

template <typename D>
struct consume_Windows_Globalization_IApplicationLanguagesStatics
{
    hstring PrimaryLanguageOverride() const noexcept;
    void PrimaryLanguageOverride(param::hstring const& value) const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> ManifestLanguages() const noexcept;
};
template <> struct consume<Windows::Globalization::IApplicationLanguagesStatics> { template <typename D> using type = consume_Windows_Globalization_IApplicationLanguagesStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendar
{
    Windows::Globalization::Calendar Clone() const;
    void SetToMin() const;
    void SetToMax() const;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const noexcept;
    hstring NumeralSystem() const noexcept;
    void NumeralSystem(param::hstring const& value) const noexcept;
    hstring GetCalendarSystem() const;
    void ChangeCalendarSystem(param::hstring const& value) const;
    hstring GetClock() const;
    void ChangeClock(param::hstring const& value) const;
    Windows::Foundation::DateTime GetDateTime() const;
    void SetDateTime(Windows::Foundation::DateTime const& value) const;
    void SetToNow() const;
    int32_t FirstEra() const noexcept;
    int32_t LastEra() const noexcept;
    int32_t NumberOfEras() const noexcept;
    int32_t Era() const noexcept;
    void Era(int32_t value) const noexcept;
    void AddEras(int32_t eras) const;
    hstring EraAsString() const;
    hstring EraAsString(int32_t idealLength) const;
    int32_t FirstYearInThisEra() const noexcept;
    int32_t LastYearInThisEra() const noexcept;
    int32_t NumberOfYearsInThisEra() const noexcept;
    int32_t Year() const noexcept;
    void Year(int32_t value) const noexcept;
    void AddYears(int32_t years) const;
    hstring YearAsString() const;
    hstring YearAsTruncatedString(int32_t remainingDigits) const;
    hstring YearAsPaddedString(int32_t minDigits) const;
    int32_t FirstMonthInThisYear() const noexcept;
    int32_t LastMonthInThisYear() const noexcept;
    int32_t NumberOfMonthsInThisYear() const noexcept;
    int32_t Month() const noexcept;
    void Month(int32_t value) const noexcept;
    void AddMonths(int32_t months) const;
    hstring MonthAsString() const;
    hstring MonthAsString(int32_t idealLength) const;
    hstring MonthAsSoloString() const;
    hstring MonthAsSoloString(int32_t idealLength) const;
    hstring MonthAsNumericString() const;
    hstring MonthAsPaddedNumericString(int32_t minDigits) const;
    void AddWeeks(int32_t weeks) const;
    int32_t FirstDayInThisMonth() const noexcept;
    int32_t LastDayInThisMonth() const noexcept;
    int32_t NumberOfDaysInThisMonth() const noexcept;
    int32_t Day() const noexcept;
    void Day(int32_t value) const noexcept;
    void AddDays(int32_t days) const;
    hstring DayAsString() const;
    hstring DayAsPaddedString(int32_t minDigits) const;
    Windows::Globalization::DayOfWeek DayOfWeek() const noexcept;
    hstring DayOfWeekAsString() const;
    hstring DayOfWeekAsString(int32_t idealLength) const;
    hstring DayOfWeekAsSoloString() const;
    hstring DayOfWeekAsSoloString(int32_t idealLength) const;
    int32_t FirstPeriodInThisDay() const noexcept;
    int32_t LastPeriodInThisDay() const noexcept;
    int32_t NumberOfPeriodsInThisDay() const noexcept;
    int32_t Period() const noexcept;
    void Period(int32_t value) const noexcept;
    void AddPeriods(int32_t periods) const;
    hstring PeriodAsString() const;
    hstring PeriodAsString(int32_t idealLength) const;
    int32_t FirstHourInThisPeriod() const noexcept;
    int32_t LastHourInThisPeriod() const noexcept;
    int32_t NumberOfHoursInThisPeriod() const noexcept;
    int32_t Hour() const noexcept;
    void Hour(int32_t value) const noexcept;
    void AddHours(int32_t hours) const;
    hstring HourAsString() const;
    hstring HourAsPaddedString(int32_t minDigits) const;
    int32_t Minute() const noexcept;
    void Minute(int32_t value) const noexcept;
    void AddMinutes(int32_t minutes) const;
    hstring MinuteAsString() const;
    hstring MinuteAsPaddedString(int32_t minDigits) const;
    int32_t Second() const noexcept;
    void Second(int32_t value) const noexcept;
    void AddSeconds(int32_t seconds) const;
    hstring SecondAsString() const;
    hstring SecondAsPaddedString(int32_t minDigits) const;
    int32_t Nanosecond() const noexcept;
    void Nanosecond(int32_t value) const noexcept;
    void AddNanoseconds(int32_t nanoseconds) const;
    hstring NanosecondAsString() const;
    hstring NanosecondAsPaddedString(int32_t minDigits) const;
    int32_t Compare(Windows::Globalization::Calendar const& other) const;
    int32_t CompareDateTime(Windows::Foundation::DateTime const& other) const;
    void CopyTo(Windows::Globalization::Calendar const& other) const;
    int32_t FirstMinuteInThisHour() const noexcept;
    int32_t LastMinuteInThisHour() const noexcept;
    int32_t NumberOfMinutesInThisHour() const noexcept;
    int32_t FirstSecondInThisMinute() const noexcept;
    int32_t LastSecondInThisMinute() const noexcept;
    int32_t NumberOfSecondsInThisMinute() const noexcept;
    hstring ResolvedLanguage() const noexcept;
    bool IsDaylightSavingTime() const noexcept;
};
template <> struct consume<Windows::Globalization::ICalendar> { template <typename D> using type = consume_Windows_Globalization_ICalendar<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendarFactory
{
    Windows::Globalization::Calendar CreateCalendarDefaultCalendarAndClock(param::iterable<hstring> const& languages) const;
    Windows::Globalization::Calendar CreateCalendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock) const;
};
template <> struct consume<Windows::Globalization::ICalendarFactory> { template <typename D> using type = consume_Windows_Globalization_ICalendarFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendarFactory2
{
    Windows::Globalization::Calendar CreateCalendarWithTimeZone(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock, param::hstring const& timeZoneId) const;
};
template <> struct consume<Windows::Globalization::ICalendarFactory2> { template <typename D> using type = consume_Windows_Globalization_ICalendarFactory2<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendarIdentifiersStatics
{
    hstring Gregorian() const noexcept;
    hstring Hebrew() const noexcept;
    hstring Hijri() const noexcept;
    hstring Japanese() const noexcept;
    hstring Julian() const noexcept;
    hstring Korean() const noexcept;
    hstring Taiwan() const noexcept;
    hstring Thai() const noexcept;
    hstring UmAlQura() const noexcept;
};
template <> struct consume<Windows::Globalization::ICalendarIdentifiersStatics> { template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendarIdentifiersStatics2
{
    hstring Persian() const noexcept;
};
template <> struct consume<Windows::Globalization::ICalendarIdentifiersStatics2> { template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics2<D>; };

template <typename D>
struct consume_Windows_Globalization_ICalendarIdentifiersStatics3
{
    hstring ChineseLunar() const noexcept;
    hstring JapaneseLunar() const noexcept;
    hstring KoreanLunar() const noexcept;
    hstring TaiwanLunar() const noexcept;
    hstring VietnameseLunar() const noexcept;
};
template <> struct consume<Windows::Globalization::ICalendarIdentifiersStatics3> { template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>; };

template <typename D>
struct consume_Windows_Globalization_IClockIdentifiersStatics
{
    hstring TwelveHour() const noexcept;
    hstring TwentyFourHour() const noexcept;
};
template <> struct consume<Windows::Globalization::IClockIdentifiersStatics> { template <typename D> using type = consume_Windows_Globalization_IClockIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ICurrencyIdentifiersStatics
{
    hstring AED() const noexcept;
    hstring AFN() const noexcept;
    hstring ALL() const noexcept;
    hstring AMD() const noexcept;
    hstring ANG() const noexcept;
    hstring AOA() const noexcept;
    hstring ARS() const noexcept;
    hstring AUD() const noexcept;
    hstring AWG() const noexcept;
    hstring AZN() const noexcept;
    hstring BAM() const noexcept;
    hstring BBD() const noexcept;
    hstring BDT() const noexcept;
    hstring BGN() const noexcept;
    hstring BHD() const noexcept;
    hstring BIF() const noexcept;
    hstring BMD() const noexcept;
    hstring BND() const noexcept;
    hstring BOB() const noexcept;
    hstring BRL() const noexcept;
    hstring BSD() const noexcept;
    hstring BTN() const noexcept;
    hstring BWP() const noexcept;
    hstring BYR() const noexcept;
    hstring BZD() const noexcept;
    hstring CAD() const noexcept;
    hstring CDF() const noexcept;
    hstring CHF() const noexcept;
    hstring CLP() const noexcept;
    hstring CNY() const noexcept;
    hstring COP() const noexcept;
    hstring CRC() const noexcept;
    hstring CUP() const noexcept;
    hstring CVE() const noexcept;
    hstring CZK() const noexcept;
    hstring DJF() const noexcept;
    hstring DKK() const noexcept;
    hstring DOP() const noexcept;
    hstring DZD() const noexcept;
    hstring EGP() const noexcept;
    hstring ERN() const noexcept;
    hstring ETB() const noexcept;
    hstring EUR() const noexcept;
    hstring FJD() const noexcept;
    hstring FKP() const noexcept;
    hstring GBP() const noexcept;
    hstring GEL() const noexcept;
    hstring GHS() const noexcept;
    hstring GIP() const noexcept;
    hstring GMD() const noexcept;
    hstring GNF() const noexcept;
    hstring GTQ() const noexcept;
    hstring GYD() const noexcept;
    hstring HKD() const noexcept;
    hstring HNL() const noexcept;
    hstring HRK() const noexcept;
    hstring HTG() const noexcept;
    hstring HUF() const noexcept;
    hstring IDR() const noexcept;
    hstring ILS() const noexcept;
    hstring INR() const noexcept;
    hstring IQD() const noexcept;
    hstring IRR() const noexcept;
    hstring ISK() const noexcept;
    hstring JMD() const noexcept;
    hstring JOD() const noexcept;
    hstring JPY() const noexcept;
    hstring KES() const noexcept;
    hstring KGS() const noexcept;
    hstring KHR() const noexcept;
    hstring KMF() const noexcept;
    hstring KPW() const noexcept;
    hstring KRW() const noexcept;
    hstring KWD() const noexcept;
    hstring KYD() const noexcept;
    hstring KZT() const noexcept;
    hstring LAK() const noexcept;
    hstring LBP() const noexcept;
    hstring LKR() const noexcept;
    hstring LRD() const noexcept;
    hstring LSL() const noexcept;
    hstring LTL() const noexcept;
    hstring LVL() const noexcept;
    hstring LYD() const noexcept;
    hstring MAD() const noexcept;
    hstring MDL() const noexcept;
    hstring MGA() const noexcept;
    hstring MKD() const noexcept;
    hstring MMK() const noexcept;
    hstring MNT() const noexcept;
    hstring MOP() const noexcept;
    hstring MRO() const noexcept;
    hstring MUR() const noexcept;
    hstring MVR() const noexcept;
    hstring MWK() const noexcept;
    hstring MXN() const noexcept;
    hstring MYR() const noexcept;
    hstring MZN() const noexcept;
    hstring NAD() const noexcept;
    hstring NGN() const noexcept;
    hstring NIO() const noexcept;
    hstring NOK() const noexcept;
    hstring NPR() const noexcept;
    hstring NZD() const noexcept;
    hstring OMR() const noexcept;
    hstring PAB() const noexcept;
    hstring PEN() const noexcept;
    hstring PGK() const noexcept;
    hstring PHP() const noexcept;
    hstring PKR() const noexcept;
    hstring PLN() const noexcept;
    hstring PYG() const noexcept;
    hstring QAR() const noexcept;
    hstring RON() const noexcept;
    hstring RSD() const noexcept;
    hstring RUB() const noexcept;
    hstring RWF() const noexcept;
    hstring SAR() const noexcept;
    hstring SBD() const noexcept;
    hstring SCR() const noexcept;
    hstring SDG() const noexcept;
    hstring SEK() const noexcept;
    hstring SGD() const noexcept;
    hstring SHP() const noexcept;
    hstring SLL() const noexcept;
    hstring SOS() const noexcept;
    hstring SRD() const noexcept;
    hstring STD() const noexcept;
    hstring SYP() const noexcept;
    hstring SZL() const noexcept;
    hstring THB() const noexcept;
    hstring TJS() const noexcept;
    hstring TMT() const noexcept;
    hstring TND() const noexcept;
    hstring TOP() const noexcept;
    hstring TRY() const noexcept;
    hstring TTD() const noexcept;
    hstring TWD() const noexcept;
    hstring TZS() const noexcept;
    hstring UAH() const noexcept;
    hstring UGX() const noexcept;
    hstring USD() const noexcept;
    hstring UYU() const noexcept;
    hstring UZS() const noexcept;
    hstring VEF() const noexcept;
    hstring VND() const noexcept;
    hstring VUV() const noexcept;
    hstring WST() const noexcept;
    hstring XAF() const noexcept;
    hstring XCD() const noexcept;
    hstring XOF() const noexcept;
    hstring XPF() const noexcept;
    hstring XXX() const noexcept;
    hstring YER() const noexcept;
    hstring ZAR() const noexcept;
    hstring ZMW() const noexcept;
    hstring ZWL() const noexcept;
};
template <> struct consume<Windows::Globalization::ICurrencyIdentifiersStatics> { template <typename D> using type = consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ICurrencyIdentifiersStatics2
{
    hstring BYN() const noexcept;
};
template <> struct consume<Windows::Globalization::ICurrencyIdentifiersStatics2> { template <typename D> using type = consume_Windows_Globalization_ICurrencyIdentifiersStatics2<D>; };

template <typename D>
struct consume_Windows_Globalization_IGeographicRegion
{
    hstring Code() const noexcept;
    hstring CodeTwoLetter() const noexcept;
    hstring CodeThreeLetter() const noexcept;
    hstring CodeThreeDigit() const noexcept;
    hstring DisplayName() const noexcept;
    hstring NativeName() const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> CurrenciesInUse() const noexcept;
};
template <> struct consume<Windows::Globalization::IGeographicRegion> { template <typename D> using type = consume_Windows_Globalization_IGeographicRegion<D>; };

template <typename D>
struct consume_Windows_Globalization_IGeographicRegionFactory
{
    Windows::Globalization::GeographicRegion CreateGeographicRegion(param::hstring const& geographicRegionCode) const;
};
template <> struct consume<Windows::Globalization::IGeographicRegionFactory> { template <typename D> using type = consume_Windows_Globalization_IGeographicRegionFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_IGeographicRegionStatics
{
    bool IsSupported(param::hstring const& geographicRegionCode) const;
};
template <> struct consume<Windows::Globalization::IGeographicRegionStatics> { template <typename D> using type = consume_Windows_Globalization_IGeographicRegionStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_IJapanesePhoneme
{
    hstring DisplayText() const noexcept;
    hstring YomiText() const noexcept;
    bool IsPhraseStart() const noexcept;
};
template <> struct consume<Windows::Globalization::IJapanesePhoneme> { template <typename D> using type = consume_Windows_Globalization_IJapanesePhoneme<D>; };

template <typename D>
struct consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> GetWords(param::hstring const& input) const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::JapanesePhoneme> GetWords(param::hstring const& input, bool monoRuby) const;
};
template <> struct consume<Windows::Globalization::IJapanesePhoneticAnalyzerStatics> { template <typename D> using type = consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ILanguage
{
    hstring LanguageTag() const noexcept;
    hstring DisplayName() const noexcept;
    hstring NativeName() const noexcept;
    hstring Script() const noexcept;
};
template <> struct consume<Windows::Globalization::ILanguage> { template <typename D> using type = consume_Windows_Globalization_ILanguage<D>; };

template <typename D>
struct consume_Windows_Globalization_ILanguageExtensionSubtags
{
    Windows::Foundation::Collections::IVectorView<hstring> GetExtensionSubtags(param::hstring const& singleton) const;
};
template <> struct consume<Windows::Globalization::ILanguageExtensionSubtags> { template <typename D> using type = consume_Windows_Globalization_ILanguageExtensionSubtags<D>; };

template <typename D>
struct consume_Windows_Globalization_ILanguageFactory
{
    Windows::Globalization::Language CreateLanguage(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Globalization::ILanguageFactory> { template <typename D> using type = consume_Windows_Globalization_ILanguageFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_ILanguageStatics
{
    bool IsWellFormed(param::hstring const& languageTag) const;
    hstring CurrentInputMethodLanguageTag() const noexcept;
};
template <> struct consume<Windows::Globalization::ILanguageStatics> { template <typename D> using type = consume_Windows_Globalization_ILanguageStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_ILanguageStatics2
{
    bool TrySetInputMethodLanguageTag(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Globalization::ILanguageStatics2> { template <typename D> using type = consume_Windows_Globalization_ILanguageStatics2<D>; };

template <typename D>
struct consume_Windows_Globalization_INumeralSystemIdentifiersStatics
{
    hstring Arab() const noexcept;
    hstring ArabExt() const noexcept;
    hstring Bali() const noexcept;
    hstring Beng() const noexcept;
    hstring Cham() const noexcept;
    hstring Deva() const noexcept;
    hstring FullWide() const noexcept;
    hstring Gujr() const noexcept;
    hstring Guru() const noexcept;
    hstring HaniDec() const noexcept;
    hstring Java() const noexcept;
    hstring Kali() const noexcept;
    hstring Khmr() const noexcept;
    hstring Knda() const noexcept;
    hstring Lana() const noexcept;
    hstring LanaTham() const noexcept;
    hstring Laoo() const noexcept;
    hstring Latn() const noexcept;
    hstring Lepc() const noexcept;
    hstring Limb() const noexcept;
    hstring Mlym() const noexcept;
    hstring Mong() const noexcept;
    hstring Mtei() const noexcept;
    hstring Mymr() const noexcept;
    hstring MymrShan() const noexcept;
    hstring Nkoo() const noexcept;
    hstring Olck() const noexcept;
    hstring Orya() const noexcept;
    hstring Saur() const noexcept;
    hstring Sund() const noexcept;
    hstring Talu() const noexcept;
    hstring TamlDec() const noexcept;
    hstring Telu() const noexcept;
    hstring Thai() const noexcept;
    hstring Tibt() const noexcept;
    hstring Vaii() const noexcept;
};
template <> struct consume<Windows::Globalization::INumeralSystemIdentifiersStatics> { template <typename D> using type = consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_INumeralSystemIdentifiersStatics2
{
    hstring Brah() const noexcept;
    hstring Osma() const noexcept;
    hstring MathBold() const noexcept;
    hstring MathDbl() const noexcept;
    hstring MathSans() const noexcept;
    hstring MathSanb() const noexcept;
    hstring MathMono() const noexcept;
    hstring ZmthBold() const noexcept;
    hstring ZmthDbl() const noexcept;
    hstring ZmthSans() const noexcept;
    hstring ZmthSanb() const noexcept;
    hstring ZmthMono() const noexcept;
};
template <> struct consume<Windows::Globalization::INumeralSystemIdentifiersStatics2> { template <typename D> using type = consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>; };

template <typename D>
struct consume_Windows_Globalization_ITimeZoneOnCalendar
{
    hstring GetTimeZone() const;
    void ChangeTimeZone(param::hstring const& timeZoneId) const;
    hstring TimeZoneAsString() const;
    hstring TimeZoneAsString(int32_t idealLength) const;
};
template <> struct consume<Windows::Globalization::ITimeZoneOnCalendar> { template <typename D> using type = consume_Windows_Globalization_ITimeZoneOnCalendar<D>; };

template <> struct abi<Windows::Globalization::IApplicationLanguagesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrimaryLanguageOverride(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PrimaryLanguageOverride(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManifestLanguages(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clone(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetToMin() = 0;
    virtual HRESULT __stdcall SetToMax() = 0;
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(HSTRING value) = 0;
    virtual HRESULT __stdcall GetCalendarSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall ChangeCalendarSystem(HSTRING value) = 0;
    virtual HRESULT __stdcall GetClock(HSTRING* value) = 0;
    virtual HRESULT __stdcall ChangeClock(HSTRING value) = 0;
    virtual HRESULT __stdcall GetDateTime(Windows::Foundation::DateTime* result) = 0;
    virtual HRESULT __stdcall SetDateTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall SetToNow() = 0;
    virtual HRESULT __stdcall get_FirstEra(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastEra(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfEras(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Era(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Era(int32_t value) = 0;
    virtual HRESULT __stdcall AddEras(int32_t eras) = 0;
    virtual HRESULT __stdcall EraAsFullString(HSTRING* result) = 0;
    virtual HRESULT __stdcall EraAsString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_FirstYearInThisEra(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastYearInThisEra(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfYearsInThisEra(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Year(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Year(int32_t value) = 0;
    virtual HRESULT __stdcall AddYears(int32_t years) = 0;
    virtual HRESULT __stdcall YearAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall YearAsTruncatedString(int32_t remainingDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall YearAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_FirstMonthInThisYear(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastMonthInThisYear(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfMonthsInThisYear(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Month(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Month(int32_t value) = 0;
    virtual HRESULT __stdcall AddMonths(int32_t months) = 0;
    virtual HRESULT __stdcall MonthAsFullString(HSTRING* result) = 0;
    virtual HRESULT __stdcall MonthAsString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall MonthAsFullSoloString(HSTRING* result) = 0;
    virtual HRESULT __stdcall MonthAsSoloString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall MonthAsNumericString(HSTRING* result) = 0;
    virtual HRESULT __stdcall MonthAsPaddedNumericString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall AddWeeks(int32_t weeks) = 0;
    virtual HRESULT __stdcall get_FirstDayInThisMonth(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastDayInThisMonth(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfDaysInThisMonth(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Day(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Day(int32_t value) = 0;
    virtual HRESULT __stdcall AddDays(int32_t days) = 0;
    virtual HRESULT __stdcall DayAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall DayAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_DayOfWeek(Windows::Globalization::DayOfWeek* value) = 0;
    virtual HRESULT __stdcall DayOfWeekAsFullString(HSTRING* result) = 0;
    virtual HRESULT __stdcall DayOfWeekAsString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall DayOfWeekAsFullSoloString(HSTRING* result) = 0;
    virtual HRESULT __stdcall DayOfWeekAsSoloString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_FirstPeriodInThisDay(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastPeriodInThisDay(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfPeriodsInThisDay(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Period(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Period(int32_t value) = 0;
    virtual HRESULT __stdcall AddPeriods(int32_t periods) = 0;
    virtual HRESULT __stdcall PeriodAsFullString(HSTRING* result) = 0;
    virtual HRESULT __stdcall PeriodAsString(int32_t idealLength, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_FirstHourInThisPeriod(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastHourInThisPeriod(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfHoursInThisPeriod(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Hour(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Hour(int32_t value) = 0;
    virtual HRESULT __stdcall AddHours(int32_t hours) = 0;
    virtual HRESULT __stdcall HourAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall HourAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Minute(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Minute(int32_t value) = 0;
    virtual HRESULT __stdcall AddMinutes(int32_t minutes) = 0;
    virtual HRESULT __stdcall MinuteAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall MinuteAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Second(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Second(int32_t value) = 0;
    virtual HRESULT __stdcall AddSeconds(int32_t seconds) = 0;
    virtual HRESULT __stdcall SecondAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall SecondAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Nanosecond(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Nanosecond(int32_t value) = 0;
    virtual HRESULT __stdcall AddNanoseconds(int32_t nanoseconds) = 0;
    virtual HRESULT __stdcall NanosecondAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall NanosecondAsPaddedString(int32_t minDigits, HSTRING* result) = 0;
    virtual HRESULT __stdcall Compare(::IUnknown* other, int32_t* result) = 0;
    virtual HRESULT __stdcall CompareDateTime(Windows::Foundation::DateTime other, int32_t* result) = 0;
    virtual HRESULT __stdcall CopyTo(::IUnknown* other) = 0;
    virtual HRESULT __stdcall get_FirstMinuteInThisHour(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastMinuteInThisHour(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfMinutesInThisHour(int32_t* value) = 0;
    virtual HRESULT __stdcall get_FirstSecondInThisMinute(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LastSecondInThisMinute(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfSecondsInThisMinute(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsDaylightSavingTime(bool* value) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendarFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCalendarDefaultCalendarAndClock(::IUnknown* languages, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateCalendar(::IUnknown* languages, HSTRING calendar, HSTRING clock, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendarFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCalendarWithTimeZone(::IUnknown* languages, HSTRING calendar, HSTRING clock, HSTRING timeZoneId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendarIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Gregorian(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Hebrew(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Hijri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Japanese(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Julian(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Korean(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Taiwan(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Thai(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UmAlQura(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendarIdentifiersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Persian(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ICalendarIdentifiersStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChineseLunar(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JapaneseLunar(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KoreanLunar(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TaiwanLunar(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VietnameseLunar(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::IClockIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TwelveHour(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TwentyFourHour(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ICurrencyIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AED(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AFN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ALL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AMD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ANG(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AOA(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ARS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AUD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AWG(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AZN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BAM(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BBD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BDT(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BGN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BHD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BIF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BMD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BND(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BOB(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BRL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BSD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BTN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BWP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BYR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BZD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CAD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CDF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CHF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CLP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CNY(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_COP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CRC(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CUP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CVE(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CZK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DJF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DKK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DOP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DZD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EGP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ERN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ETB(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EUR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FJD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FKP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GBP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GEL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GHS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GIP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GMD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GNF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GTQ(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GYD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HKD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HNL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HRK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HTG(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HUF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IDR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ILS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_INR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IQD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IRR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ISK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JMD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JOD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JPY(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KES(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KGS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KHR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KMF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KPW(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KRW(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KWD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KYD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_KZT(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LAK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LBP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LKR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LRD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LSL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LTL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LVL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LYD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MAD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MDL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MGA(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MKD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MMK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MNT(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MOP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MRO(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MUR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MVR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MWK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MXN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MYR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MZN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NAD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NGN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NIO(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NOK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NPR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NZD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OMR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PAB(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PEN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PGK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PHP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PKR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PLN(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PYG(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_QAR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RON(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RSD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RUB(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RWF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SAR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SBD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SCR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SDG(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SEK(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SGD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SHP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SLL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SOS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SRD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_STD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SYP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SZL(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_THB(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TJS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TMT(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TND(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TOP(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TRY(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TTD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TWD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TZS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UAH(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UGX(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_USD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UYU(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UZS(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VEF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VND(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VUV(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WST(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XAF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XCD(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XOF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XPF(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XXX(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YER(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZAR(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZMW(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZWL(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ICurrencyIdentifiersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BYN(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::IGeographicRegion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Code(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CodeTwoLetter(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CodeThreeLetter(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CodeThreeDigit(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NativeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CurrenciesInUse(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Globalization::IGeographicRegionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateGeographicRegion(HSTRING geographicRegionCode, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::IGeographicRegionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(HSTRING geographicRegionCode, bool* result) = 0;
};};

template <> struct abi<Windows::Globalization::IJapanesePhoneme>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YomiText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsPhraseStart(bool* value) = 0;
};};

template <> struct abi<Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetWords(HSTRING input, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetWordsWithMonoRubyOption(HSTRING input, bool monoRuby, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::ILanguage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LanguageTag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NativeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Script(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ILanguageExtensionSubtags>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetExtensionSubtags(HSTRING singleton, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Globalization::ILanguageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLanguage(HSTRING languageTag, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::ILanguageStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsWellFormed(HSTRING languageTag, bool* result) = 0;
    virtual HRESULT __stdcall get_CurrentInputMethodLanguageTag(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ILanguageStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TrySetInputMethodLanguageTag(HSTRING languageTag, bool* result) = 0;
};};

template <> struct abi<Windows::Globalization::INumeralSystemIdentifiersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Arab(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ArabExt(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Bali(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Beng(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Cham(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Deva(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FullWide(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Gujr(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Guru(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HaniDec(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Java(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kali(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Khmr(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Knda(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Lana(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LanaTham(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Laoo(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Latn(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Lepc(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Limb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mlym(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mong(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mtei(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Mymr(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MymrShan(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Nkoo(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Olck(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Orya(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Saur(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sund(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Talu(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TamlDec(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Telu(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Thai(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Tibt(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Vaii(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::INumeralSystemIdentifiersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Brah(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Osma(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MathBold(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MathDbl(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MathSans(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MathSanb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MathMono(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZmthBold(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZmthDbl(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZmthSans(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZmthSanb(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ZmthMono(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::ITimeZoneOnCalendar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTimeZone(HSTRING* value) = 0;
    virtual HRESULT __stdcall ChangeTimeZone(HSTRING timeZoneId) = 0;
    virtual HRESULT __stdcall TimeZoneAsFullString(HSTRING* result) = 0;
    virtual HRESULT __stdcall TimeZoneAsString(int32_t idealLength, HSTRING* result) = 0;
};};

}
