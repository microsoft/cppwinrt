#include "pch.h"
#include "catch.hpp"

#pragma warning(disable:4471) // a forward declaration of an unscoped enumeration must have an underlying type
#include <windows.foundation.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::Web::Http::Headers;

namespace
{
    // I used midlrt to generate IReference<T> pinterfaces for the Numerics types and "manually" obtain their GUIDs.
    constexpr guid ireference_matrix3x2 { 0x76358cfd, 0x2cbd, 0x525b,{ 0xa4, 0x9e, 0x90, 0xee, 0x18, 0x24, 0x7b, 0x71 } };
    constexpr guid ireference_matrix4x4 { 0xdacbffdc, 0x68ef, 0x5fd0,{ 0xb6, 0x57, 0x78, 0x2d, 0x0a, 0xc9, 0x80, 0x7e } };
    constexpr guid ireference_plane     { 0x46d542a1, 0x52f7, 0x58e7,{ 0xac, 0xfc, 0x9a, 0x6d, 0x36, 0x4d, 0xa0, 0x22 } };
    constexpr guid ireference_quaternion{ 0xb27004bb, 0xc014, 0x5dce,{ 0x9a, 0x21, 0x79, 0x9c, 0x5a, 0x3c, 0x14, 0x61 } };
    constexpr guid ireference_vector2   { 0x48f6a69e, 0x8465, 0x57ae,{ 0x94, 0x00, 0x97, 0x64, 0x08, 0x7f, 0x65, 0xad } };
    constexpr guid ireference_vector3   { 0x1ee770ff, 0xc954, 0x59ca,{ 0xa7, 0x54, 0x61, 0x99, 0xa9, 0xbe, 0x28, 0x2c } };
    constexpr guid ireference_vector4   { 0xa5e843c9, 0xed20, 0x5339,{ 0x8f, 0x8d, 0x9f, 0xe4, 0x04, 0xcf, 0x36, 0x54 } };
}

TEST_CASE("IReference guids")
{
    REQUIRE(guid_of<IReference<Numerics::float2>>() == ireference_vector2);
    REQUIRE(guid_of<IReference<Numerics::float3>>() == ireference_vector3);
    REQUIRE(guid_of<IReference<Numerics::float4>>() == ireference_vector4);
    REQUIRE(guid_of<IReference<Numerics::float3x2>>() == ireference_matrix3x2);
    REQUIRE(guid_of<IReference<Numerics::float4x4>>() == ireference_matrix4x4);
    REQUIRE(guid_of<IReference<Numerics::plane>>() == ireference_plane);
    REQUIRE(guid_of<IReference<Numerics::quaternion>>() == ireference_quaternion);

    REQUIRE(guid_of<IReference<bool>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<bool>)));
    REQUIRE(guid_of<IReference<uint8_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<uint8_t>)));
    REQUIRE(guid_of<IReference<int16_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<int16_t>)));
    REQUIRE(guid_of<IReference<uint32_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<uint32_t>)));
    REQUIRE(guid_of<IReference<int32_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<int32_t>)));
    REQUIRE(guid_of<IReference<uint64_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<uint64_t>)));
    REQUIRE(guid_of<IReference<int64_t>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<int64_t>)));
    REQUIRE(guid_of<IReference<float>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<float>)));
    REQUIRE(guid_of<IReference<double>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<double>)));
    REQUIRE(guid_of<IReference<guid>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<GUID>)));

    REQUIRE(guid_of<IReference<winrt::Windows::Foundation::Point>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<::ABI::Windows::Foundation::Point>)));
    REQUIRE(guid_of<IReference<winrt::Windows::Foundation::Rect>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<::ABI::Windows::Foundation::Rect>)));

    REQUIRE(guid_of<IReference<winrt::Windows::Foundation::DateTime>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<::ABI::Windows::Foundation::DateTime>)));
    REQUIRE(guid_of<IReference<winrt::Windows::Foundation::TimeSpan>>() == guid(__uuidof(::ABI::Windows::Foundation::IReference<::ABI::Windows::Foundation::TimeSpan>)));
}

TEST_CASE("IReference, constructor and getter")
{
    uint64_t val_uint64 = 100;
    uint64_t const & ref_uint64 = val_uint64;
    IReference<uint64_t> obj_uint64(ref_uint64);
    REQUIRE(obj_uint64.Value() == 100);

    hstring val_hstring = L"Everything is awesome";
    IReference<hstring> obj_hstring(val_hstring);
    REQUIRE(obj_hstring.Value() == L"Everything is awesome");

    // Test a struct type that has both an enum and hstring member
    TypeName val_xaml_struct = { L"Super cool type", TypeKind::Primitive };
    IReference<TypeName> obj_xaml_struct(val_xaml_struct);
    TypeName fetched_xaml_struct = obj_xaml_struct.Value();
    REQUIRE(fetched_xaml_struct.Kind == TypeKind::Primitive);
    REQUIRE(fetched_xaml_struct.Name == L"Super cool type");
}

TEST_CASE("IReference, set WinRT runtime class property")
{
    HttpContentDispositionHeaderValue value(L"inline");
    value.Size(200);
}