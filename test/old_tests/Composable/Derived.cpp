#include "precomp.hpp"
#include "Derived.h"

namespace winrt::Composable::implementation
{
    hstring Derived::VirtualMethod()
    {
        return L"Derived::VirtualMethod";
    }

    hstring Derived::OverridableVirtualMethod()
    {
        return L"Derived::OverridableVirtualMethod";
    }
}
