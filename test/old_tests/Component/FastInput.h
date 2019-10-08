#pragma once

#include "FastInput.g.h"

namespace winrt::Component::implementation
{
    struct FastInput : FastInputT<FastInput>
    {
        FastInput() = default;

        hstring String(hstring const& in);
        hstring Array(array_view<hstring const> in);

        hstring Iterable(Windows::Foundation::Collections::IIterable<hstring> const& in);
        hstring VectorView(Windows::Foundation::Collections::IVectorView<hstring> const& in);
        hstring Vector(Windows::Foundation::Collections::IVector<hstring> const& in);

        hstring IterablePair(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& in);
        hstring MapView(Windows::Foundation::Collections::IMapView<hstring, hstring> const& in);
        hstring Map(Windows::Foundation::Collections::IMap<hstring, hstring> const& in);

        Windows::Foundation::IAsyncOperation<hstring> IterableAsync(Windows::Foundation::Collections::IIterable<hstring> const in);
        Windows::Foundation::IAsyncOperation<hstring> VectorViewAsync(Windows::Foundation::Collections::IVectorView<hstring> const in);
        Windows::Foundation::IAsyncOperation<hstring> IterablePairAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const in);
        Windows::Foundation::IAsyncOperation<hstring> MapViewAsync(Windows::Foundation::Collections::IMapView<hstring, hstring> const in);

        void UseIterable();
        void UseIterablePair();

    private:

        Windows::Foundation::Collections::IIterable<hstring> m_iterable;
        Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> m_iterable_pair;
    };
}

namespace winrt::Component::factory_implementation
{
    struct FastInput : FastInputT<FastInput, implementation::FastInput>
    {
    };
}
