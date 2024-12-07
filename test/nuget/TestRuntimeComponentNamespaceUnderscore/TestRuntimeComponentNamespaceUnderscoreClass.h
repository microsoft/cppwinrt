#pragma once

#include "TestRuntimeComponentNamespaceUnderscoreClass.g.h"

namespace winrt::TestRuntimeComponent_NamespaceUnderscore::implementation
{
    struct TestRuntimeComponentNamespaceUnderscoreClass
        : TestRuntimeComponentNamespaceUnderscoreClassT<TestRuntimeComponentNamespaceUnderscoreClass>
    {
        TestRuntimeComponentNamespaceUnderscoreClass() = default;

        void Test();
    };
} // namespace winrt::TestRuntimeComponent_NamespaceUnderscore::implementation

namespace winrt::TestRuntimeComponent_NamespaceUnderscore::factory_implementation
{
    struct TestRuntimeComponentNamespaceUnderscoreClass
        : TestRuntimeComponentNamespaceUnderscoreClassT<TestRuntimeComponentNamespaceUnderscoreClass, implementation::TestRuntimeComponentNamespaceUnderscoreClass>
    {};
} // namespace winrt::TestRuntimeComponent_NamespaceUnderscore::factory_implementation
