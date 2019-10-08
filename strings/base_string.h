
namespace winrt::impl
{
    inline void* duplicate_string(void* other)
    {
        void* result = nullptr;
        check_hresult(WINRT_WindowsDuplicateString(other, &result));
        return result;
    }

    inline void* create_string(wchar_t const* value, uint32_t const length)
    {
        void* result = nullptr;
        check_hresult(WINRT_WindowsCreateString(value, length, &result));
        return result;
    }

    inline bool embedded_null(void* value) noexcept
    {
        int32_t result = 0;
        WINRT_VERIFY_(0, WINRT_WindowsStringHasEmbeddedNull(value, &result));
        return 0 != result;
    }

    struct hstring_traits
    {
        using type = void*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(0, WINRT_WindowsDeleteString(value));
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

        hstring(void* ptr, take_ownership_from_abi_t) noexcept : m_handle(ptr)
        {
        }

        hstring(hstring const& value) :
            m_handle(impl::duplicate_string(value.m_handle.get()))
        {}

        hstring& operator=(hstring const& value)
        {
            m_handle.attach(impl::duplicate_string(value.m_handle.get()));
            return*this;
        }

        hstring(hstring&&) noexcept = default;
        hstring& operator=(hstring&&) = default;
        hstring(std::nullptr_t) = delete;

        hstring(std::initializer_list<wchar_t> value) :
            hstring(value.begin(), static_cast<uint32_t>(value.size()))
        {}

        hstring(wchar_t const* value) :
            hstring(std::wstring_view(value))
        {}

        hstring(wchar_t const* value, size_type size) :
            m_handle(impl::create_string(value, size))
        {}

        explicit hstring(std::wstring_view const& value) :
            hstring(value.data(), static_cast<size_type>(value.size()))
        {}

        hstring& operator=(std::wstring_view const& value)
        {
            return *this = hstring{ value };
        }

        hstring& operator=(wchar_t const* const value)
        {
            return *this = hstring{ value };
        }

        hstring& operator=(std::initializer_list<wchar_t> value)
        {
            return *this = hstring{ value };
        }

        void clear() noexcept
        {
            m_handle.close();
        }

        operator std::wstring_view() const noexcept
        {
            uint32_t size;
            wchar_t const* data = WINRT_WindowsGetStringRawBuffer(m_handle.get(), &size);
            return std::wstring_view(data, size);
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
            return begin();
        }

        const_pointer c_str() const noexcept
        {
            return begin();
        }

        const_iterator begin() const noexcept
        {
            return WINRT_WindowsGetStringRawBuffer(m_handle.get(), nullptr);
        }

        const_iterator cbegin() const noexcept
        {
            return begin();
        }

        const_iterator end() const noexcept
        {
            uint32_t length = 0;
            const_pointer buffer = WINRT_WindowsGetStringRawBuffer(m_handle.get(), &length);
            return buffer + length;
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

        bool empty() const noexcept
        {
            return !m_handle;
        }

        size_type size() const noexcept
        {
            return WINRT_WindowsGetStringLen(m_handle.get());
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
        attach_abi(object, impl::duplicate_string(value));
    }

    inline void copy_to_abi(hstring const& object, void*& value)
    {
        WINRT_ASSERT(value == nullptr);
        value = impl::duplicate_string(get_abi(object));
    }

    inline void* detach_abi(std::wstring_view const& value)
    {
        return impl::create_string(value.data(), static_cast<uint32_t>(value.size()));
    }

    inline void* detach_abi(wchar_t const* const value)
    {
        return impl::create_string(value, static_cast<uint32_t>(wcslen(value)));
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

        explicit hstring_builder(uint32_t const size)
        {
            check_hresult(WINRT_WindowsPreallocateStringBuffer(size, &m_data, &m_buffer));
        }

        ~hstring_builder() noexcept
        {
            if (m_buffer != nullptr)
            {
                WINRT_VERIFY_(0, WINRT_WindowsDeleteStringBuffer(m_buffer));
            }
        }

        wchar_t* data() noexcept
        {
            WINRT_ASSERT(m_buffer != nullptr);
            return m_data;
        }

        hstring to_hstring()
        {
            WINRT_ASSERT(m_buffer != nullptr);
            void* result{};
            check_hresult(WINRT_WindowsPromoteStringBuffer(m_buffer, &result));
            m_buffer = nullptr;
            return { result, take_ownership_from_abi };
        }

    private:

        wchar_t* m_data{ nullptr };
        void* m_buffer{ nullptr };
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
        return impl::embedded_null(get_abi(value));
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
        int const size = WINRT_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), nullptr, 0);

        if (size == 0)
        {
            return{};
        }

        impl::hstring_builder result(size);
        WINRT_VERIFY_(size, WINRT_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), result.data(), size));
        return result.to_hstring();
    }

    inline std::string to_string(std::wstring_view value)
    {
        int const size = WINRT_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), nullptr, 0, nullptr, nullptr);

        if (size == 0)
        {
            return{};
        }

        std::string result(size, '?');
        WINRT_VERIFY_(size, WINRT_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), result.data(), size, nullptr, nullptr));
        return result;
    }
}
