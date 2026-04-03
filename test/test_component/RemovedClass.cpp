#include "pch.h"
#include "RemovedClass.h"
#include "RemovedClass.g.cpp"

namespace winrt::test_component::implementation
{
    void RemovedClass::ActiveStaticMethod()
    {
    }

    void RemovedClass::RemovedStaticMethod()
    {
        throw hresult_not_implemented();
    }

    void RemovedClass::ActiveMethod()
    {
    }

    void RemovedClass::RemovedMethod()
    {
        throw hresult_not_implemented();
    }
}
