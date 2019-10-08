#include "pch.h"
#include "Parameters.h"

namespace winrt::Component::implementation
{
    void Parameters::SetInt32(int32_t value)
    {
        m_int32 = value;
    }

    int32_t Parameters::GetInt32() const
    {
        return m_int32;
    }

    void Parameters::OutInt32(int32_t& value) const
    {
        value = m_int32;
    }

    void Parameters::SetString(hstring const& value)
    {
        m_string = value;
    }

    hstring Parameters::GetString() const
    {
        return m_string;
    }

    void Parameters::OutString(hstring& value) const
    {
        value = m_string;
    }

    void Parameters::SetObject(Windows::Foundation::IInspectable const& value)
    {
        m_object = value;
    }

    Windows::Foundation::IInspectable Parameters::GetObject() const
    {
        return m_object;
    }

    void Parameters::OutObject(Windows::Foundation::IInspectable& value) const
    {
        value = m_object;
    }

    void Parameters::SetInt32Array(array_view<int32_t const> value)
    {
        m_int32_array.assign(value.begin(), value.end());
    }

    com_array<int32_t> Parameters::GetInt32Array() const
    {
        return com_array<int32_t>(m_int32_array);
    }

    void Parameters::OutInt32Array(com_array<int32_t>& value) const
    {
        value = com_array<int32_t>(m_int32_array);
    }

    void Parameters::CopyInt32Array(array_view<int32_t> value) const
    {
        uint32_t actual = static_cast<uint32_t>(m_int32_array.size());

        if (actual > value.size())
        {
            actual = value.size();
        }

        std::copy_n(m_int32_array.begin(), actual, value.begin());
    }

    void Parameters::SetStringArray(array_view<hstring const> value)
    {
        m_string_array.assign(value.begin(), value.end());
    }

    com_array<hstring> Parameters::GetStringArray() const
    {
        return com_array<hstring>(m_string_array);
    }

    void Parameters::OutStringArray(com_array<hstring>& value) const
    {
        value = com_array<hstring>(m_string_array);
    }

    void Parameters::CopyStringArray(array_view<hstring> value) const
    {
        uint32_t actual = static_cast<uint32_t>(m_string_array.size());

        if (actual > value.size())
        {
            actual = value.size();
        }

        std::copy_n(m_string_array.begin(), actual, value.begin());
    }

    void Parameters::SetObjectArray(array_view<Windows::Foundation::IInspectable const> value)
    {
        m_object_array.assign(value.begin(), value.end());
    }

    com_array<Windows::Foundation::IInspectable> Parameters::GetObjectArray() const
    {
        return com_array<Windows::Foundation::IInspectable>(m_object_array);
    }

    void Parameters::OutObjectArray(com_array<Windows::Foundation::IInspectable>& value) const
    {
        value = com_array<Windows::Foundation::IInspectable>(m_object_array);
    }

    void Parameters::CopyObjectArray(array_view<Windows::Foundation::IInspectable> value) const
    {
        uint32_t actual = static_cast<uint32_t>(m_object_array.size());

        if (actual > value.size())
        {
            actual = value.size();
        }

        std::copy_n(m_object_array.begin(), actual, value.begin());
    }
}
