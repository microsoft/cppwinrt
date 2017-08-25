// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.DateTimeFormatting.1.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::DateTimeFormatting {

struct WINRT_EBO DateTimeFormatter :
    Windows::Globalization::DateTimeFormatting::IDateTimeFormatter,
    impl::require<DateTimeFormatter, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
{
    DateTimeFormatter(std::nullptr_t) noexcept {}
    DateTimeFormatter(param::hstring const& formatTemplate);
    DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages);
    DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
    using impl::consume_t<DateTimeFormatter, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>::Format;
    using Windows::Globalization::DateTimeFormatting::IDateTimeFormatter::Format;
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongDate();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongTime();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortDate();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortTime();
};

}
