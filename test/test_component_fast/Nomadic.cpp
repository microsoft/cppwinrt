#include "pch.h"
#include "Nomadic.h"
#include "Nomadic.g.cpp"

namespace winrt::test_component_fast::implementation
{
    hstring Nomadic::FirstMethod()
    {
        return L"FirstMethod";
    }
    hstring Nomadic::SecondMethod()
    {
        return L"SecondMethod";
    }
    hstring Nomadic::ThirdMethod()
    {
        return L"ThirdMethod";
    }
    hstring Nomadic::FourthMethod()
    {
        return L"FourthMethod";
    }
}
