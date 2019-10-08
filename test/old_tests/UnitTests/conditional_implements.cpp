#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    // A contrived example that conditionally implements various interfaces
    // and has a bunch of duplicate types in the implements variadic parameter
    // pack to show that implements can handle this if needed.

    struct Base : implements<Base, ::IAgileObject, void, non_agile>
    {
    };

    template <bool Stringable, bool Closable>
    struct Conditional : implements<Conditional<Stringable, Closable>,
        void,
        Base,
        std::conditional_t<Stringable, IStringable, void>,
        std::conditional_t<Closable, IClosable, void>,
        void>
    {
        hstring ToString()
        {
            return L"ToString";
        }

        void Close()
        {
        }
    };
}

TEST_CASE("conditional_implements")
{
    {
        auto s = make<Conditional<true, true>>();
        REQUIRE(s.try_as<::IAgileObject>());
        REQUIRE(!s.try_as<::IMarshal>());
        REQUIRE(s.try_as<IStringable>());
        REQUIRE(s.try_as<IClosable>());
    }

    {
        auto s = make<Conditional<true, false>>();
        REQUIRE(s.try_as<::IAgileObject>());
        REQUIRE(!s.try_as<::IMarshal>());
        REQUIRE(s.try_as<IStringable>());
        REQUIRE(!s.try_as<IClosable>());
    }

    {
        auto s = make<Conditional<false, true>>();
        REQUIRE(s.try_as<::IAgileObject>());
        REQUIRE(!s.try_as<::IMarshal>());
        REQUIRE(!s.try_as<IStringable>());
        REQUIRE(s.try_as<IClosable>());
    }

    {
        auto s = make<Conditional<false, false>>();
        REQUIRE(s.try_as<::IAgileObject>());
        REQUIRE(!s.try_as<::IMarshal>());
        REQUIRE(!s.try_as<IStringable>());
        REQUIRE(!s.try_as<IClosable>());
    }
}
