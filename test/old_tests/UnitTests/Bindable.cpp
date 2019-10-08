#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml::Interop;

namespace
{
    struct Iterable : implements<Iterable, IBindableIterable>
    {
        Iterable(IIterable<IInspectable> const& values) :
            m_values(values)
        {
        }

        IBindableIterator First() const
        {
            return make<Iterator>(m_values.First());
        }

    private:

        IIterable<IInspectable> const m_values;

        struct Iterator : implements<Iterator, IBindableIterator>
        {
            explicit Iterator(IIterator<IInspectable> const& iterator) noexcept :
                m_iterator(iterator)
            {
            }

            auto Current() const
            {
                return m_iterator.Current();
            }

            bool HasCurrent() const
            {
                return m_iterator.HasCurrent();
            }

            bool MoveNext() const
            {
                return m_iterator.MoveNext();
            }

        private:

            IIterator<IInspectable> m_iterator;
        };
    };
}

TEST_CASE("Bindable")
{
    IVector<IInspectable> vector = single_threaded_vector<IInspectable>();
    vector.Append(box_value(L"one"));
    vector.Append(box_value(L"two"));
    vector.Append(box_value(L"three"));

    IBindableIterable iterable = make<Iterable>(vector);

    std::vector<hstring> result;

    for (auto&& value : iterable)
    {
        result.push_back(unbox_value<hstring>(value));
    }

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == L"one");
    REQUIRE(result[1] == L"two");
    REQUIRE(result[2] == L"three");
}
