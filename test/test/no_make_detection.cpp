// This test validates that defining WINRT_NO_MAKE_DETECTION actually
// allows an implementation to be final and have a private destructor.
// This is *not* recommended as there are no safeguards for direct and
// invalid allocations, but is provided for compatibility.

#define WINRT_NO_MAKE_DETECTION
#include "catch.hpp"
#include "winrt/Windows.Foundation.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct Stringable final : implements<Stringable, IStringable>
    {
        hstring ToString()
        {
            return L"Stringable";
        }

        inline static bool Destroyed{};

    private:

        ~Stringable()
        {
            Destroyed = true;
        }
    };
}

TEST_CASE("no_make_detection")
{
    {
        IStringable stringable{ (new Stringable())->get_abi<IStringable>(), take_ownership_from_abi };
        REQUIRE(!Stringable::Destroyed);
        stringable = nullptr;
        REQUIRE(Stringable::Destroyed);
    }
    {
        Stringable::Destroyed = false;
        IStringable stringable = make<Stringable>();
        REQUIRE(!Stringable::Destroyed);
        stringable = nullptr;
        REQUIRE(Stringable::Destroyed);
    }
}
