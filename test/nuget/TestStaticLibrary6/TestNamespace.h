﻿#pragma once

#include "TestRuntimeComponentNamespace.TestNamespace.g.h"

namespace winrt::TestRuntimeComponentNamespace::implementation
{
    struct TestNamespace : TestNamespaceT<TestNamespace>
    {
        TestNamespace() = default;
    };
} // namespace winrt::TestRuntimeComponentNamespace::implementation

namespace winrt::TestRuntimeComponentNamespace::factory_implementation
{
    struct TestNamespace : TestNamespaceT<TestNamespace, implementation::TestNamespace>
    {};
} // namespace winrt::TestRuntimeComponentNamespace::factory_implementation
