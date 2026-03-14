#include "pch.h"
#include "winrt/test_component.h"

// Simple compile-only test to validate overloads coming from overridable interfaces compile.

using namespace winrt;
using namespace test_component;

struct DerivedClass : OverloadClassT<DerivedClass>
{
    void Foo()
    {
        // make sure we can actually call the overloads (no ambiguous call errors)
        Overload();
        Overload(1);
        Overload(1, 2);
        Overload(1, 2, 3);
    }
};