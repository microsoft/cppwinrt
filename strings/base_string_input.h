
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
            if (0 != create_string_reference(value.data(), value.size()))
            {
                std::terminate();
            }
        }

        hstring(std::wstring const& value) noexcept
        {
            WINRT_VERIFY_(0, create_string_reference(value.data(), value.size()));
        }

        hstring(wchar_t const* const value) noexcept
        {
            WINRT_VERIFY_(0, create_string_reference(value, wcslen(value)));
        }

        operator winrt::hstring const&() const noexcept
        {
            return *reinterpret_cast<winrt::hstring const*>(this);
        }

    private:
        int32_t create_string_reference(wchar_t const* const data, size_t size) noexcept
        {
            auto size32 = static_cast<uint32_t>(size);
            if (size32 == 0)
            {
                m_handle = nullptr;
                return 0;
            }
            else
            {
                return WINRT_WindowsCreateStringReference(data, size32, &m_header, &m_handle);
            }
        }

        struct header
        {
            union
            {
                void* Reserved1;
#ifdef _WIN64
                char Reserved2[24];
#else
                char Reserved2[20];
#endif
            } Reserved;
        };
        
        void* m_handle;
        header m_header;
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
