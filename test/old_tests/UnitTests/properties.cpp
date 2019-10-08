#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Graphics::Effects;

// Validates that exceptions can be raise through properties.

namespace
{
    struct properties : implements<properties, IGraphicsEffect>
    {
        hstring Name()
        {
            if (m_value == L"throw")
            {
                throw hresult_invalid_argument(L"throw");
            }

            return m_value;
        }

        void Name(hstring const& value)
        {
            m_value = value;

            if (m_value == L"throw")
            {
                throw hresult_invalid_argument(L"throw");
            }
        }

        hstring m_value;
    };
}

TEST_CASE("properties")
{
    IGraphicsEffect e = make<properties>();

    REQUIRE(e.Name() == L"");
    e.Name(L"value");
    REQUIRE(e.Name() == L"value");

    REQUIRE_THROWS_AS(e.Name(L"throw"), hresult_invalid_argument);
    REQUIRE_THROWS_AS(e.Name(), hresult_invalid_argument);
}
