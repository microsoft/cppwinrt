#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("memory_buffer")
{
    MemoryBuffer buffer{ 3 };
    auto reference = buffer.CreateReference();
    uint8_t* ptr = reference.data();
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    REQUIRE(ptr != nullptr);
    REQUIRE(reference.Capacity() == 3);
}
