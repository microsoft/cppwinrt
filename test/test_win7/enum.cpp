#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace test_component;

TEST_CASE("enum")
{
    STATIC_REQUIRE(std::is_same_v<std::underlying_type_t<Signed>, int32_t>);
    STATIC_REQUIRE(std::is_same_v<std::underlying_type_t<Unsigned>, uint32_t>);

    STATIC_REQUIRE(name_of<Signed>() == L"test_component.Signed"sv);
    STATIC_REQUIRE(name_of<Unsigned>() == L"test_component.Unsigned"sv);

    REQUIRE(((Unsigned::First | Unsigned::Second | Unsigned::Third) & Unsigned::Second) == Unsigned::Second);

    REQUIRE(static_cast<int32_t>(Signed::First) == -1);
    REQUIRE(static_cast<int32_t>(Signed::Second) == 0);
    REQUIRE(static_cast<int32_t>(Signed::Third) == 1);

    REQUIRE(static_cast<uint32_t>(Unsigned::First) == 0);
    REQUIRE(static_cast<uint32_t>(Unsigned::Second) == 1);
    REQUIRE(static_cast<uint32_t>(Unsigned::Third) == 2);
}
