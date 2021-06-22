
namespace winrt::impl
{
    struct atomic_ref_count
    {
        atomic_ref_count() noexcept = default;

        explicit atomic_ref_count(uint32_t count) noexcept : m_count(count)
        {
        }

        uint32_t operator=(uint32_t count) noexcept
        {
            return m_count = count;
        }

        uint32_t operator++() noexcept
        {
            return m_count.fetch_add(1, std::memory_order_relaxed) + 1;
        }

        uint32_t operator--() noexcept
        {
            auto const remaining = m_count.fetch_sub(1, std::memory_order_release) - 1;

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
            }
            else if (remaining < 0)
            {
                abort();
            }

            return remaining;
        }

        operator uint32_t() const noexcept
        {
            return m_count;
        }

    private:

        std::atomic<int32_t> m_count;
    };

    constexpr uint32_t hstring_reference_flag{ 1 };

    struct hstring_header
    {
        uint32_t flags;
        uint32_t length;
        uint32_t padding1;
        uint32_t padding2;
        wchar_t const* ptr;
    };

    struct shared_hstring_header : hstring_header
    {
        atomic_ref_count count;
        wchar_t buffer[1];
    };

    inline void release_hstring(hstring_header* handle) noexcept
    {
        WINRT_ASSERT((handle->flags & hstring_reference_flag) == 0);

        if (0 == --static_cast<shared_hstring_header*>(handle)->count)
        {
            WINRT_IMPL_HeapFree(WINRT_IMPL_GetProcessHeap(), 0, handle);
        }
    }

    inline shared_hstring_header* precreate_hstring_on_heap(uint32_t length)
    {
        WINRT_ASSERT(length != 0);
        uint64_t bytes_required = static_cast<uint64_t>(sizeof(shared_hstring_header)) + static_cast<uint64_t>(sizeof(wchar_t)) * static_cast<uint64_t>(length);

        if (bytes_required > UINT_MAX)
        {
            throw std::invalid_argument("length");
        }

        auto header = static_cast<shared_hstring_header*>(WINRT_IMPL_HeapAlloc(WINRT_IMPL_GetProcessHeap(), 0, static_cast<std::size_t>(bytes_required)));

        if (!header)
        {
            throw std::bad_alloc();
        }

        header->flags = 0;
        header->length = length;
        header->ptr = header->buffer;
        header->count = 1;
        header->buffer[length] = 0;
        return header;
    }

    inline hstring_header* create_hstring_on_heap(wchar_t const* value, uint32_t length)
    {
        if (!length)
        {
            return nullptr;
        }

        auto header = precreate_hstring_on_heap(length);
        memcpy_s(header->buffer, sizeof(wchar_t) * length, value, sizeof(wchar_t) * length);
        return header;
    }

    inline void create_hstring_on_stack(hstring_header& header, wchar_t const* value, uint32_t length) noexcept
    {
        WINRT_ASSERT(value);
        WINRT_ASSERT(length != 0);

        if (value[length] != 0)
        {
            abort();
        }

        header.flags = hstring_reference_flag;
        header.length = length;
        header.ptr = value;
    }

    inline hstring_header* duplicate_hstring(hstring_header* handle)
    {
        if (!handle)
        {
            return nullptr;
        }
        else if ((handle->flags & hstring_reference_flag) == 0)
        {
            ++static_cast<shared_hstring_header*>(handle)->count;
            return handle;
        }
        else
        {
            return create_hstring_on_heap(handle->ptr, handle->length);
        }
    }

    struct hstring_traits
    {
        using type = hstring_header*;

        static void close(type value) noexcept
        {
            release_hstring(value);
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };
}

WINRT_EXPORT namespace winrt
{
    struct hstring
    {
        using value_type = wchar_t;
        using size_type = uint32_t;
        using const_reference = value_type const&;
        using pointer = value_type*;
        using const_pointer = value_type const*;
        using const_iterator = const_pointer;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        hstring() noexcept = default;

        hstring(void* ptr, take_ownership_from_abi_t) noexcept : m_handle(static_cast<impl::hstring_header*>(ptr))
        {
        }

        hstring(hstring const& value) :
            m_handle(impl::duplicate_hstring(value.m_handle.get()))
        {}

        hstring& operator=(hstring const& value) &
        {
            m_handle.attach(impl::duplicate_hstring(value.m_handle.get()));
            return*this;
        }

        hstring(hstring&&) noexcept = default;
        hstring& operator=(hstring&&) & = default;
        hstring(std::nullptr_t) = delete;
        hstring& operator=(std::nullptr_t) & = delete;

        hstring(std::initializer_list<wchar_t> value) :
            hstring(value.begin(), static_cast<uint32_t>(value.size()))
        {}

        hstring(wchar_t const* value) :
            hstring(std::wstring_view(value))
        {}

        hstring(wchar_t const* value, size_type size) :
            m_handle(impl::create_hstring_on_heap(value, size))
        {}

        explicit hstring(std::wstring_view const& value) :
            hstring(value.data(), static_cast<size_type>(value.size()))
        {}

        hstring& operator=(std::wstring_view const& value) &
        {
            return *this = hstring{ value };
        }

        hstring& operator=(wchar_t const* const value) &
        {
            return *this = hstring{ value };
        }

        hstring& operator=(std::initializer_list<wchar_t> value) &
        {
            return *this = hstring{ value };
        }

        void clear() noexcept
        {
            m_handle.close();
        }

        operator std::wstring_view() const noexcept
        {
            if (m_handle)
            {
                return{ m_handle.get()->ptr, m_handle.get()->length };
            }
            else
            {
                return { L"", 0 };
            }
        }

        const_reference operator[](size_type pos) const noexcept
        {
            WINRT_ASSERT(pos < size());
            return*(begin() + pos);
        }

        const_reference front() const noexcept
        {
            WINRT_ASSERT(!empty());
            return*begin();
        }

        const_reference back() const noexcept
        {
            WINRT_ASSERT(!empty());
            return*(end() - 1);
        }

        const_pointer data() const noexcept
        {
            return c_str();
        }

        const_pointer c_str() const noexcept
        {
            if (!empty())
            {
                return begin();
            }
            else
            {
                return L"";
            }
        }

        const_iterator begin() const noexcept
        {
            if (m_handle)
            {
                return m_handle.get()->ptr;
            }
            else
            {
                return {};
            }
        }

        const_iterator cbegin() const noexcept
        {
            return begin();
        }

        const_iterator end() const noexcept
        {
            if (m_handle)
            {
                return m_handle.get()->ptr + m_handle.get()->length;
            }
            else
            {
                return {};
            }
        }

        const_iterator cend() const noexcept
        {
            return end();
        }

        const_reverse_iterator rbegin() const noexcept
        {
            return const_reverse_iterator(end());
        }

        const_reverse_iterator crbegin() const noexcept
        {
            return rbegin();
        }

        const_reverse_iterator rend() const noexcept
        {
            return const_reverse_iterator(begin());
        }

        const_reverse_iterator crend() const noexcept
        {
            return rend();
        }
        
#if __cpp_lib_starts_ends_with
        bool starts_with(wchar_t const value) const noexcept
        {
            return operator std::wstring_view().starts_with(value);
        }

        bool starts_with(std::wstring_view const another) const noexcept
        {
            return operator std::wstring_view().starts_with(another);
        }

        bool starts_with(const wchar_t* const pointer) const noexcept
        {
            return operator std::wstring_view().starts_with(pointer);
        }

        bool ends_with(wchar_t const value) const noexcept
        {
            return operator std::wstring_view().ends_with(value);
        }

        bool ends_with(std::wstring_view const another) const noexcept
        {
            return operator std::wstring_view().ends_with(another);
        }

        bool ends_with(const wchar_t* const pointer) const noexcept
        {
            return operator std::wstring_view().ends_with(pointer);
        }
#endif
        
        bool empty() const noexcept
        {
            return !m_handle;
        }

        size_type size() const noexcept
        {
            if (m_handle)
            {
                return m_handle.get()->length;
            }
            else
            {
                return 0;
            }
        }

        friend void swap(hstring& left, hstring& right) noexcept
        {
            swap(left.m_handle, right.m_handle);
        }

    private:

        handle_type<impl::hstring_traits> m_handle;
    };

    inline void* get_abi(hstring const& object) noexcept
    {
        return *(void**)(&object);
    }

    inline void** put_abi(hstring& object) noexcept
    {
        object.clear();
        return reinterpret_cast<void**>(&object);
    }

    inline void attach_abi(hstring& object, void* value) noexcept
    {
        object.clear();
        *put_abi(object) = value;
    }

    inline void* detach_abi(hstring& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    inline void* detach_abi(hstring&& object) noexcept
    {
        return detach_abi(object);
    }

    inline void copy_from_abi(hstring& object, void* value)
    {
        attach_abi(object, impl::duplicate_hstring(static_cast<impl::hstring_header*>(value)));
    }

    inline void copy_to_abi(hstring const& object, void*& value)
    {
        WINRT_ASSERT(value == nullptr);
        value = impl::duplicate_hstring(static_cast<impl::hstring_header*>(get_abi(object)));
    }

    inline void* detach_abi(std::wstring_view const& value)
    {
        return impl::create_hstring_on_heap(value.data(), static_cast<uint32_t>(value.size()));
    }

    inline void* detach_abi(wchar_t const* const value)
    {
        return impl::create_hstring_on_heap(value, static_cast<uint32_t>(wcslen(value)));
    }
}

namespace winrt::impl
{
    template <> struct abi<hstring>
    {
        using type = void*;
    };

    template <> struct category<hstring>
    {
        using type = basic_category;
    };

    struct hstring_builder
    {
        hstring_builder(hstring_builder const&) = delete;
        hstring_builder& operator=(hstring_builder const&) = delete;

        explicit hstring_builder(uint32_t const size) :
            m_handle(impl::precreate_hstring_on_heap(size))
        {
        }

        wchar_t* data() noexcept
        {
            return const_cast<wchar_t*>(m_handle.get()->ptr);
        }

        hstring to_hstring()
        {
            return { m_handle.detach(), take_ownership_from_abi };
        }

    private:

        handle_type<impl::hstring_traits> m_handle;
    };

    template <typename T>
    struct bind_in
    {
        bind_in(T const& object) noexcept : object(object)
        {
        }

        T const& object;

        template <typename R>
        operator R const& () const noexcept
        {
            return reinterpret_cast<R const&>(object);
        }
    };

    template <typename T>
    struct bind_out
    {
        bind_out(T& object) noexcept : object(object)
        {
        }

        T& object;

        operator void** () const noexcept
        {
            if constexpr (std::is_same_v<T, hstring>)
            {
                object.clear();
            }
            else
            {
                object = nullptr;
            }

            return (void**)(&object);
        }

        template <typename R>
        operator R* () const noexcept
        {
            if constexpr (!std::is_trivially_destructible_v<T>)
            {
                object = {};
            }

            return reinterpret_cast<R*>(&object);
        }
    };

    template <typename T>
    inline hstring hstring_convert(T value)
    {
        static_assert(std::is_arithmetic_v<T>);
        char temp[32];
        std::to_chars_result result;
        if constexpr (std::is_integral_v<T>)
        {
            result = std::to_chars(std::begin(temp), std::end(temp), value);
        }
        else
        {
            // Floating point
            result = std::to_chars(std::begin(temp), std::end(temp), value, std::chars_format::general);
        }
        WINRT_ASSERT(result.ec == std::errc{});
        wchar_t buffer[32];
        auto end = std::copy(std::begin(temp), result.ptr, buffer);
        return hstring{ std::wstring_view{ buffer, static_cast<std::size_t>(end - buffer)} };
    }
}

WINRT_EXPORT namespace winrt
{
    inline bool embedded_null(hstring const& value) noexcept
    {
        return std::any_of(value.begin(), value.end(), [](auto item)
            {
                return item == 0;
            });
    }

    inline hstring to_hstring(uint8_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(int8_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(uint16_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(int16_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(uint32_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(int32_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(uint64_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(int64_t value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(float value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(double value)
    {
        return impl::hstring_convert(value);
    }

    inline hstring to_hstring(char16_t value)
    {
        wchar_t buffer[2] = { value, 0 };
        return hstring{ std::wstring_view{ buffer, 1 } };
    }

    inline hstring to_hstring(hstring const& value) noexcept
    {
        return value;
    }

    template <typename T, std::enable_if_t<std::is_same_v<T, bool>, int> = 0>
    hstring to_hstring(T const value)
    {
        if (value)
        {
            return hstring{ L"true" };
        }
        else
        {
            return hstring{ L"false" };
        }
    }

    inline hstring to_hstring(guid const& value)
    {
        wchar_t buffer[40];
        //{00000000-0000-0000-0000-000000000000}
        swprintf_s(buffer, L"{%08x-%04hx-%04hx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx}",
            value.Data1, value.Data2, value.Data3, value.Data4[0], value.Data4[1],
            value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7]);
        return hstring{ buffer };
    }

    template <typename T, std::enable_if_t<std::is_convertible_v<T, std::string_view>, int> = 0>
    hstring to_hstring(T const& value)
    {
        std::string_view const view(value);
        int const size = WINRT_IMPL_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), nullptr, 0);

        if (size == 0)
        {
            return{};
        }

        impl::hstring_builder result(size);
        WINRT_VERIFY_(size, WINRT_IMPL_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), result.data(), size));
        return result.to_hstring();
    }

    inline std::string to_string(std::wstring_view value)
    {
        int const size = WINRT_IMPL_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), nullptr, 0, nullptr, nullptr);

        if (size == 0)
        {
            return{};
        }

        std::string result(size, '?');
        WINRT_VERIFY_(size, WINRT_IMPL_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), result.data(), size, nullptr, nullptr));
        return result;
    }
}
