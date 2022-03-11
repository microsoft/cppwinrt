#include "pch.h"
#include "ChainedProperties.Base.h"
#include "ChainedProperties.Base.g.cpp"

namespace winrt::test_component::ChainedProperties::implementation
{
    int32_t Base::Second()
    {
        return m_second;
    }
    void Base::Second(int32_t value)
    {
        m_second = value;
    }
    int32_t Base::First()
    {
        return m_first;
    }
    void Base::First(int32_t value)
    {
        m_first = value;
    }
}
