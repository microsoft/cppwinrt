#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation::Numerics;

TEST_CASE("numerics")
{
#if __has_include(<windowsnumerics.impl.h>)
    // Basic smoke test exercising SIMD intrinsics used by numerics.

    auto one = float4::one();

    REQUIRE(one * one == one);
#endif
}
