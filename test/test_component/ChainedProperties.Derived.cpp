#include "pch.h"
#include "ChainedProperties.Derived.h"
#include "ChainedProperties.Derived.g.cpp"

namespace winrt::test_component::ChainedProperties::implementation
{
    int32_t Derived::Fourth()
    {
        return m_fourth;
    }
    void Derived::Fourth(int32_t value)
    {
        m_fourth = value;
    }
    int32_t Derived::Third()
    {
        return m_third;
    }
    void Derived::Third(int32_t value)
    {
        m_third = value;
    }
}
