#include "pch.h"
#include "winrt/test_component.h"

// Simple compile-only test to validate that static methods may be compiled with -optimize.
// Previously this wouldn't compile because of return type deduction colliding with -optimize
// and its use of the linker to support uniform construction.

using namespace winrt;
using namespace test_component;

void test_auto()
{
    Class::StaticTest();

    Class::StaticTestReturn();

    [[maybe_unused]] auto discarded = Class::StaticProperty();
}