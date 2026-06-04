#include "pch.h"
#include <objidl.h>

import std;
import winrt.Windows.Foundation.Collections;

using namespace winrt;

struct S : implements<S, Windows::Foundation::IStringable>
{
    hstring ToString()
    {
        return L"S";
    }
};

// When winrt::impl::get_marshaler was being exported, an MSVC bug caused the marshaler
// object to have a null vtable, which caused a crash when calling any method on the marshaler.
// This test ensures that the marshaler vtable is properly initialized.
TEST_CASE("IMarshal")
{
    auto s = make<S>();
    auto marshal = s.as<IMarshal>();
}
