// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.DateTimeFormatting.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::DateTimeFormatting {

struct WINRT_EBO DateTimeFormatter :
    Windows::Globalization::DateTimeFormatting::IDateTimeFormatter,
    impl::require<DateTimeFormatter, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
{
    DateTimeFormatter(std::nullptr_t) noexcept {}
    DateTimeFormatter(hstring_ref formatTemplate);
    DateTimeFormatter(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages);
    DateTimeFormatter(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages);
    DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock);
    using impl_IDateTimeFormatter::Format;
    using impl_IDateTimeFormatter2::Format;
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongDate();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongTime();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortDate();
    static Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortTime();
};

}

}
