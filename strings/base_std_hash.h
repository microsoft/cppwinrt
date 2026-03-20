
namespace winrt::impl
{
    inline std::size_t hash_data(void const* ptr, std::size_t const bytes) noexcept
    {
#ifdef _WIN64
        constexpr std::size_t fnv_offset_basis = 14695981039346656037ULL;
        constexpr std::size_t fnv_prime = 1099511628211ULL;
#else
        constexpr std::size_t fnv_offset_basis = 2166136261U;
        constexpr std::size_t fnv_prime = 16777619U;
#endif
        std::size_t result = fnv_offset_basis;
        std::uint8_t const* const buffer = static_cast<std::uint8_t const*>(ptr);

        for (std::size_t next = 0; next < bytes; ++next)
        {
            result ^= buffer[next];
            result *= fnv_prime;
        }

        return result;
    }

    struct hash_base
    {
        std::size_t operator()(Windows::Foundation::IUnknown const& value) const noexcept
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
        std::size_t operator()(winrt::hstring const& value) const noexcept
        {
            return std::hash<std::wstring_view>{}(value);
        }
    };

    template<> struct hash<winrt::Windows::Foundation::IUnknown> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::IInspectable> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::IActivationFactory> : winrt::impl::hash_base {};
    
    template<> struct hash<winrt::guid>
    {
        std::size_t operator()(winrt::guid const& value) const noexcept
        {
            return winrt::impl::hash_data(&value, sizeof(value));
        }
    };
}
