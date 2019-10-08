
namespace winrt::impl
{
    inline size_t hash_data(void const* ptr, size_t const bytes) noexcept
    {
#ifdef _WIN64
        constexpr size_t fnv_offset_basis = 14695981039346656037ULL;
        constexpr size_t fnv_prime = 1099511628211ULL;
#else
        constexpr size_t fnv_offset_basis = 2166136261U;
        constexpr size_t fnv_prime = 16777619U;
#endif
        size_t result = fnv_offset_basis;
        uint8_t const* const buffer = static_cast<uint8_t const*>(ptr);

        for (size_t next = 0; next < bytes; ++next)
        {
            result ^= buffer[next];
            result *= fnv_prime;
        }

        return result;
    }

    struct hash_base
    {
        size_t operator()(Windows::Foundation::IUnknown const& value) const noexcept
        {
            void* const abi_value = get_abi(value.try_as<Windows::Foundation::IUnknown>());
            return std::hash<void*>{}(abi_value);
        }
    };
}

namespace std
{
    template<> struct hash<winrt::hstring>
    {
        size_t operator()(winrt::hstring const& value) const noexcept
        {
            uint32_t length = 0;
            const wchar_t* const buffer = WINRT_WindowsGetStringRawBuffer(get_abi(value), &length);
            return winrt::impl::hash_data(buffer, length * sizeof(wchar_t));
        }
    };

    template<> struct hash<winrt::Windows::Foundation::IUnknown> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::IInspectable> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::IActivationFactory> : winrt::impl::hash_base {};
}
