#include "pch.h"
#include "CustomBase.h"

namespace winrt::Component::implementation
{
    hstring CustomBase::CustomVirtualMethod()
    {
        return L"CustomBase";
    }
}
