
namespace winrt::impl
{
    template <typename T>
    struct fast_iterator
    {
        using iterator_concept = std::random_access_iterator_tag;
        using iterator_category = std::input_iterator_tag;
        using value_type = decltype(std::declval<T>().GetAt(0));
        using difference_type = std::ptrdiff_t;
        using pointer = void;
        using reference = value_type;

        fast_iterator() noexcept = default;

        fast_iterator(T const& collection, std::uint32_t const index) noexcept :
            m_collection(&collection),
            m_index(index)
        {}

        fast_iterator& operator++() noexcept
        {
            ++m_index;
            return *this;
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
            return *this;
        }

        fast_iterator operator--(int) noexcept
        {
            auto previous = *this;
            --m_index;
            return previous;
        }

        fast_iterator& operator+=(difference_type n) noexcept
        {
            m_index += static_cast<std::uint32_t>(n);
            return *this;
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
            WINRT_ASSERT(m_collection == other.m_collection);
            return static_cast<difference_type>(m_index) - static_cast<difference_type>(other.m_index);
        }

        reference operator*() const
        {
            return m_collection->GetAt(m_index);
        }

        reference operator[](difference_type n) const
        {
            return m_collection->GetAt(m_index + static_cast<std::uint32_t>(n));
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

        bool operator>(fast_iterator const& other) const noexcept
        {
            WINRT_ASSERT(m_collection == other.m_collection);
            return m_index > other.m_index;
        }

        bool operator!=(fast_iterator const& other) const noexcept
        {
            return !(*this == other);
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

        T const* m_collection = nullptr;
        std::uint32_t m_index = 0;
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
    auto get_begin_iterator(T const& collection) -> decltype(collection.First())
    {
        auto result = collection.First();

        if (!result.HasCurrent())
        {
            return {};
        }

        return result;
    }

    template <typename T, std::enable_if_t<!has_GetAt<T>::value, int> = 0>
    auto get_end_iterator([[maybe_unused]] T const& collection) noexcept -> decltype(collection.First())
    {
        return {};
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    fast_iterator<T> get_begin_iterator(T const& collection) noexcept
    {
        return { collection, 0 };
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    fast_iterator<T> get_end_iterator(T const& collection)
    {
        return { collection, collection.Size() };
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    auto rbegin(T const& collection)
    {
        return std::make_reverse_iterator(get_end_iterator(collection));
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value, int> = 0>
    auto rend(T const& collection)
    {
        return std::make_reverse_iterator(get_begin_iterator(collection));
    }

    using std::begin;
    using std::end;
}
