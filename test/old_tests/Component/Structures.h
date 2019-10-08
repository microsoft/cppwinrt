#pragma once

#include "Structures.g.h"

namespace winrt::Component::implementation
{
    struct Structures : StructuresT<Structures>
    {
        Structures() = default;

        void Set(WrapStructure const& value);
        WrapStructure Get();
        void Out(WrapStructure& value);
        void Ref(WrapStructure const& value);
        void SetArray(array_view<WrapStructure const> value);
        com_array<WrapStructure> GetArray();
        void OutArray(com_array<WrapStructure>& value);
        void CopyArray(array_view<WrapStructure> value);

    private:
        WrapStructure m_value;
        std::vector<WrapStructure> m_array;
    };
}

namespace winrt::Component::factory_implementation
{
    struct Structures : StructuresT<Structures, implementation::Structures>
    {
    };
}
