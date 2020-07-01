
namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct multi_threaded_map :
        implements<multi_threaded_map<K, V, Container>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_base<multi_threaded_map<K, V, Container>, K, V>,
        multi_threaded_collection_base
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit multi_threaded_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using multi_threaded_collection_base::perform_exclusive;
        using multi_threaded_collection_base::perform_shared;

    private:

        Container m_values;
    };

    template <typename K, typename V, typename Container>
    struct observable_map :
        implements<observable_map<K, V, Container>, wfc::IObservableMap<K, V>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        observable_map_base<observable_map<K, V, Container>, K, V>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit observable_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container m_values;
    };

    template <typename K, typename V, typename Container>
    struct multi_threaded_observable_map :
        implements<multi_threaded_observable_map<K, V, Container>, wfc::IObservableMap<K, V>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        observable_map_base<multi_threaded_observable_map<K, V, Container>, K, V>,
        multi_threaded_collection_base
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit multi_threaded_observable_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using multi_threaded_collection_base::perform_exclusive;
        using multi_threaded_collection_base::perform_shared;

    private:

        Container m_values;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map()
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map()
    {
        return make<impl::multi_threaded_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::multi_threaded_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::multi_threaded_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map()
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map()
    {
        return make<impl::multi_threaded_observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::multi_threaded_observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::multi_threaded_observable_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }
}

namespace std
{
    template<typename K, typename V>
    struct tuple_size<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
        : integral_constant<size_t, 2>
    {
    };

    template<size_t Idx, typename K, typename V>
    struct tuple_element<Idx, winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        static_assert(Idx < 2, "key-value pair index out of bounds");
        using type = conditional_t<Idx == 0, K, V>;
    };
}

namespace winrt::Windows::Foundation::Collections
{
    template<size_t Idx, typename K, typename V>
    std::tuple_element_t<Idx, IKeyValuePair<K, V>> get(IKeyValuePair<K, V> const& kvp)
    {
        static_assert(Idx < 2, "key-value pair index out of bounds");
        if constexpr (Idx == 0)
        {
            return kvp.Key();
        }
        else
        {
            return kvp.Value();
        }
    }
}
