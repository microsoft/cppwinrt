#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    IAsyncAction Async()
    {
        // This is just a simple way of testing all of the ABI and projection
        // error propagation in one go.
        throw hresult_class_not_registered(L"test message");
    }
} // namespace
TEST_CASE("hresult_class_not_registered")
{
    REQUIRE(hresult_class_not_registered().message() == L"Class not registered");
    REQUIRE(hresult_class_not_registered().code() == REGDB_E_CLASSNOTREG);

    try
    {
        Async().get();
        FAIL("Previous line should throw");
    }
    catch (hresult_class_not_registered const& e)
    {
        REQUIRE(e.message() == L"test message");
        REQUIRE(e.code() == REGDB_E_CLASSNOTREG);
    }
}
