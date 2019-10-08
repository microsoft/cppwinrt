#include "pch.h"
#include "Simple.h"
#include "Simple.g.cpp"

// Validates that WINRT_FAST_ABI_SIZE may be overridden using /D.
#pragma detect_mismatch("WINRT_FAST_ABI_SIZE", "50")

namespace winrt::test_component_fast::implementation
{
    hstring Simple::Method1()
    {
        return L"Method1";
    }
    hstring Simple::Method2()
    {
        return L"Method2";
    }
    hstring Simple::Method3()
    {
        return L"Method3";
    }
}
