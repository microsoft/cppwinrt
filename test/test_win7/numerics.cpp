#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation::Numerics;

TEST_CASE("numerics")
{
    // Basic smoke test exercising SIMD intrinsics used by numerics.

    auto one = float4::one();

    REQUIRE(one * one == one);
}
