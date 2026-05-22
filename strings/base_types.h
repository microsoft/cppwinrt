
WINRT_EXPORT namespace winrt::impl
{
    using ptp_io = struct tp_io*;
    using ptp_timer = struct tp_timer*;
    using ptp_wait = struct tp_wait*;
    using ptp_pool = struct tp_pool*;
    using srwlock = struct srwlock_*;
    using condition_variable = struct condition_variable_*;
    using bstr = wchar_t*;

    using filetime_period = std::ratio_multiply<std::ratio<100>, std::nano>;
    struct IAgileObject;

    struct com_callback_args
    {
        std::uint32_t reserved1;
        std::uint32_t reserved2;
        void* data;
    };

    template <typename T>
    constexpr std::uint8_t hex_to_uint(T const c)
    {
        if (c >= '0' && c <= '9')
        {
            return static_cast<std::uint8_t>(c - '0');
        }
        else if (c >= 'A' && c <= 'F')
        {
            return static_cast<std::uint8_t>(10 + c - 'A');
        }
        else if (c >= 'a' && c <= 'f')
        {
            return static_cast<std::uint8_t>(10 + c - 'a');
        }
        else 
        {
            throw std::invalid_argument("Character is not a hexadecimal digit");
        }
    }

    template <typename T>
    constexpr std::uint8_t hex_to_uint8(T const a, T const b)
    {
        return (hex_to_uint(a) << 4) | hex_to_uint(b);
    }

    constexpr std::uint16_t uint8_to_uint16(std::uint8_t a, std::uint8_t b)
    {
        return (static_cast<std::uint16_t>(a) << 8) | static_cast<std::uint16_t>(b);
    }

    constexpr std::uint32_t uint8_to_uint32(std::uint8_t a, std::uint8_t b, std::uint8_t c, std::uint8_t d)
    {
        return (static_cast<std::uint32_t>(uint8_to_uint16(a, b)) << 16) |
                static_cast<std::uint32_t>(uint8_to_uint16(c, d));
    }
}

WINRT_EXPORT namespace winrt
{
    struct event_token;
    struct hstring;
    struct clock;

    struct hresult
    {
        std::int32_t value{};

        constexpr hresult() noexcept = default;

        constexpr hresult(std::int32_t const value) noexcept : value(value)
        {
        }

        constexpr operator std::int32_t() const noexcept
        {
            return value;
        }
    };

    struct guid
    {
    private:

        template <typename TStringView>
        static constexpr guid parse(TStringView value)
        {
            // Handle {} and ()
            if (value.size() == 38 && ((value[0] == '{' && value[37] == '}') || (value[0] == '(' && value[37] == ')')))
            {
                value.remove_prefix(1);
                value.remove_suffix(1);
            }

            if (value.size() != 36 || value[8] != '-' || value[13] != '-' || value[18] != '-' || value[23] != '-')
            {
                throw std::invalid_argument("value is not a valid GUID string");
            }

            return
            {
                impl::uint8_to_uint32
                (
                    impl::hex_to_uint8(value[0], value[1]),
                    impl::hex_to_uint8(value[2], value[3]),
                    impl::hex_to_uint8(value[4], value[5]),
                    impl::hex_to_uint8(value[6], value[7])
                ),
                impl::uint8_to_uint16
                (
                    impl::hex_to_uint8(value[9], value[10]),
                    impl::hex_to_uint8(value[11], value[12])
                ),
                impl::uint8_to_uint16
                (
                    impl::hex_to_uint8(value[14], value[15]),
                    impl::hex_to_uint8(value[16], value[17])
                ),
                {
                    impl::hex_to_uint8(value[19], value[20]),
                    impl::hex_to_uint8(value[21], value[22]),
                    impl::hex_to_uint8(value[24], value[25]),
                    impl::hex_to_uint8(value[26], value[27]),
                    impl::hex_to_uint8(value[28], value[29]),
                    impl::hex_to_uint8(value[30], value[31]),
                    impl::hex_to_uint8(value[32], value[33]),
                    impl::hex_to_uint8(value[34], value[35]),
                }
            };
        }

    public:

        std::uint32_t Data1;
        std::uint16_t Data2;
        std::uint16_t Data3;
        std::uint8_t  Data4[8];

        guid() noexcept = default;

        constexpr guid(std::uint32_t const Data1, std::uint16_t const Data2, std::uint16_t const Data3, std::array<std::uint8_t, 8> const& Data4) noexcept :
            Data1(Data1),
            Data2(Data2),
            Data3(Data3),
            Data4{ Data4[0], Data4[1], Data4[2], Data4[3], Data4[4], Data4[5], Data4[6], Data4[7] }
        {
        }

        template<bool dummy = true>
        constexpr guid(GUID const& value) noexcept : guid(convert<dummy>(value)) { }

        operator GUID const&() const noexcept
        {
            return reinterpret_cast<GUID const&>(*this);
        }

        constexpr explicit guid(std::string_view const value) :
            guid(parse(value))
        {
        }

        constexpr explicit guid(std::wstring_view const value) :
            guid(parse(value))
        {
        }

    private:
        template<bool, typename T>
        constexpr static guid convert(T const& value) noexcept
        {
            return { value.Data1, value.Data2, value.Data3,
                { value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] }
            };
        }
    };

    inline bool operator==(guid const& left, guid const& right) noexcept
    {
        return !std::memcmp(&left, &right, sizeof(left));
    }

    inline bool operator!=(guid const& left, guid const& right) noexcept
    {
        return !(left == right);
    }

    inline bool operator<(guid const& left, guid const& right) noexcept
    {
        return std::memcmp(&left, &right, sizeof(left)) < 0;
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class TrustLevel : std::int32_t
    {
        BaseTrust,
        PartialTrust,
        FullTrust
    };

    struct IUnknown;
    struct IInspectable;
    struct IActivationFactory;
    using TimeSpan = std::chrono::duration<std::int64_t, impl::filetime_period>;
    using DateTime = std::chrono::time_point<clock, TimeSpan>;
}

WINRT_EXPORT namespace winrt::impl
{
#ifdef WINRT_IMPL_IUNKNOWN_DEFINED
    using hresult_type = long;
    using count_type = unsigned long;
    using guid_type = GUID;
#else
    using hresult_type = std::int32_t;
    using count_type = std::uint32_t;
    using guid_type = guid;
#endif

#ifdef __IInspectable_INTERFACE_DEFINED__
    using hstring_type = HSTRING;
    using trust_level_type = ::TrustLevel;
#else
    using hstring_type = void*;
    using trust_level_type = Windows::Foundation::TrustLevel;
#endif

    inline constexpr hresult error_ok{ 0 }; // S_OK
    inline constexpr hresult error_fail{ static_cast<hresult>(0x80004005) }; // E_FAIL
    inline constexpr hresult error_access_denied{ static_cast<hresult>(0x80070005) }; // E_ACCESSDENIED
    inline constexpr hresult error_wrong_thread{ static_cast<hresult>(0x8001010E) }; // RPC_E_WRONG_THREAD
    inline constexpr hresult error_not_implemented{ static_cast<hresult>(0x80004001) }; // E_NOTIMPL
    inline constexpr hresult error_invalid_argument{ static_cast<hresult>(0x80070057) }; // E_INVALIDARG
    inline constexpr hresult error_out_of_bounds{ static_cast<hresult>(0x8000000B) }; // E_BOUNDS
    inline constexpr hresult error_no_interface{ static_cast<hresult>(0x80004002) }; // E_NOINTERFACE
    inline constexpr hresult error_class_not_available{ static_cast<hresult>(0x80040111) }; // CLASS_E_CLASSNOTAVAILABLE
    inline constexpr hresult error_class_not_registered{ static_cast<hresult>(0x80040154) }; // REGDB_E_CLASSNOTREG
    inline constexpr hresult error_changed_state{ static_cast<hresult>(0x8000000C) }; // E_CHANGED_STATE
    inline constexpr hresult error_illegal_method_call{ static_cast<hresult>(0x8000000E) }; // E_ILLEGAL_METHOD_CALL
    inline constexpr hresult error_illegal_state_change{ static_cast<hresult>(0x8000000D) }; // E_ILLEGAL_STATE_CHANGE
    inline constexpr hresult error_illegal_delegate_assignment{ static_cast<hresult>(0x80000018) }; // E_ILLEGAL_DELEGATE_ASSIGNMENT
    inline constexpr hresult error_canceled{ static_cast<hresult>(0x800704C7) }; // HRESULT_FROM_WIN32(ERROR_CANCELLED)
    inline constexpr hresult error_bad_alloc{ static_cast<hresult>(0x8007000E) }; // E_OUTOFMEMORY
    inline constexpr hresult error_not_initialized{ static_cast<hresult>(0x800401F0) }; // CO_E_NOTINITIALIZED
    inline constexpr hresult error_file_not_found{ static_cast<hresult>(0x80070002) }; // HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND)
}
