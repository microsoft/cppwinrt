// Intentionally not using pch...
#include "catch.hpp"

// Only need winrt/Windows.Foundation.h for IAsyncXxx coroutine support
#include "winrt/Windows.Foundation.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    IAsyncOperation<hstring> Async()
    {
        co_return L"hello";
    }
}

TEST_CASE("coro_foundation")
{
    REQUIRE(Async().get() == L"hello");
}
