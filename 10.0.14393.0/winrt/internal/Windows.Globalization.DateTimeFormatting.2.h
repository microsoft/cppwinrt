// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.DateTimeFormatting.1.h"

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

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace Windows::Globalization::DateTimeFormatting {

template <typename D>
struct WINRT_EBO impl_IDateTimeFormatter
{
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring GeographicRegion() const;
    hstring Calendar() const;
    hstring Clock() const;
    hstring NumeralSystem() const;
    void NumeralSystem(hstring_ref value) const;
    Windows::Foundation::Collections::IVectorView<hstring> Patterns() const;
    hstring Template() const;
    hstring Format(const Windows::Foundation::DateTime & value) const;
    Windows::Globalization::DateTimeFormatting::YearFormat IncludeYear() const;
    Windows::Globalization::DateTimeFormatting::MonthFormat IncludeMonth() const;
    Windows::Globalization::DateTimeFormatting::DayOfWeekFormat IncludeDayOfWeek() const;
    Windows::Globalization::DateTimeFormatting::DayFormat IncludeDay() const;
    Windows::Globalization::DateTimeFormatting::HourFormat IncludeHour() const;
    Windows::Globalization::DateTimeFormatting::MinuteFormat IncludeMinute() const;
    Windows::Globalization::DateTimeFormatting::SecondFormat IncludeSecond() const;
    hstring ResolvedLanguage() const;
    hstring ResolvedGeographicRegion() const;
};

template <typename D>
struct WINRT_EBO impl_IDateTimeFormatter2
{
    hstring Format(const Windows::Foundation::DateTime & datetime, hstring_ref timeZoneId) const;
};

template <typename D>
struct WINRT_EBO impl_IDateTimeFormatterFactory
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatter(hstring_ref formatTemplate) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterLanguages(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterContext(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDate(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterTime(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDateTimeLanguages(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDateTimeContext(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) const;
};

template <typename D>
struct WINRT_EBO impl_IDateTimeFormatterStatics
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongDate() const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongTime() const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortDate() const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortTime() const;
};

struct IDateTimeFormatter :
    Windows::IInspectable,
    impl::consume<IDateTimeFormatter>
{
    IDateTimeFormatter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDateTimeFormatter>(m_ptr); }
};

struct IDateTimeFormatter2 :
    Windows::IInspectable,
    impl::consume<IDateTimeFormatter2>
{
    IDateTimeFormatter2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDateTimeFormatter2>(m_ptr); }
};

struct IDateTimeFormatterFactory :
    Windows::IInspectable,
    impl::consume<IDateTimeFormatterFactory>
{
    IDateTimeFormatterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDateTimeFormatterFactory>(m_ptr); }
};

struct IDateTimeFormatterStatics :
    Windows::IInspectable,
    impl::consume<IDateTimeFormatterStatics>
{
    IDateTimeFormatterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDateTimeFormatterStatics>(m_ptr); }
};

}

}
