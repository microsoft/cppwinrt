#include "pch.h"

#if __has_include(<windowsnumerics.impl.h>)

import std;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Numerics;

//
// These tests exercise the SDK numerics types (float2, float3, etc.) from
// <windowsnumerics.impl.h>. These are exported by winrt_numerics and
// transitively available from winrt_base (and thus any namespace module).
// The Point/Size ↔ float2 conversions and name_v/category specializations
// are compiled in winrt_base.
//

using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;

// --- SDK math types (from winrt_numerics, re-exported via winrt_base) ---

TEST_CASE("module_numerics_float2")
{
    float2 a{ 1.0f, 2.0f };
    float2 b{ 3.0f, 4.0f };

    auto c = a + b;
    REQUIRE(c.x == 4.0f);
    REQUIRE(c.y == 6.0f);

    REQUIRE(length(a) > 0.0f);
}

TEST_CASE("module_numerics_float3")
{
    float3 v{ 1.0f, 0.0f, 0.0f };
    float3 up{ 0.0f, 1.0f, 0.0f };

    REQUIRE(dot(v, up) == 0.0f);
    REQUIRE(cross(v, up).z != 0.0f);
}

TEST_CASE("module_numerics_float4x4")
{
    auto identity = float4x4::identity();
    REQUIRE(identity.m11 == 1.0f);
    REQUIRE(identity.m12 == 0.0f);

    auto t = make_float4x4_translation({ 10.0f, 20.0f, 30.0f });
    REQUIRE(t.m41 == 10.0f);
}

TEST_CASE("module_numerics_quaternion")
{
    auto identity = quaternion::identity();
    REQUIRE(identity.w == 1.0f);
    REQUIRE(length(identity) == 1.0f);
}

// --- Point/Size ↔ float2 conversions (compiled in winrt_base) ---

TEST_CASE("module_numerics_point_from_float2")
{
    Point p(float2{ 3.0f, 7.0f });
    REQUIRE(p.X == 3.0f);
    REQUIRE(p.Y == 7.0f);
}

TEST_CASE("module_numerics_point_to_float2")
{
    float2 v = Point{ 10.0f, 20.0f };
    REQUIRE(v.x == 10.0f);
    REQUIRE(v.y == 20.0f);
}

TEST_CASE("module_numerics_size_from_float2")
{
    Size s(float2{ 100.0f, 200.0f });
    REQUIRE(s.Width == 100.0f);
    REQUIRE(s.Height == 200.0f);
}

TEST_CASE("module_numerics_size_to_float2")
{
    float2 v = Size{ 640.0f, 480.0f };
    REQUIRE(v.x == 640.0f);
    REQUIRE(v.y == 480.0f);
}

// --- WinRT projection metadata (name_v/category, compiled in winrt_base) ---
// Verify that the projection machinery produces correct IReference<T> GUIDs
// for numerics types. This exercises name_v, category, and the SHA-1 based
// GUID computation across module boundaries, at compile time.

namespace
{
    constexpr bool equal(guid const& left, guid const& right) noexcept
    {
        return left.Data1 == right.Data1 &&
            left.Data2 == right.Data2 &&
            left.Data3 == right.Data3 &&
            left.Data4[0] == right.Data4[0] &&
            left.Data4[1] == right.Data4[1] &&
            left.Data4[2] == right.Data4[2] &&
            left.Data4[3] == right.Data4[3] &&
            left.Data4[4] == right.Data4[4] &&
            left.Data4[5] == right.Data4[5] &&
            left.Data4[6] == right.Data4[6] &&
            left.Data4[7] == right.Data4[7];
    }
}

#define REQUIRE_EQUAL_GUID(left, ...) STATIC_REQUIRE(equal(guid(left), guid_of<__VA_ARGS__>()));

TEST_CASE("module_numerics_ireference_guids")
{
    REQUIRE_EQUAL_GUID("48F6A69E-8465-57AE-9400-9764087F65AD", IReference<float2>);
    REQUIRE_EQUAL_GUID("1EE770FF-C954-59CA-A754-6199A9BE282C", IReference<float3>);
    REQUIRE_EQUAL_GUID("A5E843C9-ED20-5339-8F8D-9FE404CF3654", IReference<float4>);
    REQUIRE_EQUAL_GUID("76358CFD-2CBD-525B-A49E-90EE18247B71", IReference<float3x2>);
    REQUIRE_EQUAL_GUID("DACBFFDC-68EF-5FD0-B657-782D0AC9807E", IReference<float4x4>);
    REQUIRE_EQUAL_GUID("B27004BB-C014-5DCE-9A21-799C5A3C1461", IReference<quaternion>);
    REQUIRE_EQUAL_GUID("46D542A1-52F7-58E7-ACFC-9A6D364DA022", IReference<plane>);
}

#undef REQUIRE_EQUAL_GUID

#endif // __has_include(<windowsnumerics.impl.h>)
