// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization::DateTimeFormatting {

enum class DayFormat : int32_t
{
    None = 0,
    Default = 1,
};

enum class DayOfWeekFormat : int32_t
{
    None = 0,
    Default = 1,
    Abbreviated = 2,
    Full = 3,
};

enum class HourFormat : int32_t
{
    None = 0,
    Default = 1,
};

enum class MinuteFormat : int32_t
{
    None = 0,
    Default = 1,
};

enum class MonthFormat : int32_t
{
    None = 0,
    Default = 1,
    Abbreviated = 2,
    Full = 3,
    Numeric = 4,
};

enum class SecondFormat : int32_t
{
    None = 0,
    Default = 1,
};

enum class YearFormat : int32_t
{
    None = 0,
    Default = 1,
    Abbreviated = 2,
    Full = 3,
};

struct IDateTimeFormatter;
struct IDateTimeFormatter2;
struct IDateTimeFormatterFactory;
struct IDateTimeFormatterStatics;
struct DateTimeFormatter;

}

namespace winrt::impl {

template <> struct category<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>{ using type = interface_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>{ using type = interface_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::DateTimeFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::DayFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::DayOfWeekFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::HourFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::MinuteFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::MonthFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::SecondFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::DateTimeFormatting::YearFormat>{ using type = enum_category; };
template <> struct name<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::DateTimeFormatter>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::DayFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.DayFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::DayOfWeekFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.DayOfWeekFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::HourFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.HourFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::MinuteFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.MinuteFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::MonthFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.MonthFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::SecondFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.SecondFormat" }; };
template <> struct name<Windows::Globalization::DateTimeFormatting::YearFormat>{ static constexpr auto & value{ L"Windows.Globalization.DateTimeFormatting.YearFormat" }; };
template <> struct guid<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>{ static constexpr GUID value{ 0x95EECA10,0x73E0,0x4E4B,{ 0xA1,0x83,0x3D,0x6A,0xD0,0xBA,0x35,0xEC } }; };
template <> struct guid<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>{ static constexpr GUID value{ 0x27C91A86,0xBDAA,0x4FD0,{ 0x9E,0x36,0x67,0x1D,0x5A,0xA5,0xEE,0x03 } }; };
template <> struct guid<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>{ static constexpr GUID value{ 0xEC8D8A53,0x1A2E,0x412D,{ 0x88,0x15,0x3B,0x74,0x5F,0xB1,0xA2,0xA0 } }; };
template <> struct guid<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>{ static constexpr GUID value{ 0xBFCDE7C0,0xDF4C,0x4A2E,{ 0x90,0x12,0xF4,0x7D,0xAF,0x3F,0x12,0x12 } }; };
template <> struct default_interface<Windows::Globalization::DateTimeFormatting::DateTimeFormatter>{ using type = Windows::Globalization::DateTimeFormatting::IDateTimeFormatter; };

template <typename D>
struct consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter
{
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const noexcept;
    hstring GeographicRegion() const noexcept;
    hstring Calendar() const noexcept;
    hstring Clock() const noexcept;
    hstring NumeralSystem() const noexcept;
    void NumeralSystem(param::hstring const& value) const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> Patterns() const noexcept;
    hstring Template() const noexcept;
    hstring Format(Windows::Foundation::DateTime const& value) const;
    Windows::Globalization::DateTimeFormatting::YearFormat IncludeYear() const noexcept;
    Windows::Globalization::DateTimeFormatting::MonthFormat IncludeMonth() const noexcept;
    Windows::Globalization::DateTimeFormatting::DayOfWeekFormat IncludeDayOfWeek() const noexcept;
    Windows::Globalization::DateTimeFormatting::DayFormat IncludeDay() const noexcept;
    Windows::Globalization::DateTimeFormatting::HourFormat IncludeHour() const noexcept;
    Windows::Globalization::DateTimeFormatting::MinuteFormat IncludeMinute() const noexcept;
    Windows::Globalization::DateTimeFormatting::SecondFormat IncludeSecond() const noexcept;
    hstring ResolvedLanguage() const noexcept;
    hstring ResolvedGeographicRegion() const noexcept;
};
template <> struct consume<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> { template <typename D> using type = consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter<D>; };

template <typename D>
struct consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2
{
    hstring Format(Windows::Foundation::DateTime const& datetime, param::hstring const& timeZoneId) const;
};
template <> struct consume<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2> { template <typename D> using type = consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2<D>; };

template <typename D>
struct consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatter(param::hstring const& formatTemplate) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterLanguages(param::hstring const& formatTemplate, param::iterable<hstring> const& languages) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterContext(param::hstring const& formatTemplate, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDate(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterTime(Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDateTimeLanguages(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages) const;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter CreateDateTimeFormatterDateTimeContext(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock) const;
};
template <> struct consume<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory> { template <typename D> using type = consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongDate() const noexcept;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter LongTime() const noexcept;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortDate() const noexcept;
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter ShortTime() const noexcept;
};
template <> struct consume<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics> { template <typename D> using type = consume_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics<D>; };

template <> struct abi<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GeographicRegion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Calendar(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Clock(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumeralSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NumeralSystem(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Patterns(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Template(HSTRING* value) = 0;
    virtual HRESULT __stdcall Format(Windows::Foundation::DateTime value, HSTRING* result) = 0;
    virtual HRESULT __stdcall get_IncludeYear(Windows::Globalization::DateTimeFormatting::YearFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeMonth(Windows::Globalization::DateTimeFormatting::MonthFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeDayOfWeek(Windows::Globalization::DateTimeFormatting::DayOfWeekFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeDay(Windows::Globalization::DateTimeFormatting::DayFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeHour(Windows::Globalization::DateTimeFormatting::HourFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeMinute(Windows::Globalization::DateTimeFormatting::MinuteFormat* value) = 0;
    virtual HRESULT __stdcall get_IncludeSecond(Windows::Globalization::DateTimeFormatting::SecondFormat* value) = 0;
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ResolvedGeographicRegion(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FormatUsingTimeZone(Windows::Foundation::DateTime datetime, HSTRING timeZoneId, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDateTimeFormatter(HSTRING formatTemplate, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterLanguages(HSTRING formatTemplate, ::IUnknown* languages, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterContext(HSTRING formatTemplate, ::IUnknown* languages, HSTRING geographicRegion, HSTRING calendar, HSTRING clock, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterDate(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterTime(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterDateTimeLanguages(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, ::IUnknown* languages, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDateTimeFormatterDateTimeContext(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, ::IUnknown* languages, HSTRING geographicRegion, HSTRING calendar, HSTRING clock, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LongDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LongTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShortDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShortTime(::IUnknown** value) = 0;
};};

}
