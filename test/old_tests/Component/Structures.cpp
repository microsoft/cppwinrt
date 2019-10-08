#include "pch.h"
#include "Structures.h"

namespace winrt::Component::implementation
{
    void Structures::Set(WrapStructure const& value)
    {
        m_value = value;
    }

    WrapStructure Structures::Get()
    {
        return m_value;
    }

    void Structures::Out(WrapStructure& value)
    {
        value = m_value;
    }

    void Structures::Ref(WrapStructure const& value)
    {
        m_value = value;
    }

    void Structures::SetArray(array_view<WrapStructure const> value)
    {
        m_array.assign(value.begin(), value.end());
    }

    com_array<WrapStructure> Structures::GetArray()
    {
        return { m_array.begin(), m_array.end() };
    }

    void Structures::OutArray(com_array<WrapStructure>& value)
    {
        value = { m_array.begin(), m_array.end() };
    }

    void Structures::CopyArray(array_view<WrapStructure> value)
    {
        uint32_t actual = static_cast<uint32_t>(m_array.size());

        if (actual > value.size())
        {
            actual = value.size();
        }

        std::copy_n(m_array.begin(), actual, value.begin());
    }
}
