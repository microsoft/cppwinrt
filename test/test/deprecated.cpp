#include "pch.h"

// Suppress C4996 (deprecated) warnings so the test compiles cleanly
#pragma warning(push)
#pragma warning(disable: 4996)

#include "winrt/test_component.h"

using namespace winrt;

TEST_CASE("deprecated_enum_compiles")
{
    auto val = test_component::DeprecatedEnum::First;
    REQUIRE(val == test_component::DeprecatedEnum::First);
    REQUIRE(static_cast<int32_t>(val) == 0);
}

TEST_CASE("deprecated_class_compiles")
{
    test_component::DeprecatedClass obj{ nullptr };
    REQUIRE(!obj);
}

TEST_CASE("deprecated_method_on_class_compiles")
{
    // Verify that deprecated static methods can be referenced without error.
    // We cannot actually call them without an implementation, but we can verify
    // the generated code compiles.
    auto fn_ptr = &test_component::DeprecatedClass::OldStaticMethod;
    REQUIRE(fn_ptr != nullptr);
}

#pragma warning(pop)
