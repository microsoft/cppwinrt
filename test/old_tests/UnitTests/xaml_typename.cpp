#include "pch.h"
#include "catch.hpp"

#include "string_view_compare.h"

using namespace winrt;
using namespace Windows::UI::Xaml::Interop;
using namespace std::string_view_literals;

static_assert(impl::xaml_typename_kind<bool>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<char16_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<uint8_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<int8_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<uint16_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<int16_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<uint32_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<int32_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<uint64_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<int64_t>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<float>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<double>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<hstring>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<guid>::value == Windows::UI::Xaml::Interop::TypeKind::Primitive);
static_assert(impl::xaml_typename_kind<Windows::Foundation::DateTime>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);
static_assert(impl::xaml_typename_kind<Windows::Foundation::TimeSpan>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);
static_assert(impl::xaml_typename_kind<Windows::Foundation::Point>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);
static_assert(impl::xaml_typename_kind<Windows::Foundation::Size>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);
static_assert(impl::xaml_typename_kind<Windows::Foundation::Rect>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);
static_assert(impl::xaml_typename_kind<Windows::Foundation::IInspectable>::value == Windows::UI::Xaml::Interop::TypeKind::Metadata);

namespace
{
    inline bool equals(TypeName const& lhs, TypeName const& rhs) noexcept
    {
        return std::tie(lhs.Name, lhs.Kind) == std::tie(rhs.Name, rhs.Kind);
    }
}

TEST_CASE("xaml_typename")
{
    REQUIRE(equals(TypeName{ hstring(L"Boolean"sv), TypeKind::Primitive }, xaml_typename<bool>()));
    REQUIRE(equals(TypeName{ hstring(L"Char16"sv), TypeKind::Primitive }, xaml_typename<char16_t>()));
    REQUIRE(equals(TypeName{ hstring(L"UInt8"sv), TypeKind::Primitive }, xaml_typename<uint8_t>()));
    REQUIRE(equals(TypeName{ hstring(L"Int8"sv), TypeKind::Primitive }, xaml_typename<int8_t>()));
    REQUIRE(equals(TypeName{ hstring(L"UInt16"sv), TypeKind::Primitive }, xaml_typename<uint16_t>()));
    REQUIRE(equals(TypeName{ hstring(L"Int16"sv), TypeKind::Primitive }, xaml_typename<int16_t>()));
    REQUIRE(equals(TypeName{ hstring(L"UInt32"sv), TypeKind::Primitive }, xaml_typename<uint32_t>()));
    REQUIRE(equals(TypeName{ hstring(L"Int32"sv), TypeKind::Primitive }, xaml_typename<int32_t>()));
    REQUIRE(equals(TypeName{ hstring(L"UInt64"sv), TypeKind::Primitive }, xaml_typename<uint64_t>()));
    REQUIRE(equals(TypeName{ hstring(L"Int64"sv), TypeKind::Primitive }, xaml_typename<int64_t>()));
    REQUIRE(equals(TypeName{ hstring(L"Single"sv), TypeKind::Primitive }, xaml_typename<float>()));
    REQUIRE(equals(TypeName{ hstring(L"Double"sv), TypeKind::Primitive }, xaml_typename<double>()));
    REQUIRE(equals(TypeName{ hstring(L"String"sv), TypeKind::Primitive }, xaml_typename<hstring>()));
    REQUIRE(equals(TypeName{ hstring(L"Guid"sv), TypeKind::Primitive }, xaml_typename<guid>()));
    REQUIRE(equals(TypeName{ hstring(L"DateTime"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::DateTime>()));
    REQUIRE(equals(TypeName{ hstring(L"TimeSpan"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::TimeSpan>()));
    REQUIRE(equals(TypeName{ hstring(L"Point"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::Point>()));
    REQUIRE(equals(TypeName{ hstring(L"Size"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::Size>()));
    REQUIRE(equals(TypeName{ hstring(L"Rect"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::Rect>()));
    REQUIRE(equals(TypeName{ hstring(L"Object"sv), TypeKind::Metadata }, xaml_typename<Windows::Foundation::IInspectable>()));
}
