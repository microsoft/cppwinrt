#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    template <typename A, typename B>
    void test_sequence(A const& container, std::initializer_list<B> expected)
    {
        bool const equal = std::equal(begin(container), end(container), begin(expected), end(expected));
        REQUIRE(equal);
    }

    template <typename A, typename B>
    void test_associative(A const& container, std::initializer_list<B> expected)
    {
        bool const equal = std::equal(begin(container), end(container), begin(expected), end(expected),
            [](auto&& left, auto&& right)
        {
            return left.Key() == right.first && left.Value() == right.second;
        });

        REQUIRE(equal);
    }

    template <typename A, typename B>
    void test_stringable(A const& container, std::initializer_list<B> expected)
    {
        bool const equal = std::equal(begin(container), end(container), begin(expected), end(expected),
            [](auto&& left, auto&& right)
        {
            return left.ToString() == right.ToString();
        });

        REQUIRE(equal);
    }

    template <typename A, typename K, typename V>
    void test_associative_stringable(A const& container, std::map<K, V> const& expected)
    {
        bool const equal = std::equal(begin(container), end(container), begin(expected), end(expected),
            [](auto&& left, auto&& right)
        {
            auto left_key = left.Key();
            auto right_key = right.first;
            auto left_value = left.Value().ToString();
            auto right_value = right.second.ToString();

            REQUIRE(left_key == right_key);
            REQUIRE(left_value == right_value);

            return left_key == right_key && left_value == right_value;
        });

        REQUIRE(equal);
    }

    struct simple_iterable :
        implements<simple_iterable, IIterable<int>>,
        iterable_base<simple_iterable, int>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_iterable_with_custom_container :
        implements<simple_iterable_with_custom_container, IIterable<int>>,
        iterable_base<simple_iterable_with_custom_container, int>
    {
        auto get_container() const noexcept
        {
            struct container
            {
                std::vector<int>::const_iterator first;
                std::vector<int>::const_iterator last;

                auto begin() const
                {
                    return first;
                }

                auto end() const
                {
                    return last;
                }
            };

            return container{ m_values.begin(), m_values.end() };
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_vector_view :
        implements<simple_vector_view, IVectorView<int>, IIterable<int>>,
        vector_view_base<simple_vector_view, int>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_vector_view_with_custom_container :
        implements<simple_vector_view_with_custom_container, IVectorView<int>, IIterable<int>>,
        vector_view_base<simple_vector_view_with_custom_container, int>
    {
        auto get_container() const noexcept
        {
            struct container
            {
                std::vector<int>::const_iterator first;
                std::vector<int>::const_iterator last;

                auto begin() const
                {
                    return first;
                }

                auto end() const
                {
                    return last;
                }
            };

            return container{ m_values.begin(), m_values.end() };
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_vector :
        implements<simple_vector, IVector<int>, IVectorView<int>, IIterable<int>>,
        vector_base<simple_vector, int>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_observable_vector :
        implements<simple_observable_vector, IObservableVector<int>, IVector<int>, IVectorView<int>, IIterable<int>>,
        observable_vector_base<simple_observable_vector, int>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        std::vector<int> m_values{ 1,2,3 };
    };

    struct simple_iterable_pair :
        implements<simple_iterable_pair, IIterable<IKeyValuePair<int, hstring>>>,
        iterable_base<simple_iterable_pair, IKeyValuePair<int, hstring>>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        std::map<int, hstring> m_values{ {1,L"one"}, {2, L"two"}, {3, L"three"} };
    };

    struct simple_map_view :
        implements<simple_map_view, IMapView<int, hstring>, IIterable<IKeyValuePair<int, hstring>>>,
        map_view_base<simple_map_view, int, hstring>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        std::map<int, hstring> m_values{ { 1,L"one" },{ 2, L"two" },{ 3, L"three" } };
    };

    struct simple_map :
        implements<simple_map, IMap<int, hstring>, IMapView<int, hstring>, IIterable<IKeyValuePair<int, hstring>>>,
        map_base<simple_map, int, hstring>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        std::map<int, hstring> m_values{ { 1,L"one" },{ 2, L"two" },{ 3, L"three" } };
    };

    struct simple_observable_map :
        implements<simple_observable_map, IObservableMap<int, hstring>, IMap<int, hstring>, IMapView<int, hstring>, IIterable<IKeyValuePair<int, hstring>>>,
        observable_map_base<simple_observable_map, int, hstring>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        std::map<int, hstring> m_values{ { 1,L"one" },{ 2, L"two" },{ 3, L"three" } };
    };
}

TEST_CASE("simple_containers")
{
    std::initializer_list<int> sequence{ 1,2,3 };
    std::initializer_list<std::pair<int, hstring>> associative{ { 1,L"one" },{ 2, L"two" },{ 3, L"three" } };

    test_sequence(make<simple_iterable>(), sequence);
    test_sequence(make<simple_iterable_with_custom_container>(), sequence);
    test_sequence(make<simple_vector_view>(), sequence);
    test_sequence(make<simple_vector_view_with_custom_container>(), sequence);
    test_sequence(make<simple_vector>(), sequence);
    test_sequence(make<simple_observable_vector>(), sequence);

    test_associative(make<simple_iterable_pair>(), associative);
    test_associative(make<simple_map_view>(), associative);
    test_associative(make<simple_map>(), associative);
    test_associative(make<simple_observable_map>(), associative);
}

namespace
{
    struct stringable : implements<stringable, IStringable>
    {
        explicit stringable(hstring value) : m_value(std::move(value))
        {
        }

        hstring ToString() const
        {
            return m_value;
        }

        hstring const m_value;
    };

    struct agile_iterable :
        implements<agile_iterable, IIterable<IStringable>>,
        iterable_base<agile_iterable, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto wrap_value(IStringable const& value) const
        {
            return make_agile(value);
        }

        auto unwrap_value(agile_ref<IStringable> const& ref) const
        {
            return ref.get();
        }

        std::vector<agile_ref<IStringable>> m_values{ make<stringable>(L"one"), make<stringable>(L"two"), make<stringable>(L"three") };
    };

    struct agile_vector_view :
        implements<agile_vector_view, IVectorView<IStringable>, IIterable<IStringable>>,
        vector_view_base<agile_vector_view, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto wrap_value(IStringable const& value) const
        {
            return make_agile(value);
        }

        auto unwrap_value(agile_ref<IStringable> const& ref) const
        {
            return ref.get();
        }

        std::vector<agile_ref<IStringable>> m_values{ make<stringable>(L"one"), make<stringable>(L"two"), make<stringable>(L"three") };
    };

    struct agile_vector :
        implements<agile_vector, IVector<IStringable>, IVectorView<IStringable>, IIterable<IStringable>>,
        vector_base<agile_vector, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto wrap_value(IStringable const& value) const
        {
            return make_agile(value);
        }

        auto unwrap_value(agile_ref<IStringable> const& ref) const
        {
            return ref.get();
        }

        std::vector<agile_ref<IStringable>> m_values{ make<stringable>(L"one"), make<stringable>(L"two"), make<stringable>(L"three") };
    };

    struct agile_observable_vector :
        implements<agile_observable_vector, IObservableVector<IStringable>, IVector<IStringable>, IVectorView<IStringable>, IIterable<IStringable>>,
        observable_vector_base<agile_observable_vector, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto wrap_value(IStringable const& value) const
        {
            return make_agile(value);
        }

        auto unwrap_value(agile_ref<IStringable> const& ref) const
        {
            return ref.get();
        }

        std::vector<agile_ref<IStringable>> m_values{ make<stringable>(L"one"), make<stringable>(L"two"), make<stringable>(L"three") };
    };
}

TEST_CASE("wrapped_sequence_containers")
{
    std::initializer_list<IStringable> sequence{ make<stringable>(L"one"), make<stringable>(L"two"), make<stringable>(L"three") };

    test_stringable(make<agile_iterable>(), sequence);
    test_stringable(make<agile_vector_view>(), sequence);
    test_stringable(make<agile_vector>(), sequence);
    test_stringable(make<agile_observable_vector>(), sequence);
}

namespace
{
    struct agile_iterable_pair :
        implements<agile_iterable_pair, IIterable<IKeyValuePair<hstring, IStringable>>>,
        iterable_base<agile_iterable_pair, IKeyValuePair<hstring, IStringable>>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        static auto wrap_value(IStringable const& value)
        {
            return make_agile(value);
        }

        static auto unwrap_value(agile_ref<IStringable> const& ref)
        {
            return ref.get();
        }

        static auto wrap_value(hstring const& value)
        {
            return std::wstring(value);
        }

        static auto unwrap_value(std::wstring const& ref)
        {
            return hstring(ref);
        }

        std::map<std::wstring, agile_ref<IStringable>> m_values{ { L"one", make<stringable>(L"one") }, {L"two", make<stringable>(L"two") }, { L"three", make<stringable>(L"three") } };
    };

    struct agile_map_view :
        implements<agile_map_view, IMapView<hstring, IStringable>, IIterable<IKeyValuePair<hstring, IStringable>>>,
        map_view_base<agile_map_view, hstring, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        static auto wrap_value(IStringable const& value)
        {
            return make_agile(value);
        }

        static auto unwrap_value(agile_ref<IStringable> const& ref)
        {
            return ref.get();
        }

        static auto wrap_value(hstring const& value)
        {
            return std::wstring(value);
        }

        static auto unwrap_value(std::wstring const& ref)
        {
            return hstring(ref);
        }

        std::map<std::wstring, agile_ref<IStringable>> m_values{ { L"one", make<stringable>(L"one") },{ L"two", make<stringable>(L"two") },{ L"three", make<stringable>(L"three") } };
    };

    struct agile_map :
        implements<agile_map, IMap<hstring, IStringable>, IMapView<hstring, IStringable>, IIterable<IKeyValuePair<hstring, IStringable>>>,
        map_base<agile_map, hstring, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        static auto wrap_value(IStringable const& value)
        {
            return make_agile(value);
        }

        static auto unwrap_value(agile_ref<IStringable> const& ref)
        {
            return ref.get();
        }

        static auto wrap_value(hstring const& value)
        {
            return std::wstring(value);
        }

        static auto unwrap_value(std::wstring const& ref)
        {
            return hstring(ref);
        }

        std::map<std::wstring, agile_ref<IStringable>> m_values{ { L"one", make<stringable>(L"one") },{ L"two", make<stringable>(L"two") },{ L"three", make<stringable>(L"three") } };
    };

    struct agile_observable_map :
        implements<agile_observable_map, IObservableMap<hstring, IStringable>, IMap<hstring, IStringable>, IMapView<hstring, IStringable>, IIterable<IKeyValuePair<hstring, IStringable>>>,
        observable_map_base<agile_observable_map, hstring, IStringable>
    {
        auto& get_container() const noexcept
        {
            return m_values;
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        static auto wrap_value(IStringable const& value)
        {
            return make_agile(value);
        }

        static auto unwrap_value(agile_ref<IStringable> const& ref)
        {
            return ref.get();
        }

        static auto wrap_value(hstring const& value)
        {
            return std::wstring(value);
        }

        static auto unwrap_value(std::wstring const& ref)
        {
            return hstring(ref);
        }

        std::map<std::wstring, agile_ref<IStringable>> m_values{ { L"one", make<stringable>(L"one") },{ L"two", make<stringable>(L"two") },{ L"three", make<stringable>(L"three") } };
    };
}

TEST_CASE("wrapped_associative_containers")
{
    std::map<hstring, IStringable> sequence{ { L"one", make<stringable>(L"one") },{ L"two", make<stringable>(L"two") },{ L"three", make<stringable>(L"three") } };

    test_associative_stringable(make<agile_iterable_pair>(), sequence);
    test_associative_stringable(make<agile_map_view>(), sequence);
    test_associative_stringable(make<agile_map>(), sequence);
    test_associative_stringable(make<agile_observable_map>(), sequence);
}
