
WINRT_EXPORT namespace winrt::impl
{
    namespace wfc = Windows::Foundation::Collections;

    template <typename D, typename T>
    auto consume_Windows_Foundation_Collections_IIterable<D, T>::begin() const
    {
        return get_begin_iterator(static_cast<D const&>(*this));
    }
    template <typename D, typename T>
    auto consume_Windows_Foundation_Collections_IIterable<D, T>::end() const
    {
        return get_end_iterator(static_cast<D const&>(*this));
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

            std::uint32_t const m_snapshot;
        };

        std::uint32_t get_version() const noexcept
        {
            return m_version;
        }

        void increment_version() noexcept
        {
            ++m_version;
        }

    private:

        std::atomic<std::uint32_t> m_version{};
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
