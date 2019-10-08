
namespace winrt::impl
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
        uint32_t reserved1;
        uint32_t reserved2;
        void* data;
    };
}

WINRT_EXPORT namespace winrt
{
    struct event_token;
    struct hstring;
    struct clock;

    struct hresult
    {
        int32_t value{};

        constexpr hresult() noexcept = default;

        constexpr hresult(int32_t const value) noexcept : value(value)
        {
        }

        constexpr operator int32_t() const noexcept
        {
            return value;
        }
    };

    struct guid
    {
        uint32_t Data1;
        uint16_t Data2;
        uint16_t Data3;
        uint8_t  Data4[8];

        guid() noexcept = default;

        constexpr guid(uint32_t const Data1, uint16_t const Data2, uint16_t const Data3, std::array<uint8_t, 8> const& Data4) noexcept :
            Data1(Data1),
            Data2(Data2),
            Data3(Data3),
            Data4{ Data4[0], Data4[1], Data4[2], Data4[3], Data4[4], Data4[5], Data4[6], Data4[7] }
        {
        }

#ifdef __IUnknown_INTERFACE_DEFINED__

        constexpr guid(GUID const& value) noexcept :
            Data1(value.Data1),
            Data2(value.Data2),
            Data3(value.Data3),
            Data4{ value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] }
        {

        }

        operator GUID const&() const noexcept
        {
            return reinterpret_cast<GUID const&>(*this);
        }

#endif
    };

    inline bool operator==(guid const& left, guid const& right) noexcept
    {
        return !memcmp(&left, &right, sizeof(guid));
    }

    inline bool operator!=(guid const& left, guid const& right) noexcept
    {
        return !(left == right);
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class TrustLevel : int32_t
    {
        BaseTrust,
        PartialTrust,
        FullTrust
    };

    struct IUnknown;
    struct IInspectable;
    struct IActivationFactory;
    using TimeSpan = std::chrono::duration<int64_t, impl::filetime_period>;
    using DateTime = std::chrono::time_point<clock, TimeSpan>;
}

namespace winrt::impl
{
#ifdef __IUnknown_INTERFACE_DEFINED__
    using hresult_type = long;
    using count_type = unsigned long;
    using guid_type = GUID;
#else
    using hresult_type = int32_t;
    using count_type = uint32_t;
    using guid_type = guid;
#endif

#ifdef __IInspectable_INTERFACE_DEFINED__
    using hstring_type = HSTRING;
    using trust_level_type = ::TrustLevel;
#else
    using hstring_type = void*;
    using trust_level_type = Windows::Foundation::TrustLevel;
#endif

    constexpr hresult error_ok{ 0 }; // S_OK
    constexpr hresult error_fail{ static_cast<hresult>(0x80004005) }; // E_FAIL
    constexpr hresult error_access_denied{ static_cast<hresult>(0x80070005) }; // E_ACCESSDENIED
    constexpr hresult error_wrong_thread{ static_cast<hresult>(0x8001010E) }; // RPC_E_WRONG_THREAD
    constexpr hresult error_not_implemented{ static_cast<hresult>(0x80004001) }; // E_NOTIMPL
    constexpr hresult error_invalid_argument{ static_cast<hresult>(0x80070057) }; // E_INVALIDARG
    constexpr hresult error_out_of_bounds{ static_cast<hresult>(0x8000000B) }; // E_BOUNDS
    constexpr hresult error_no_interface{ static_cast<hresult>(0x80004002) }; // E_NOINTERFACE
    constexpr hresult error_class_not_available{ static_cast<hresult>(0x80040111) }; // CLASS_E_CLASSNOTAVAILABLE
    constexpr hresult error_changed_state{ static_cast<hresult>(0x8000000C) }; // E_CHANGED_STATE
    constexpr hresult error_illegal_method_call{ static_cast<hresult>(0x8000000E) }; // E_ILLEGAL_METHOD_CALL
    constexpr hresult error_illegal_state_change{ static_cast<hresult>(0x8000000D) }; // E_ILLEGAL_STATE_CHANGE
    constexpr hresult error_illegal_delegate_assignment{ static_cast<hresult>(0x80000018) }; // E_ILLEGAL_DELEGATE_ASSIGNMENT
    constexpr hresult error_canceled{ static_cast<hresult>(0x800704C7) }; // HRESULT_FROM_WIN32(ERROR_CANCELLED)
    constexpr hresult error_bad_alloc{ static_cast<hresult>(0x8007000E) }; // E_OUTOFMEMORY
    constexpr hresult error_not_initialized{ static_cast<hresult>(0x800401F0) }; // CO_E_NOTINITIALIZED
}
