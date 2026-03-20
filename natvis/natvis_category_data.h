#pragma once

// Category data table extracted from object_visualizer.cpp for testability.
// Maps PropertyCategory enum values to their ABI field names and display types.

#include <windows.h>

constexpr struct
{
    PCWSTR propField;
    PCWSTR displayType;
}
g_categoryData[] =
{
    { L"b", L"bool" },
    { L"c", L"wchar_t" },
    { L"i1", L"int8_t" },
    { L"u1", L"uint8_t" },
    { L"i2", L"int16_t" },
    { L"u2", L"uint16_t" },
    { L"i4", L"int32_t" },
    { L"u4", L"uint32_t" },
    { L"i8", L"int64_t" },
    { L"u8", L"uint64_t" },
    { L"r4", L"float" },
    { L"r8", L"double" },
    { L"s,sh", L"winrt::hstring" },
    { L"g", L"winrt::guid" },
};
