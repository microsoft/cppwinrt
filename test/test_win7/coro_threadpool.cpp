// Intentionally not using pch...
#include "catch.hpp"

// Only need winrt/base.h for coroutine thread pool support.
#include "winrt/base.h"

using namespace winrt;

namespace
{
    fire_and_forget Async()
    {
        co_await resume_background();
    }
}

TEST_CASE("coro_base")
{
    Async();
}
