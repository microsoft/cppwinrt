#pragma once
#include "TestModuleComponentClass.g.h"

namespace winrt::TestModuleComponent::implementation
{
    struct TestModuleComponentClass : TestModuleComponentClassT<TestModuleComponentClass>
    {
        TestModuleComponentClass() = default;
        void Test();
        winrt::TestModuleComponent::Widgets::Widget CreateWidget();
    };
}
namespace winrt::TestModuleComponent::factory_implementation
{
    struct TestModuleComponentClass : TestModuleComponentClassT<TestModuleComponentClass, implementation::TestModuleComponentClass>
    {
    };
}
