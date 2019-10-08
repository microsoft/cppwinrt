#include "pch.h"
#include "FastInput.h"

namespace winrt::Component::implementation
{
    using namespace Windows::Foundation;
    using namespace Windows::Foundation::Collections;

    namespace
    {
        template <typename T>
        hstring concat(T const& in)
        {
            std::wstring out;

            for (auto&& s : in)
            {
                out += s;
            }

            return hstring(out);
        }

        template <typename T>
        hstring concat_pair(T const& in)
        {
            std::map<hstring, hstring> ordered;

            for (auto&& pair : in)
            {
                ordered[pair.Key()] = pair.Value();
            }

            std::wstring out;

            for (auto&& pair : ordered)
            {
                out += pair.first;
                out += pair.second;
            }


            return hstring(out);
        }
    }

    hstring FastInput::String(hstring const& in)
    {
        return in;
    }

    hstring FastInput::Array(array_view<hstring const> in)
    {
        return concat(in);
    }

    hstring FastInput::Iterable(IIterable<hstring> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable = in;
        return concat(in);
    }

    hstring FastInput::VectorView(IVectorView<hstring> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable = in;
        return concat(in);
    }

    hstring FastInput::Vector(IVector<hstring> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable = in;
        return concat(in);
    }

    hstring FastInput::IterablePair(IIterable<IKeyValuePair<hstring, hstring>> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable_pair = in;
        return concat_pair(in);
    }

    hstring FastInput::MapView(IMapView<hstring, hstring> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable_pair = in;
        return concat_pair(in);
    }

    hstring FastInput::Map(IMap<hstring, hstring> const& in)
    {
        if (!in)
        {
            return L"nullptr";
        }

        m_iterable_pair = in;
        return concat_pair(in);
    }

    IAsyncOperation<hstring> FastInput::IterableAsync(IIterable<hstring> const in)
    {
        if (!in)
        {
            co_return L"nullptr";
        }

        m_iterable = in;
        co_return concat(in);
    }

    IAsyncOperation<hstring> FastInput::VectorViewAsync(IVectorView<hstring> const in)
    {
        if (!in)
        {
            co_return L"nullptr";
        }

        m_iterable = in;
        co_return concat(in);
    }

    IAsyncOperation<hstring> FastInput::IterablePairAsync(IIterable<IKeyValuePair<hstring, hstring>> const in)
    {
        if (!in)
        {
            co_return L"nullptr";
        }

        m_iterable_pair = in;
        co_return concat_pair(in);
    }

    IAsyncOperation<hstring> FastInput::MapViewAsync(IMapView<hstring, hstring> const in)
    {
        if (!in)
        {
            co_return L"nullptr";
        }

        m_iterable_pair = in;
        co_return concat_pair(in);
    }

    void FastInput::UseIterable()
    {
        // If this points to a scoped container then this call should throw.
        m_iterable.First();
    }

    void FastInput::UseIterablePair()
    {
        // If this points to a scoped container then this call should throw.
        m_iterable_pair.First();
    }
}
