
WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct array_view
    {
        using value_type = T;
        using size_type = std::uint32_t;
        using reference = value_type&;
        using const_reference = value_type const&;
        using pointer = value_type*;
        using const_pointer = value_type const*;
        using iterator = value_type*;
        using const_iterator = value_type const*;
        using reverse_iterator = std::reverse_iterator<iterator>;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        array_view() noexcept = default;

        array_view(pointer data, size_type size) noexcept :
            m_data(data),
            m_size(size)
        {}

        array_view(pointer first, pointer last) noexcept :
            m_data(first),
            m_size(static_cast<size_type>(last - first))
        {}

        array_view(std::initializer_list<value_type> value) noexcept :
            array_view(value.begin(), static_cast<size_type>(value.size()))
        {}

#ifdef __cpp_lib_span
        template <typename C, std::size_t extent>
        array_view(std::span<C, extent> span) noexcept :
            array_view(span.data(), static_cast<size_type>(span.size())) 
        {
            WINRT_ASSERT(span.size() <= (std::numeric_limits<size_type>::max)());
        }

        operator std::span<T>() const noexcept
        {
            return { m_data, m_size };
        }
#endif

        template <typename C, size_type N>
        array_view(C(&value)[N]) noexcept :
            array_view(value, N)
        {}

        template <typename C>
        array_view(std::vector<C>& value) noexcept :
            array_view(data(value), static_cast<size_type>(value.size()))
        {
        }

        template <typename C>
        array_view(std::vector<C> const& value) noexcept :
            array_view(data(value), static_cast<size_type>(value.size()))
        {
        }

        template <typename C, std::size_t N>
        array_view(std::array<C, N>& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C, std::size_t N>
        array_view(std::array<C, N> const& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename OtherType>
        array_view(array_view<OtherType> const& other,
            std::enable_if_t<std::is_convertible_v<OtherType(*)[], T(*)[]>, int> = 0) noexcept :
            array_view(other.data(), other.size())
        {}

        reference operator[](size_type const pos) noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        const_reference operator[](size_type const pos) const noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        reference at(size_type const pos)
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        const_reference at(size_type const pos) const
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        reference front() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        const_reference front() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        reference back() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        const_reference back() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        pointer data() const noexcept
        {
            return m_data;
        }

        iterator begin() noexcept
        {
            return m_data;
        }

        const_iterator begin() const noexcept
        {
            return m_data;
        }

        const_iterator cbegin() const noexcept
        {
            return m_data;
        }

        iterator end() noexcept
        {
            return m_data + m_size;
        }

        const_iterator end() const noexcept
        {
            return m_data + m_size;
        }

        const_iterator cend() const noexcept
        {
            return m_data + m_size;
        }

        reverse_iterator rbegin() noexcept
        {
            return reverse_iterator(end());
        }

        const_reverse_iterator rbegin() const noexcept
        {
            return const_reverse_iterator(end());
        }

        const_reverse_iterator crbegin() const noexcept
        {
            return rbegin();
        }

        reverse_iterator rend() noexcept
        {
            return reverse_iterator(begin());
        }

        const_reverse_iterator rend() const noexcept
        {
            return const_reverse_iterator(begin());
        }

        const_reverse_iterator crend() const noexcept
        {
            return rend();
        }

        bool empty() const noexcept
        {
            return m_size == 0;
        }

        size_type size() const noexcept
        {
            return m_size;
        }

    protected:

        pointer m_data{ nullptr };
        size_type m_size{ 0 };

    private:

        template <typename C>
        auto data(std::vector<C> const& value) noexcept
        {
            static_assert(!std::is_same_v<C, bool>, "Cannot use std::vector<bool> as an array_view. Consider std::array or std::unique_ptr<bool[]>.");
            return value.data();
        }

        template <typename C>
        auto data(std::vector<C>& value) noexcept
        {
            static_assert(!std::is_same_v<C, bool>, "Cannot use std::vector<bool> as an array_view. Consider std::array or std::unique_ptr<bool[]>.");
            return value.data();
        }
    };

    template <typename C, std::size_t N> array_view(C(&value)[N]) -> array_view<C>;
    template <typename C> array_view(std::vector<C>& value) -> array_view<C>;
    template <typename C> array_view(std::vector<C> const& value) -> array_view<C const>;
    template <typename C, std::size_t N> array_view(std::array<C, N>& value) -> array_view<C>;
    template <typename C, std::size_t N> array_view(std::array<C, N> const& value) -> array_view<C const>;

#ifdef __cpp_lib_span
    template <typename C, std::size_t extent> array_view(std::span<C, extent>& value) -> array_view<C>;
    template <typename C, std::size_t extent> array_view(std::span<C, extent> const& value) -> array_view<C const>;
#endif

    template <typename T>
    struct com_array : array_view<T>
    {
        using typename array_view<T>::value_type;
        using typename array_view<T>::size_type;
        using typename array_view<T>::reference;
        using typename array_view<T>::const_reference;
        using typename array_view<T>::pointer;
        using typename array_view<T>::const_pointer;
        using typename array_view<T>::iterator;
        using typename array_view<T>::const_iterator;
        using typename array_view<T>::reverse_iterator;
        using typename array_view<T>::const_reverse_iterator;

        com_array(com_array const&) = delete;
        com_array& operator=(com_array const&) = delete;

        com_array() noexcept = default;

        explicit com_array(size_type const count) :
            com_array(count, value_type())
        {}

        com_array(void* ptr, std::uint32_t const count, take_ownership_from_abi_t) noexcept :
            array_view<T>(static_cast<value_type*>(ptr), static_cast<value_type*>(ptr) + count)
        {
        }

        com_array(size_type const count, value_type const& value)
        {
            alloc(count);
            std::uninitialized_fill_n(this->m_data, count, value);
        }

        template <typename InIt, typename = std::void_t<typename std::iterator_traits<InIt>::difference_type>>
        com_array(InIt first, InIt last)
        {
            alloc(static_cast<size_type>(std::distance(first, last)));
            std::uninitialized_copy(first, last, this->begin());
        }

        template <typename U>
        explicit com_array(std::vector<U> const& value) :
            com_array(value.begin(), value.end())
        {}

        template <typename U, std::size_t N>
        explicit com_array(std::array<U, N> const& value) :
            com_array(value.begin(), value.end())
        {}

#ifdef __cpp_lib_span
        template <typename U, std::size_t extent>
        explicit com_array(std::span<U, extent> span) noexcept : 
            com_array(span.data(), span.data() + span.size()) 
        {
            WINRT_ASSERT(span.size() <= (std::numeric_limits<size_type>::max)());
        }
#endif

        template <typename U, std::size_t N>
        explicit com_array(U const(&value)[N]) :
            com_array(value, value + N)
        {}

        com_array(std::initializer_list<value_type> value) :
            com_array(value.begin(), value.end())
        {}

        template <typename U, typename = std::enable_if_t<std::is_convertible_v<U, T>>>
        com_array(std::initializer_list<U> value) :
            com_array(value.begin(), value.end())
        {}

        com_array(com_array&& other) noexcept :
            array_view<T>(other.m_data, other.m_size)
        {
            other.m_data = nullptr;
            other.m_size = 0;
        }

        com_array& operator=(com_array&& other) noexcept
        {
            clear();
            this->m_data = other.m_data;
            this->m_size = other.m_size;
            other.m_data = nullptr;
            other.m_size = 0;
            return*this;
        }

        ~com_array() noexcept
        {
            clear();
        }

        void clear() noexcept
        {
            if (this->m_data == nullptr) { return; }

            std::destroy(this->begin(), this->end());

            WINRT_IMPL_CoTaskMemFree(this->m_data);
            this->m_data = nullptr;
            this->m_size = 0;
        }

        friend void swap(com_array& left, com_array& right) noexcept
        {
            std::swap(left.m_data, right.m_data);
            std::swap(left.m_size, right.m_size);
        }

    private:

        void alloc(size_type const size)
        {
            WINRT_ASSERT(this->empty());

            if (0 != size)
            {
                this->m_data = static_cast<value_type*>(WINRT_IMPL_CoTaskMemAlloc(size * sizeof(value_type)));

                if (this->m_data == nullptr)
                {
                    throw std::bad_alloc();
                }

                this->m_size = size;
            }
        }

        std::pair<std::uint32_t, impl::arg_out<T>> detach_abi() noexcept
        {
#if defined(_MSC_VER) && !defined(__clang__)
            // https://github.com/microsoft/cppwinrt/pull/1165
            std::pair<std::uint32_t, impl::arg_out<T>> result;
            std::memset(&result, 0, sizeof(result));
            result.first = this->size();
            result.second = *reinterpret_cast<impl::arg_out<T>*>(this);
            std::memset(this, 0, sizeof(com_array<T>));
#else
            std::pair<std::uint32_t, impl::arg_out<T>> result(this->size(), *reinterpret_cast<impl::arg_out<T>*>(this));
            this->m_data = nullptr;
            this->m_size = 0;
#endif
            return result;
        }

        template <typename U>
        friend std::pair<std::uint32_t, impl::arg_out<U>> detach_abi(com_array<U>& object) noexcept;
    };

    template <typename C> com_array(std::uint32_t, C const&) -> com_array<std::decay_t<C>>;
    template <typename InIt, typename = std::void_t<typename std::iterator_traits<InIt>::difference_type>>
    com_array(InIt, InIt) -> com_array<std::decay_t<typename std::iterator_traits<InIt>::value_type>>;
    template <typename C> com_array(std::vector<C> const&) -> com_array<std::decay_t<C>>;
    template <std::size_t N, typename C> com_array(std::array<C, N> const&) -> com_array<std::decay_t<C>>;
    template <std::size_t N, typename C> com_array(C const(&)[N]) -> com_array<std::decay_t<C>>;
    template <typename C> com_array(std::initializer_list<C>) -> com_array<std::decay_t<C>>;

#ifdef __cpp_lib_span
    template <typename C, std::size_t extent> com_array(std::span<C, extent> const& value) -> com_array<std::decay_t<C>>;
#endif


    namespace impl
    {
        template <typename T, typename U>
        inline constexpr bool array_comparable = std::is_same_v<std::remove_cv_t<T>, std::remove_cv_t<U>>;
    }

    template <typename T, typename U, 
        std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator==(array_view<T> const& left, array_view<U> const& right) noexcept
    {
        return std::equal(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T, typename U,
        std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator<(array_view<T> const& left, array_view<U> const& right) noexcept
    {
        return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T, typename U, std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator!=(array_view<T> const& left, array_view<U> const& right) noexcept { return !(left == right); }
    template <typename T, typename U,std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator>(array_view<T> const& left, array_view<U> const& right) noexcept { return right < left; }
    template <typename T, typename U,std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator<=(array_view<T> const& left, array_view<U> const& right) noexcept { return !(right < left); }
    template <typename T, typename U, std::enable_if_t<impl::array_comparable<T, U>, int> = 0>
    bool operator>=(array_view<T> const& left, array_view<U> const& right) noexcept { return !(left < right); }

    template <typename T>
    auto get_abi(array_view<T> object) noexcept
    {
        auto data = object.size() ? object.data() : (T*)alignof(T);

        if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, T>)
        {
            return (void**)data;
        }
        else
        {
            return reinterpret_cast<impl::arg_out<std::remove_const_t<T>>>(const_cast<std::remove_const_t<T>*>(data));
        }
    }

    template <typename T>
    auto put_abi(array_view<T> object) noexcept
    {
        if constexpr (!std::is_trivially_destructible_v<T>)
        {
            std::fill(object.begin(), object.end(), impl::empty_value<T>());
        }

        return get_abi(object);
    }

    template<typename T>
    auto put_abi(com_array<T>& object) noexcept
    {
        object.clear();
        return reinterpret_cast<impl::arg_out<T>*>(&object);
    }

    template <typename T>
    std::pair<std::uint32_t, impl::arg_out<T>> detach_abi(com_array<T>& object) noexcept
    {
        return object.detach_abi();
    }

    template <typename T>
    auto detach_abi(com_array<T>&& object) noexcept
    {
        return detach_abi(object);
    }
}

WINRT_EXPORT namespace winrt::impl
{
    template <typename T>
    struct array_size_proxy
    {
        array_size_proxy& operator=(array_size_proxy const&) = delete;

        array_size_proxy(com_array<T>& value) noexcept : m_value(value)
        {}

        ~array_size_proxy() noexcept
        {
            WINRT_ASSERT(m_value.data() || (!m_value.data() && m_size == 0));
            *reinterpret_cast<std::uint32_t*>(reinterpret_cast<std::uintptr_t*>(&m_value) + 1) = m_size;
        }

        operator std::uint32_t*() noexcept
        {
            return &m_size;
        }

        operator unsigned long*() noexcept
        {
            return reinterpret_cast<unsigned long*>(&m_size);
        }

    private:

        com_array<T>& m_value;
        std::uint32_t m_size{ 0 };
    };

    template<typename T>
    array_size_proxy<T> put_size_abi(com_array<T>& object) noexcept
    {
        return array_size_proxy<T>(object);
    }

    template <typename T>
    struct com_array_proxy
    {
        com_array_proxy(std::uint32_t* size, winrt::impl::arg_out<T>* value) noexcept : m_size(size), m_value(value)
        {}

        ~com_array_proxy() noexcept
        {
            std::tie(*m_size, *m_value) = detach_abi(m_temp);
        }

        operator com_array<T>&() noexcept
        {
            return m_temp;
        }

        com_array_proxy(com_array_proxy const&) noexcept
        {
            // A Visual C++ compiler bug (550631) requires the copy constructor even though it is never called.
            WINRT_ASSERT(false);
        }

    private:

        std::uint32_t* m_size;
        arg_out<T>* m_value;
        com_array<T> m_temp;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    auto detach_abi(std::uint32_t* __valueSize, impl::arg_out<T>* value) noexcept
    {
        return impl::com_array_proxy<T>(__valueSize, value);
    }

    inline hstring get_class_name(Windows::Foundation::IInspectable const& object)
    {
        void* value{};
        check_hresult((*(impl::inspectable_abi**)&object)->GetRuntimeClassName(&value));
        return { value, take_ownership_from_abi };
    }

    inline com_array<guid> get_interfaces(Windows::Foundation::IInspectable const& object)
    {
        com_array<guid> value;
        check_hresult((*(impl::inspectable_abi**)&object)->GetIids(impl::put_size_abi(value), put_abi(value)));
        return value;
    }

    inline Windows::Foundation::TrustLevel get_trust_level(Windows::Foundation::IInspectable const& object)
    {
        Windows::Foundation::TrustLevel value{};
        check_hresult((*(impl::inspectable_abi**)&object)->GetTrustLevel(&value));
        return value;
    }
}
