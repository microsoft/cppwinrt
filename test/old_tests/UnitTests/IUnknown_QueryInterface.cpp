#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

//
// These tests cover the behaviour of the 'as' and 'try_as' members that provide the
// projection's access to IUnknown's QueryInterface virtual function. Both the 
// projected IUnknown (value type) and the com_ptr class template provide both 'as' 
// and 'try_as' and while those types are different, these two methods should behave
// the same way.
//

TEST_CASE("IUnknown::as,try_as")
{
    Uri uri(L"http://host/path");

    {
        IUriRuntimeClass p = uri.as<IUriRuntimeClass>();
        REQUIRE(p);

        IStringable s = uri.as<IStringable>();
        REQUIRE(s);

        REQUIRE_THROWS_AS(uri.as<IClosable>(), hresult_no_interface);

        IClosable c = uri.try_as<IClosable>();
        REQUIRE(!c);
    }
}
