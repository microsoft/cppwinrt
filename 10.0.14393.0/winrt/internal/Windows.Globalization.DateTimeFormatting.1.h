// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Globalization.DateTimeFormatting.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Globalization::DateTimeFormatting {

struct __declspec(uuid("95eeca10-73e0-4e4b-a183-3d6ad0ba35ec")) __declspec(novtable) IDateTimeFormatter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Languages(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_GeographicRegion(hstring * value) = 0;
    virtual HRESULT __stdcall get_Calendar(hstring * value) = 0;
    virtual HRESULT __stdcall get_Clock(hstring * value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(hstring * value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(hstring value) = 0;
    virtual HRESULT __stdcall get_Patterns(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Template(hstring * value) = 0;
    virtual HRESULT __stdcall abi_Format(Windows::Foundation::DateTime value, hstring * result) = 0;
    virtual HRESULT __stdcall get_IncludeYear(winrt::Windows::Globalization::DateTimeFormatting::YearFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeMonth(winrt::Windows::Globalization::DateTimeFormatting::MonthFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeDayOfWeek(winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeDay(winrt::Windows::Globalization::DateTimeFormatting::DayFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeHour(winrt::Windows::Globalization::DateTimeFormatting::HourFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeMinute(winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat * value) = 0;
    virtual HRESULT __stdcall get_IncludeSecond(winrt::Windows::Globalization::DateTimeFormatting::SecondFormat * value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall get_ResolvedGeographicRegion(hstring * value) = 0;
};

struct __declspec(uuid("27c91a86-bdaa-4fd0-9e36-671d5aa5ee03")) __declspec(novtable) IDateTimeFormatter2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FormatUsingTimeZone(Windows::Foundation::DateTime datetime, hstring timeZoneId, hstring * result) = 0;
};

struct __declspec(uuid("ec8d8a53-1a2e-412d-8815-3b745fb1a2a0")) __declspec(novtable) IDateTimeFormatterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateDateTimeFormatter(hstring formatTemplate, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterLanguages(hstring formatTemplate, Windows::Foundation::Collections::IIterable<hstring> * languages, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterContext(hstring formatTemplate, Windows::Foundation::Collections::IIterable<hstring> * languages, hstring geographicRegion, hstring calendar, hstring clock, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterDate(winrt::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterTime(winrt::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterDateTimeLanguages(winrt::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, winrt::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, Windows::Foundation::Collections::IIterable<hstring> * languages, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeFormatterDateTimeContext(winrt::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, winrt::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, Windows::Foundation::Collections::IIterable<hstring> * languages, hstring geographicRegion, hstring calendar, hstring clock, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** result) = 0;
};

struct __declspec(uuid("bfcde7c0-df4c-4a2e-9012-f47daf3f1212")) __declspec(novtable) IDateTimeFormatterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LongDate(Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** value) = 0;
    virtual HRESULT __stdcall get_LongTime(Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** value) = 0;
    virtual HRESULT __stdcall get_ShortDate(Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** value) = 0;
    virtual HRESULT __stdcall get_ShortTime(Windows::Globalization::DateTimeFormatting::IDateTimeFormatter ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Globalization::DateTimeFormatting::DateTimeFormatter> { using default_interface = Windows::Globalization::DateTimeFormatting::IDateTimeFormatter; };

}

namespace Windows::Globalization::DateTimeFormatting {

template <typename T> struct impl_IDateTimeFormatter;
template <typename T> struct impl_IDateTimeFormatter2;
template <typename T> struct impl_IDateTimeFormatterFactory;
template <typename T> struct impl_IDateTimeFormatterStatics;

}

namespace impl {

template <> struct traits<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>
{
    using abi = ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter;
    template <typename D> using consume = Windows::Globalization::DateTimeFormatting::impl_IDateTimeFormatter<D>;
};

template <> struct traits<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
{
    using abi = ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2;
    template <typename D> using consume = Windows::Globalization::DateTimeFormatting::impl_IDateTimeFormatter2<D>;
};

template <> struct traits<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>
{
    using abi = ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory;
    template <typename D> using consume = Windows::Globalization::DateTimeFormatting::impl_IDateTimeFormatterFactory<D>;
};

template <> struct traits<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>
{
    using abi = ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics;
    template <typename D> using consume = Windows::Globalization::DateTimeFormatting::impl_IDateTimeFormatterStatics<D>;
};

template <> struct traits<Windows::Globalization::DateTimeFormatting::DateTimeFormatter>
{
    using abi = ABI::Windows::Globalization::DateTimeFormatting::DateTimeFormatter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter"; }
};

}

}
