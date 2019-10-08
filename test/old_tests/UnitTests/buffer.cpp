#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Storage::Streams;

TEST_CASE("buffer")
{
    Buffer buffer{ 3 };
    uint8_t* ptr = buffer.data();
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    REQUIRE(ptr != nullptr);
    REQUIRE(buffer.Capacity() == 3);
    REQUIRE(buffer.Length() == 0);
    buffer.Length(3);
    REQUIRE(buffer.Length() == 3);
}
