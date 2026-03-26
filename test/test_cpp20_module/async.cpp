// catch.hpp must come before 'import winrt' to avoid redefinition of std types.
// The catch header pulls in standard library headers textually; placing it first
// ensures those headers are already included before the module import.
#include "catch.hpp"
#include <coroutine>

import winrt;

using namespace winrt;
using namespace winrt::Windows::Foundation;

// Verify coroutines work through the module by exercising IAsyncOperation
static IAsyncOperation<int> AddAsync(int a, int b)
{
    co_return a + b;
}

static IAsyncAction DoNothingAsync()
{
    co_return;
}

TEST_CASE("module_async_operation")
{
    auto result = AddAsync(3, 4).get();
    REQUIRE(result == 7);
}

TEST_CASE("module_async_action")
{
    DoNothingAsync().get();
}

TEST_CASE("module_async_await")
{
    auto op = AddAsync(10, 20);
    auto result = op.get();
    REQUIRE(result == 30);
}
