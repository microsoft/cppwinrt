#pragma once

#include "FastInputMap.g.h"

namespace winrt::Component::implementation
{
    struct FastInputMap :
        FastInputMapT<FastInputMap>,
        map_base<FastInputMap, hstring, hstring>
    {
        FastInputMap(Windows::Foundation::Collections::IMapView<hstring, hstring> const& in);
        void Close();

        auto& get_container() const noexcept
        {
            return m_container;
        }

        auto& get_container() noexcept
        {
            return m_container;
        }

    private:

        std::map<hstring, hstring> m_container;
    };
}

namespace winrt::Component::factory_implementation
{
    struct FastInputMap : FastInputMapT<FastInputMap, implementation::FastInputMap>
    {
    };
}
