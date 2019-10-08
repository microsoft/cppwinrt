#include "pch.h"
#include "winrt/test_component.Parent.One.Two.Three.h"

using namespace winrt::test_component;

TEST_CASE("parent_includes")
{
    // Including "...Three.h" should include all (available) ancestors, skipping 
    // any that are empty. In this case, "Three" and "Parent" are not empty while
    // the intermediate namespaces are empty.

    Parent::One::Two::Three::ThreeStruct three;
    three.Value = 0;

    Parent::ParentStruct parent;
    parent.Value = 0;
}
