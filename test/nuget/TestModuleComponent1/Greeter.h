#pragma once
#include "Greeter.g.h"

namespace winrt::TestModuleComponent1::implementation
{
    struct Greeter : GreeterT<Greeter>
    {
        Greeter() : m_name(L"World") {}
        Greeter(hstring const& name) : m_name(name) {}

        hstring Name() { return m_name; }
        hstring Greet() { return L"Hello, " + m_name + L"!"; }
        Windows::Foundation::Uri Homepage() { return Windows::Foundation::Uri(L"https://example.com/" + m_name); }

    private:
        hstring m_name;
    };
}

namespace winrt::TestModuleComponent1::factory_implementation
{
    struct Greeter : GreeterT<Greeter, implementation::Greeter>
    {
    };
}
