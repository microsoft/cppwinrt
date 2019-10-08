#include "pch.h"
#include "FastInputMap.h"

namespace winrt::Component::implementation
{
    using namespace Windows::Foundation::Collections;

    FastInputMap::FastInputMap(IMapView<hstring, hstring> const& in)
    {
        for (auto&& pair : in)
        {
            m_container[pair.Key()] = pair.Value();
        }
    }

    void FastInputMap::Close()
    {
        throw hresult_not_implemented();
    }
}
