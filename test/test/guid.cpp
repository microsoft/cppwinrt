#include "pch.h"

TEST_CASE("guid")
{
    constexpr winrt::guid expected{ 0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } };

    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data1 == expected.Data1);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data2 == expected.Data2);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data3 == expected.Data3);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[0] == expected.Data4[0]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[1] == expected.Data4[1]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[2] == expected.Data4[2]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[3] == expected.Data4[3]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[4] == expected.Data4[4]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[5] == expected.Data4[5]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[6] == expected.Data4[6]);
    STATIC_REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff").Data4[7] == expected.Data4[7]);

    REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff") == expected);
    REQUIRE(winrt::guid({ "{00112233-4455-6677-8899-aabbccddeeff}" + 1, 36 }) == expected);

    REQUIRE_THROWS_AS(winrt::guid(""), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("same length string that's not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("too long string that's also not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("00112233-4455-6677-8899-aabbccddeeff with extra"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("{00112233-4455-6677-8899-aabbccddeeff}"), std::invalid_argument);
}