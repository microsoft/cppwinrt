#include "pch.h"

#define STATIC_REQUIRE_GUID_EQUAL(left, right) \
    STATIC_REQUIRE(left.Data1 == right.Data1); \
    STATIC_REQUIRE(left.Data2 == right.Data2); \
    STATIC_REQUIRE(left.Data3 == right.Data3); \
    STATIC_REQUIRE(left.Data4[0] == right.Data4[0]); \
    STATIC_REQUIRE(left.Data4[1] == right.Data4[1]); \
    STATIC_REQUIRE(left.Data4[2] == right.Data4[2]); \
    STATIC_REQUIRE(left.Data4[3] == right.Data4[3]); \
    STATIC_REQUIRE(left.Data4[4] == right.Data4[4]); \
    STATIC_REQUIRE(left.Data4[5] == right.Data4[5]); \
    STATIC_REQUIRE(left.Data4[6] == right.Data4[6]); \
    STATIC_REQUIRE(left.Data4[7] == right.Data4[7]);

TEST_CASE("guid")
{
    constexpr winrt::guid expected{ 0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } };

    STATIC_REQUIRE_GUID_EQUAL(winrt::guid("00112233-4455-6677-8899-aabbccddeeff"), expected);

    REQUIRE(winrt::guid("00112233-4455-6677-8899-aabbccddeeff") == expected);
    REQUIRE(winrt::guid({ &"{00112233-4455-6677-8899-aabbccddeeff}"[1], 36 }) == expected);
    REQUIRE(winrt::guid("{00112233-4455-6677-8899-aabbccddeeff}") == expected);
    REQUIRE(winrt::guid("(00112233-4455-6677-8899-aabbccddeeff)") == expected);

    REQUIRE_THROWS_AS(winrt::guid(""), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("same length string that's not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("too long string that's also not a guid"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("00112233-4455-6677-8899-aabbccddeeff with extra"), std::invalid_argument);
    REQUIRE_THROWS_AS(winrt::guid("xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx"), std::invalid_argument);

    // Verify that you can constexpr-construct a guid from a GUID.
    constexpr winrt::guid from_abi_guid =
        GUID{ 0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } };
    STATIC_REQUIRE_GUID_EQUAL(from_abi_guid, expected);
}
