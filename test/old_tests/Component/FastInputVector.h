#pragma once

#include "FastInputVector.g.h"

namespace winrt::Component::implementation
{
    struct FastInputVector :
        FastInputVectorT<FastInputVector>,
        vector_base<FastInputVector, hstring>
    {
        FastInputVector(Windows::Foundation::Collections::IVectorView<hstring> const& in);
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

        std::vector<hstring> m_container;
    };
}

namespace winrt::Component::factory_implementation
{
    struct FastInputVector : FastInputVectorT<FastInputVector, implementation::FastInputVector>
    {
    };
}
