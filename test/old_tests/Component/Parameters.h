#pragma once

#include "Parameters.g.h"

namespace winrt::Component::implementation
{
    struct Parameters : ParametersT<Parameters>
    {
        Parameters() = default;

        void SetInt32(int32_t value);
        int32_t GetInt32() const;
        void OutInt32(int32_t& value) const;

        void SetString(hstring const& value);
        hstring GetString() const;
        void OutString(hstring& value) const;

        void SetObject(Windows::Foundation::IInspectable const& value);
        Windows::Foundation::IInspectable GetObject() const;
        void OutObject(Windows::Foundation::IInspectable& value) const;

        void SetInt32Array(array_view<int32_t const> value);
        com_array<int32_t> GetInt32Array() const;
        void OutInt32Array(com_array<int32_t>& value) const;
        void CopyInt32Array(array_view<int32_t> value) const;

        void SetStringArray(array_view<hstring const> value);
        com_array<hstring> GetStringArray() const;
        void OutStringArray(com_array<hstring>& value) const;
        void CopyStringArray(array_view<hstring> value) const;

        void SetObjectArray(array_view<Windows::Foundation::IInspectable const> value);
        com_array<Windows::Foundation::IInspectable> GetObjectArray() const;
        void OutObjectArray(com_array<Windows::Foundation::IInspectable>& value) const;
        void CopyObjectArray(array_view<Windows::Foundation::IInspectable> value) const;

    private:
        int32_t m_int32{ 0 };
        hstring m_string;
        Windows::Foundation::IInspectable m_object;
        std::vector<int32_t> m_int32_array;
        std::vector<hstring> m_string_array;
        std::vector<Windows::Foundation::IInspectable> m_object_array;
    };
}

namespace winrt::Component::factory_implementation
{
    struct Parameters : ParametersT<Parameters, implementation::Parameters>
    {
    };
}
