#include "winrt/Windows.Foundation.h"
#include "catch.hpp"

#ifdef __IUnknown_INTERFACE_DEFINED__
#error __IUnknown_INTERFACE_DEFINED__ must not be defined for this test.
#endif

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    // This is a variation of conditional_implements.cpp that builds without the Windows headers
    // and validates that the conditional logic still works when __IUnknown_INTERFACE_DEFINED__ is not defined
    // is_interface is defined more simply.

    struct Base : implements<Base, IActivationFactory>
    {
        auto ActivateInstance()
        {
            return nullptr;
        }
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

TEST_CASE("conditional_implements_pure")
{
    {
        auto s = make<Conditional<true, true>>();
        REQUIRE(s.try_as<IActivationFactory>());
        REQUIRE(s.try_as<IInspectable>());
        REQUIRE(s.try_as<IStringable>());
        REQUIRE(s.try_as<IClosable>());

        auto g = get_interfaces(s);
        REQUIRE(g.size() == 3);
        REQUIRE(g[0] == guid_of<IActivationFactory>());
        REQUIRE(g[1] == guid_of<IStringable>());
        REQUIRE(g[2] == guid_of<IClosable>());
    }

    {
        auto s = make<Conditional<true, false>>();
        REQUIRE(s.try_as<IActivationFactory>());
        REQUIRE(s.try_as<IInspectable>());
        REQUIRE(s.try_as<IStringable>());
        REQUIRE(!s.try_as<IClosable>());

        auto g = get_interfaces(s);
        REQUIRE(g.size() == 2);
        REQUIRE(g[0] == guid_of<IActivationFactory>());
        REQUIRE(g[1] == guid_of<IStringable>());
    }

    {
        auto s = make<Conditional<false, true>>();
        REQUIRE(s.try_as<IActivationFactory>());
        REQUIRE(s.try_as<IInspectable>());
        REQUIRE(!s.try_as<IStringable>());
        REQUIRE(s.try_as<IClosable>());

        auto g = get_interfaces(s);
        REQUIRE(g.size() == 2);
        REQUIRE(g[0] == guid_of<IActivationFactory>());
        REQUIRE(g[1] == guid_of<IClosable>());
    }

    {
        auto s = make<Conditional<false, false>>();
        REQUIRE(s.try_as<IActivationFactory>());
        REQUIRE(s.try_as<IInspectable>());
        REQUIRE(!s.try_as<IStringable>());
        REQUIRE(!s.try_as<IClosable>());

        auto g = get_interfaces(s);
        REQUIRE(g.size() == 1);
        REQUIRE(g[0] == guid_of<IActivationFactory>());
    }
}
