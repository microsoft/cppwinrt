// Test consuming a custom WinRT component through a module.
// The component projection header is included AFTER importing winrt,
// which tests the interaction between module-imported base types and
// #include-based component projection headers.
// WINRT_MODULE (defined project-wide) causes namespace headers to use
// per-namespace WINRT_MODULE_NS_* guards so platform deps are skipped
// while component deps are included normally.
#include "catch.hpp"
#include <winerror.h>

import std;
import winrt;

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
