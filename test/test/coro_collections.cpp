// Intentionally not using pch...
#include "catch.hpp"

// Only need winrt/Windows.Foundation.Collections.h for IIterable support
#include "winrt/Windows.Foundation.Collections.h"

using namespace winrt;
using namespace Windows::Foundation::Collections;

namespace
{
    IIterable<hstring> Generator()
    {
        co_yield L"Hello";
        co_yield L"World!";
    }
}

TEST_CASE("coro_collections")
{
    auto iterator = Generator().First();
    REQUIRE(iterator.HasCurrent());
    REQUIRE(iterator.Current() == L"Hello");

    REQUIRE(iterator.MoveNext());
    REQUIRE(iterator.HasCurrent());
    REQUIRE(iterator.Current() == L"World!");

    REQUIRE(!iterator.MoveNext());
    REQUIRE(!iterator.HasCurrent());
}

TEST_CASE("coro_collections_first")
{
    auto iterator = Generator().First();

    REQUIRE_THROWS_AS(Generator().First(), hresult_changed_state);
}