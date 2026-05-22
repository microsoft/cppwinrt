#pragma once
#include "GreeterGroup.g.h"

namespace winrt::TestModuleComponent2::implementation
{
    struct GreeterGroup : GreeterGroupT<GreeterGroup>
    {
        GreeterGroup() = default;

        void Add(winrt::TestModuleComponent1::Greeter const& greeter)
        {
            m_greeters.push_back(greeter);
        }

        hstring GreetAll()
        {
            hstring result;
            for (auto const& g : m_greeters)
            {
                if (!result.empty()) result = result + L", ";
                result = result + g.Greet();
            }
            return result;
        }

    private:
        std::vector<winrt::TestModuleComponent1::Greeter> m_greeters;
    };
}

namespace winrt::TestModuleComponent2::factory_implementation
{
    struct GreeterGroup : GreeterGroupT<GreeterGroup, implementation::GreeterGroup>
    {
    };
}
