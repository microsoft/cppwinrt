#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("char16_t")
{
    IReference<char16_t> ref = L'Q';

    Windows::Foundation::IInspectable in = ref;

    IReference<char16_t> ref2 = in.as<IReference<char16_t>>();

    char16_t w = ref2.Value();

    REQUIRE(w == L'Q');
}
