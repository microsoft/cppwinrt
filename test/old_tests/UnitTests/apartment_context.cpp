#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    IAsyncAction Async()
    {
        apartment_context context;

        co_await context;
    }
}

TEST_CASE("apartment_context coverage")
{
    Async().get();
}
