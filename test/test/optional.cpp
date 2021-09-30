#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;

TEST_CASE("optional")
{
    test_component::Optional object;

    object.Property(Windows::Foundation::IReference(123));
    REQUIRE(object.Property().Value() == 123);

    object.Property(nullptr);
    REQUIRE(object.Property() == nullptr);

    object.Property(456);
    REQUIRE(object.Property().Value() == 456);

    object.Property(std::optional(789));
    std::optional<int32_t> value = object.Property();
    REQUIRE(value == std::optional(789));
}
