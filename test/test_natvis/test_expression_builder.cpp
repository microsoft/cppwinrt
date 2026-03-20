#include "pch.h"
#include "natvis_category_data.h"

// PropertyCategory and IsBuiltIn from object_visualizer.h — redeclared here
// to avoid pulling in the full debugger SDK dependency
enum class PropertyCategory
{
    Bool, Char, Int1, Uint1, Int2, Uint2, Int4, Uint4,
    Int8, Uint8, Real4, Real8, String, Guid, Value, Class,
};

inline constexpr bool IsBuiltIn(PropertyCategory value) noexcept
{
    return PropertyCategory::Bool <= value && value < PropertyCategory::Value;
}

TEST_CASE("category data table has correct number of entries", "[expression]")
{
    // g_categoryData should have entries for all built-in PropertyCategory values
    // Bool through Guid = 14 entries
    REQUIRE(std::size(g_categoryData) == 14);
}

TEST_CASE("category data field names match expected", "[expression]")
{
    // Verify each PropertyCategory maps to the correct ABI field name
    struct
    {
        PropertyCategory cat;
        const wchar_t* expected_field;
    }
    expected[] = {
        { PropertyCategory::Bool,   L"b" },
        { PropertyCategory::Char,   L"c" },
        { PropertyCategory::Int1,   L"i1" },
        { PropertyCategory::Uint1,  L"u1" },
        { PropertyCategory::Int2,   L"i2" },
        { PropertyCategory::Uint2,  L"u2" },
        { PropertyCategory::Int4,   L"i4" },
        { PropertyCategory::Uint4,  L"u4" },
        { PropertyCategory::Int8,   L"i8" },
        { PropertyCategory::Uint8,  L"u8" },
        { PropertyCategory::Real4,  L"r4" },
        { PropertyCategory::Real8,  L"r8" },
        { PropertyCategory::String, L"s,sh" },
        { PropertyCategory::Guid,   L"g" },
    };

    for (auto& [cat, expected_field] : expected)
    {
        auto idx = static_cast<int>(cat);
        REQUIRE(idx < static_cast<int>(std::size(g_categoryData)));
        REQUIRE(std::wstring(g_categoryData[idx].propField) == expected_field);
    }
}

TEST_CASE("category data display types match expected", "[expression]")
{
    struct
    {
        PropertyCategory cat;
        const wchar_t* expected_display;
    }
    expected[] = {
        { PropertyCategory::Bool,   L"bool" },
        { PropertyCategory::Char,   L"wchar_t" },
        { PropertyCategory::Int1,   L"int8_t" },
        { PropertyCategory::Uint1,  L"uint8_t" },
        { PropertyCategory::Int2,   L"int16_t" },
        { PropertyCategory::Uint2,  L"uint16_t" },
        { PropertyCategory::Int4,   L"int32_t" },
        { PropertyCategory::Uint4,  L"uint32_t" },
        { PropertyCategory::Int8,   L"int64_t" },
        { PropertyCategory::Uint8,  L"uint64_t" },
        { PropertyCategory::Real4,  L"float" },
        { PropertyCategory::Real8,  L"double" },
        { PropertyCategory::String, L"winrt::hstring" },
        { PropertyCategory::Guid,   L"winrt::guid" },
    };

    for (auto& [cat, expected_display] : expected)
    {
        auto idx = static_cast<int>(cat);
        REQUIRE(std::wstring(g_categoryData[idx].displayType) == expected_display);
    }
}

TEST_CASE("IsBuiltIn identifies correct range", "[expression]")
{
    // Bool through Guid should be built-in
    REQUIRE(IsBuiltIn(PropertyCategory::Bool));
    REQUIRE(IsBuiltIn(PropertyCategory::Char));
    REQUIRE(IsBuiltIn(PropertyCategory::Int1));
    REQUIRE(IsBuiltIn(PropertyCategory::Uint1));
    REQUIRE(IsBuiltIn(PropertyCategory::Int2));
    REQUIRE(IsBuiltIn(PropertyCategory::Uint2));
    REQUIRE(IsBuiltIn(PropertyCategory::Int4));
    REQUIRE(IsBuiltIn(PropertyCategory::Uint4));
    REQUIRE(IsBuiltIn(PropertyCategory::Int8));
    REQUIRE(IsBuiltIn(PropertyCategory::Uint8));
    REQUIRE(IsBuiltIn(PropertyCategory::Real4));
    REQUIRE(IsBuiltIn(PropertyCategory::Real8));
    REQUIRE(IsBuiltIn(PropertyCategory::String));
    REQUIRE(IsBuiltIn(PropertyCategory::Guid));

    // Value and Class should NOT be built-in
    REQUIRE_FALSE(IsBuiltIn(PropertyCategory::Value));
    REQUIRE_FALSE(IsBuiltIn(PropertyCategory::Class));
}

TEST_CASE("category data table covers all built-in categories", "[expression]")
{
    // Verify the table size matches the number of built-in categories
    int builtin_count = 0;
    for (int i = 0; i <= static_cast<int>(PropertyCategory::Class); ++i)
    {
        if (IsBuiltIn(static_cast<PropertyCategory>(i)))
            ++builtin_count;
    }
    REQUIRE(static_cast<size_t>(builtin_count) == std::size(g_categoryData));
}
