
namespace winrt::impl
{
    namespace wfc = Windows::Foundation::Collections;

    template <typename T>
    struct fast_iterator
    {
        using iterator_concept = std::random_access_iterator_tag;
        using iterator_category = std::input_iterator_tag;
        using value_type = decltype(std::declval<T>().GetAt(0));
        using difference_type = ptrdiff_t;
        using pointer = value_type*;
        using reference = value_type;

        fast_iterator() noexcept : m_collection(nullptr), m_index(0) {}

        fast_iterator(T const& collection, uint32_t const index) noexcept :
        m_collection(&collection),
            m_index(index)
        {}

        fast_iterator& operator++() noexcept
        {
            ++m_index;
            return*this;
        }

        fast_iterator operator++(int) noexcept
        {
            auto previous = *this;
            ++m_index;
            return previous;
        }

        fast_iterator& operator--() noexcept
        {
            --m_index;
            return*this;
        }

        fast_iterator operator--(int) noexcept
        {
            auto previous = *this;
            --m_index;
            return previous;
        }

        fast_iterator& operator+=(difference_type n) noexcept
        {
            m_index += static_cast<uint32_t>(n);
            return*this;
        }

        fast_iterator operator+(difference_type n) const noexcept
        {
            return fast_iterator(*this) += n;
        }

        fast_iterator& operator-=(difference_type n) noexcept
        {
            return *this += -n;
        }

        fast_iterator operator-(difference_type n) const noexcept
        {
            return *this + -n;
        }

        difference_type operator-(fast_iterator const& other) const noexcept
        {
            return static_cast<difference_type>(m_index) - static_cast<difference_type>(other.m_index);
        }

        reference operator*() const
        {
            return m_collection->GetAt(m_index);
        }

        reference operator[](difference_type n) const
        {
            return m_collection->GetAt(m_index + static_cast<uint32_t>(n));
        }

        bool operator==(fast_iterator const& other) const noexcept
        {
            WINRT_ASSERT(m_collection == other.m_collection);
            return m_index == other.m_index;
        }

        bool operator<(fast_iterator const& other) const noexcept
        {
            WINRT_ASSERT(m_collection == other.m_collection);
            return m_index < other.m_index;
        }

        bool operator!=(fast_iterator const& other) const noexcept
        {
            return !(*this == other);
        }

        bool operator>(fast_iterator const& other) const noexcept
        {
            return !(*this < other);
        }

        bool operator<=(fast_iterator const& other) const noexcept
        {
            return !(*this > other);
        }

        bool operator>=(fast_iterator const& other) const noexcept
        {
            return !(*this < other);
        }

        friend fast_iterator operator+(difference_type n, fast_iterator it) noexcept
        {
            return it + n;
        }

        friend fast_iterator operator-(difference_type n, fast_iterator it) noexcept
        {
            return it - n;
        }

    private:

        T const* m_collection{};
        uint32_t m_index{};
    };

    template <typename T>
    class has_GetAt
    {
        template <typename U, typename = decltype(std::declval<U>().GetAt(0))> static constexpr bool get_value(int) { return true; }
        template <typename> static constexpr bool get_value(...) { return false; }

    public:

        static constexpr bool value = get_value<T>(0);
    };

    template <typename T, std::enable_if_t<!has_GetAt<T>::value, int> = 0>
    auto begin(T const& collection) -> decltype(collection.First())
    {
        auto result = collection.First();

        if (!result.HasCurrent())
        {
            return {};
        }

        return result;
    }

    template <typename T, std::enable_if_t<!has_GetAt<T>::value, int> = 0>
    auto end([[maybe_unused]] T const& collection) noexcept -> decltype(collection.First())
    {
        return {};
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    fast_iterator<T> begin(T const& collection) noexcept
    {
        return { collection, 0 };
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    fast_iterator<T> end(T const& collection)
    {
        return { collection, collection.Size() };
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    auto rbegin(T const& collection)
    {
        return std::make_reverse_iterator(end(collection));
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    auto rend(T const& collection)
    {
        return std::make_reverse_iterator(begin(collection));
    }

    template <typename T>
    struct key_value_pair;

    template <typename K, typename V>
    struct key_value_pair<wfc::IKeyValuePair<K, V>> : implements<key_value_pair<wfc::IKeyValuePair<K, V>>, wfc::IKeyValuePair<K, V>>
    {
        key_value_pair(K key, V value) :
            m_key(std::move(key)),
            m_value(std::move(value))
        {
        }

        K Key() const
        {
            return m_key;
        }

        V Value() const
        {
            return m_value;
        }

    private:

        K const m_key;
        V const m_value;
    };

    template <typename T>
    struct is_key_value_pair : std::false_type {};

    template <typename K, typename V>
    struct is_key_value_pair<wfc::IKeyValuePair<K, V>> : std::true_type {};

    struct input_scope
    {
        void invalidate_scope() noexcept
        {
            m_invalid = true;
        }

        void check_scope() const
        {
            if (m_invalid)
            {
                throw hresult_illegal_method_call();
            }
        }

    private:

        bool m_invalid{};
    };

    struct no_collection_version
    {
        struct iterator_type
        {
            iterator_type(no_collection_version const&) noexcept
            {
            }

            void check_version(no_collection_version const&) const noexcept
            {
            }
        };
    };

    struct collection_version
    {
        struct iterator_type
        {
            iterator_type(collection_version const& version) noexcept :
                m_snapshot(version.get_version())
            {
            }

            void check_version(collection_version const& version) const
            {
                if (version.get_version() != m_snapshot)
                {
                    throw hresult_changed_state();
                }
            }

        private:

            uint32_t const m_snapshot;
        };

        uint32_t get_version() const noexcept
        {
            return m_version;
        }

        void increment_version() noexcept
        {
            ++m_version;
        }

    private:

        std::atomic<uint32_t> m_version{};
    };

    template <typename T>
    struct range_container
    {
        T const first;
        T const last;

        auto begin() const noexcept
        {
            return first;
        }

        auto end() const noexcept
        {
            return last;
        }
    };
}
