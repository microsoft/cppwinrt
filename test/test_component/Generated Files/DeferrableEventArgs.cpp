#include "pch.h"
#include "DeferrableEventArgs.h"
#include "DeferrableEventArgs.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::implementation
{
    Windows::Foundation::Deferral DeferrableEventArgs::GetDeferral()
    {
        throw hresult_not_implemented();
    }
    void DeferrableEventArgs::IncrementCounter()
    {
        throw hresult_not_implemented();
    }
}
