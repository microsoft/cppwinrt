// Test consuming a custom WinRT component through a module.
// The component projection header is included AFTER importing winrt,
// which tests the interaction between module-imported base types and
// #include-based component projection headers.
#include "catch.hpp"
#include <winerror.h>

import std;
import winrt;

// When consuming component headers alongside 'import winrt;', define
// WINRT_IMPL_SKIP_INCLUDES to skip #include directives for base.h and SDK
// headers that are already available from the module.
#define WINRT_IMPL_SKIP_INCLUDES
#include "winrt/test_component_module.h"

using namespace winrt;
using namespace winrt::test_component_module;

TEST_CASE("module_component_create")
{
    auto toaster = Toaster();
    REQUIRE(toaster.Name() == L"Unnamed");
}

TEST_CASE("module_component_create_with_name")
{
    auto toaster = Toaster(L"My Toaster");
    REQUIRE(toaster.Name() == L"My Toaster");
}

TEST_CASE("module_component_property")
{
    auto toaster = Toaster();
    toaster.Name(L"Updated");
    REQUIRE(toaster.Name() == L"Updated");
}

TEST_CASE("module_component_static")
{
    auto toaster = Toaster::CreateDefault();
    REQUIRE(toaster.Name() == L"Default Toaster");
}

TEST_CASE("module_component_async")
{
    auto toaster = Toaster();
    toaster.ToastAsync().get();
}
