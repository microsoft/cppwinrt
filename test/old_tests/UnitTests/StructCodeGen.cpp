#include "pch.h"
#include "catch.hpp"
#include "Composable_h.h"
#include <wrl/implements.h>
#include "winrt/Composable.h"

static_assert(sizeof(ABI::Composable::TestStructCodeGen) == sizeof(winrt::Composable::TestStructCodeGen));
static_assert(std::alignment_of_v<ABI::Composable::TestStructCodeGen> == std::alignment_of_v<winrt::Composable::TestStructCodeGen>);

namespace wrl = Microsoft::WRL;

namespace
{
    struct midl_abi : wrl::RuntimeClass<ABI::Composable::ITestStructCodeGen>
    {
        HRESULT __stdcall Test1(int a, ABI::Composable::TestStructCodeGen b, DOUBLE* result) override
        {
            *result = a + b.Value + b.GridUnitType;
            return S_OK;
        }

        HRESULT __stdcall Test2(ABI::Composable::TestStructCodeGen b, int a, DOUBLE* result) override
        {
            *result = a + b.Value + b.GridUnitType;
            return S_OK;
        }
    };

    struct cpp_abi : winrt::implements<cpp_abi, winrt::Composable::ITestStructCodeGen>
    {
        double Test1(int a, winrt::Composable::TestStructCodeGen const& b)
        {
            return a + b.Value + static_cast<int>(b.GridUnitType);
        }

        double Test2(winrt::Composable::TestStructCodeGen const& b, int a)
        {
            return a + b.Value + static_cast<int>(b.GridUnitType);
        }
    };
}

TEST_CASE("StructCodeGen")
{
    winrt::Composable::ITestStructCodeGen midl;
    winrt::attach_abi(midl, wrl::Make<midl_abi>().Detach());

    auto cpp = winrt::make<cpp_abi>();

    winrt::Composable::TestStructCodeGen const input{ 123.456, winrt::Composable::TestStructCodeGenType::Star };
    double const expected = 456.0 + 123.456 + 2.0;

    REQUIRE(expected == midl.Test1(456, input));
    REQUIRE(expected == midl.Test2(input, 456));

    REQUIRE(expected == cpp.Test1(456, input));
    REQUIRE(expected == cpp.Test2(input, 456));
}
