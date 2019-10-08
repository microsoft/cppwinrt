#include "pch.h"
#include "winrt/test_component_fast.h"

using namespace winrt;
using namespace test_component_fast;

TEST_CASE("Simple")
{
    impl::get_diagnostics_info().detach();

    Simple c;
    REQUIRE(c.Method1() == L"Method1");
    REQUIRE(c.Method2() == L"Method2");
    REQUIRE(c.Method3() == L"Method3");

    auto info = impl::get_diagnostics_info().get();

    REQUIRE(info.factories.size() == 1);
    REQUIRE(info.factories[name_of<Simple>()].is_agile);
    REQUIRE(info.factories[name_of<Simple>()].requests == 1);

    REQUIRE(info.queries.size() == 4);
    REQUIRE(info.queries[L"IAgileObject"] == 1);
    REQUIRE(info.queries[name_of<Simple>()] == 1);
    REQUIRE(info.queries[name_of<ISimple2>()] == 1);
    REQUIRE(info.queries[name_of<ISimple3>()] == 1);
}
