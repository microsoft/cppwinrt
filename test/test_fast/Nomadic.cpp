#include "pch.h"
#include "winrt/test_component_fast.h"
#include <inspectable.h>

using namespace winrt;
using namespace test_component_fast;

hstring invoke_by_interface_vtable_offset(Nomadic const& nomadic, ptrdiff_t offset)
{
    // NOTE: Behavior guaranteed by Windows ABI; see the "C style interface" for WinRT/COM types for more info. Note
    //       that IInspectable has 6 functions in total (including those inherited from IUnknown)
    auto insp = static_cast<::IInspectable*>(get_abi(nomadic));
    auto vtable = *reinterpret_cast<void***>(insp);

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmicrosoft-cast"
#endif
    auto fn_ptr = static_cast<HRESULT(__stdcall *)(::IInspectable*, HSTRING*)>(vtable[6 + offset]);
#ifdef __clang__
#pragma clang diagnostic pop
#endif

    HSTRING hstr;
    check_hresult(fn_ptr(insp, &hstr));

    hstring result;
    attach_abi(result, hstr);
    return result;
}

TEST_CASE("Nomadic")
{
    impl::get_diagnostics_info().detach();

    Nomadic n;
    REQUIRE(invoke_by_interface_vtable_offset(n, 0) == L"FirstMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 1) == L"SecondMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 2) == L"ThirdMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 3) == L"FourthMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 4) == L"FifthMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 5) == L"SixthMethod");
    REQUIRE(invoke_by_interface_vtable_offset(n, 6) == L"SeventhMethod");
}
