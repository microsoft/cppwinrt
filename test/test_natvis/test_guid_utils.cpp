#include "pch.h"
#include "natvis_type_helpers.h"

using namespace natvis_helpers;

TEST_CASE("format_guid produces correct string", "[guid]")
{
    // IInspectable GUID: AF86E2E0-B12D-4C6A-9C5A-D7AA65101E90
    winrt::guid iinspectable{ 0xAF86E2E0, 0xB12D, 0x4C6A, { 0x9C, 0x5A, 0xD7, 0xAA, 0x65, 0x10, 0x1E, 0x90 } };
    auto result = format_guid(iinspectable);
    REQUIRE(result == L"AF86E2E0-B12D-4C6A-9C5A-D7AA65101E90");
}

TEST_CASE("format_guid uppercase hex", "[guid]")
{
    winrt::guid g{ 0x0000abcd, 0x00ef, 0x0012, { 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11 } };
    auto result = format_guid(g);
    // Verify uppercase hex output
    REQUIRE(result == L"0000ABCD-00EF-0012-3456-789ABCDEF011");
}

TEST_CASE("format_guid zero guid", "[guid]")
{
    winrt::guid zero{};
    auto result = format_guid(zero);
    REQUIRE(result == L"00000000-0000-0000-0000-000000000000");
}

TEST_CASE("format_guid known IStringable GUID", "[guid]")
{
    // IStringable: 96369F54-8EB6-48F0-ABCE-C1B211E627C3
    winrt::guid istringable{ 0x96369F54, 0x8EB6, 0x48F0, { 0xAB, 0xCE, 0xC1, 0xB2, 0x11, 0xE6, 0x27, 0xC3 } };
    auto result = format_guid(istringable);
    REQUIRE(result == L"96369F54-8EB6-48F0-ABCE-C1B211E627C3");
}

TEST_CASE("format_guid deterministic", "[guid]")
{
    winrt::guid g{ 0x12345678, 0x9ABC, 0xDEF0, { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88 } };
    auto r1 = format_guid(g);
    auto r2 = format_guid(g);
    REQUIRE(r1 == r2);
}
