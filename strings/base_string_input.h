
WINRT_EXPORT namespace winrt::param
{
    struct hstring
    {
#pragma warning(suppress: 26495)
        hstring() noexcept : m_handle(nullptr) {}
        hstring(hstring const& values) = delete;
        hstring& operator=(hstring const& values) = delete;
        hstring(std::nullptr_t) = delete;

#pragma warning(suppress: 26495)
        hstring(winrt::hstring const& value) noexcept : m_handle(get_abi(value))
        {
        }

        hstring(std::wstring_view const& value) noexcept
        {
            create_string_reference(value.data(), value.size());
        }

        hstring(std::wstring const& value) noexcept
        {
            create_string_reference(value.data(), value.size());
        }

        hstring(wchar_t const* const value) noexcept
        {
            create_string_reference(value, wcslen(value));
        }

        operator winrt::hstring const&() const noexcept
        {
            return *reinterpret_cast<winrt::hstring const*>(this);
        }

    private:
        void create_string_reference(wchar_t const* const data, size_t size) noexcept
        {
            WINRT_ASSERT(size < UINT_MAX);
            auto size32 = static_cast<uint32_t>(size);

            if (size32 == 0)
            {
                m_handle = nullptr;
            }
            else
            {
                impl::create_hstring_on_stack(m_header, data, size32);
                m_handle = &m_header;
            }
        }

        void* m_handle;
        impl::hstring_header m_header;
    };

    inline void* get_abi(hstring const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T>
    using param_type = std::conditional_t<std::is_same_v<T, hstring>, param::hstring, T>;
}
