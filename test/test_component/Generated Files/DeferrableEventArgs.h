#pragma once
#include "DeferrableEventArgs.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::implementation
{
    struct DeferrableEventArgs : DeferrableEventArgsT<DeferrableEventArgs>
    {
        DeferrableEventArgs() = default;

        Windows::Foundation::Deferral GetDeferral();
        void IncrementCounter();
    };
}
