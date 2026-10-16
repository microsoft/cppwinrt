#include "pch.h"

using namespace winrt;
using namespace std::literals;

#if defined(__cpp_nontype_template_args) && __cpp_nontype_template_args >= 201911L

using namespace winrt::literals;

namespace
{
    // Exercises the hstring_reference -> param::hstring conversion that projected
    // setters rely on, and duplicates into an owning hstring on the way out.
    winrt::hstring copy_via_param(winrt::param::hstring const& value)
    {
        winrt::hstring const& as_hstring = value;
        return as_hstring;
    }
}

TEST_CASE("hstring_literal")
{
    // The literal is a genuine constant expression: the fast-pass header is built at
    // compile time, so an hstring_reference can be constructed in a constexpr context.
    {
        constexpr winrt::hstring_reference lit = L"kittens"_hs;
        winrt::hstring const& value = lit;
        REQUIRE(value == L"kittens"sv);
        REQUIRE(value.size() == 7);
    }

    // Content and length match the literal.
    {
        winrt::hstring_reference const lit = L"kittens"_hs;
        winrt::hstring const& value = lit;
        REQUIRE(value == L"kittens"sv);
        REQUIRE(value.size() == 7);
        REQUIRE(wcslen(value.c_str()) == 7);
    }

    // Built as a fast-pass reference string (no heap allocation).
    {
        winrt::hstring_reference const lit = L"puppies"_hs;
        auto const header = static_cast<winrt::impl::hstring_header*>(winrt::get_abi(lit));
        REQUIRE(header != nullptr);
        REQUIRE((header->flags & winrt::impl::hstring_reference_flag) != 0);
        REQUIRE(header->length == 7);
    }

    // Empty literal projects as the empty (null) HSTRING.
    {
        winrt::hstring_reference const lit = L""_hs;
        winrt::hstring const& value = lit;
        REQUIRE(value.empty());
        REQUIRE(value.size() == 0);
        REQUIRE(winrt::get_abi(value) == nullptr);
    }

    // Binds to a projected setter parameter in a single conversion, and copying
    // into an owning hstring duplicates correctly.
    {
        winrt::hstring const copied = copy_via_param(L"waffles"_hs);
        REQUIRE(copied == L"waffles"sv);
        REQUIRE(copied.size() == 7);
    }
}

#endif
