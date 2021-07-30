#include "pch.h"

TEST_CASE("guid")
{
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff") == winrt::guid(0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff }));
    REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff") == winrt::guid(0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff }));
    constexpr char* null = nullptr;
    REQUIRE_THROWS_AS(winrt::guid(null), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid(""), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("same length string that's not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("too long string that's also not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("00112233-4455-6677-8899-aabbccddeeff with extra"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("{00112233-4455-6677-8899-aabbccddeeff}"), std::invalid_argument);
}