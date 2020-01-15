#include "pch.h"
#include "winrt/test_component.Structs.Nested.h"
#include "winrt/test_component_no_pch.Peer2.h"

using namespace winrt;

TEST_CASE("structs")
{
    test_component::Structs::Nested::Outer outer{};
    outer.Depends.InnerValue = 1;
    outer.OuterValue = 2;

    test_component_no_pch::Peer2::B depends{};
    depends.First.Value = 1;

    test_component::Structs::All all{};
    all.H = {};
}
