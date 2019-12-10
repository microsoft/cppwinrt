#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("reference_enum")
{
    {
        auto b = box_value(test_component::Signed::Second);
        auto r = b.as<IReference<test_component::Signed>>();
        REQUIRE(r.Type() == PropertyType::Int32);
        REQUIRE(r.Value() == test_component::Signed::Second);
        REQUIRE(r.GetInt32() == static_cast<int32_t>(test_component::Signed::Second));
        REQUIRE(r.GetUInt32() == static_cast<int32_t>(test_component::Signed::Second));
    }
    {
        auto b = box_value(test_component::Unsigned::Second);
        auto r = b.as<IReference<test_component::Unsigned>>();
        REQUIRE(r.Type() == PropertyType::UInt32);
        REQUIRE(r.Value() == test_component::Unsigned::Second);
        REQUIRE(r.GetInt32() == static_cast<uint32_t>(test_component::Unsigned::Second));
        REQUIRE(r.GetUInt32() == static_cast<uint32_t>(test_component::Unsigned::Second));
    }
}