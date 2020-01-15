#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that return values support both rvalue and lvalue.
    //

    IAsyncOperation<hstring> Operation(bool rvalue)
    {
        if (rvalue)
        {
            hstring value = L"rvalue";
            co_return std::move(value);
        }
        else
        {
            hstring value = L"lvalue";
            co_return value;
        }
    }

    IAsyncOperationWithProgress<hstring, int> OperationWithProgress(bool rvalue)
    {
        if (rvalue)
        {
            hstring value = L"rvalue";
            co_return std::move(value);
        }
        else
        {
            hstring value = L"lvalue";
            co_return value;
        }
    }

    template <typename F>
    void Check(F make)
    {
        REQUIRE(make(true).get() == L"rvalue");
        REQUIRE(make(false).get() == L"lvalue");
    }
}

TEST_CASE("async_return")
{
    Check(Operation);
    Check(OperationWithProgress);
}
