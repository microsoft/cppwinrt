
WINRT_EXPORT namespace winrt
{
    template <typename T>
    using default_interface = typename impl::default_interface<T>::type;

    template <typename T>
    constexpr guid const& guid_of() noexcept
    {
        return impl::guid_v<default_interface<T>>;
    }

    template <typename... T>
    bool is_guid_of(guid const& id) noexcept
    {
        return ((id == guid_of<T>()) || ...);
    }
}

namespace winrt::impl
{
    template <size_t Size, typename T, size_t... Index>
    constexpr std::array<T, Size> to_array(T const* value, std::index_sequence<Index...> const) noexcept
    {
        return { value[Index]... };
    }

    template <typename T, size_t Size>
    constexpr auto to_array(std::array<T, Size> const& value) noexcept
    {
        return value;
    }

    template <size_t Size>
    constexpr auto to_array(char const(&value)[Size]) noexcept
    {
        return to_array<Size - 1>(value, std::make_index_sequence<Size - 1>());
    }

    template <size_t Size>
    constexpr auto to_array(wchar_t const(&value)[Size]) noexcept
    {
        return to_array<Size - 1>(value, std::make_index_sequence<Size - 1>());
    }

    template <typename T, size_t LeftSize, size_t RightSize, size_t... LeftIndex, size_t... RightIndex>
    constexpr std::array<T, LeftSize + RightSize> concat(
        [[maybe_unused]] std::array<T, LeftSize> const& left,
        [[maybe_unused]] std::array<T, RightSize> const& right,
        std::index_sequence<LeftIndex...> const,
        std::index_sequence<RightIndex...> const) noexcept
    {
        return { left[LeftIndex]..., right[RightIndex]... };
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto concat(std::array<T, LeftSize> const& left, std::array<T, RightSize> const& right) noexcept
    {
        return concat(left, right, std::make_index_sequence<LeftSize>(), std::make_index_sequence<RightSize>());
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto concat(std::array<T, LeftSize> const& left, T const(&right)[RightSize]) noexcept
    {
        return concat(left, to_array(right));
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto concat(T const(&left)[LeftSize], std::array<T, RightSize> const& right) noexcept
    {
        return concat(to_array(left), right);
    }

    template <typename T, size_t LeftSize>
    constexpr auto concat(std::array<T, LeftSize> const& left, T const right) noexcept
    {
        return concat(left, std::array<T, 1>{right});
    }

    template <typename T, size_t RightSize>
    constexpr auto concat(T const left, std::array<T, RightSize> const& right) noexcept
    {
        return concat(std::array<T, 1>{left}, right);
    }

    template <typename First, typename... Rest>
    constexpr auto combine(First const& first, Rest const&... rest) noexcept
    {
        if constexpr (sizeof...(rest) == 0)
        {
            return to_array(first);
        }
        else
        {
            return concat(first, combine(rest...));
        }
    }

    template <typename T, size_t LS, size_t RS, size_t... LI, size_t... RI>
    constexpr std::array<T, LS + RS - 1> zconcat_base(std::array<T, LS> const& left, std::array<T, RS> const& right, std::index_sequence<LI...> const, std::index_sequence<RI...> const) noexcept
    {
        return { left[LI]..., right[RI]..., T{} };
    }

    template <typename T, size_t LS, size_t RS>
    constexpr auto zconcat(std::array<T, LS> const& left, std::array<T, RS> const& right) noexcept
    {
        return zconcat_base(left, right, std::make_index_sequence<LS - 1>(), std::make_index_sequence<RS - 1>());
    }

    template <typename T, size_t S, size_t... I>
    constexpr std::array<T, S> to_zarray_base(T const(&value)[S], std::index_sequence<I...> const) noexcept
    {
        return { value[I]... };
    }

    template <typename T, size_t S>
    constexpr auto to_zarray(T const(&value)[S]) noexcept
    {
        return to_zarray_base(value, std::make_index_sequence<S>());
    }

    template <typename T, size_t S>
    constexpr auto to_zarray(std::array<T, S> const& value) noexcept
    {
        return value;
    }

    template <typename First, typename... Rest>
    constexpr auto zcombine(First const& first, Rest const&... rest) noexcept
    {
        if constexpr (sizeof...(rest) == 0)
        {
            return to_zarray(first);
        }
        else
        {
            return zconcat(to_zarray(first), zcombine(rest...));
        }
    }

    constexpr std::array<uint8_t, 4> to_array(uint32_t value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x000000ff), static_cast<uint8_t>((value & 0x0000ff00) >> 8), static_cast<uint8_t>((value & 0x00ff0000) >> 16), static_cast<uint8_t>((value & 0xff000000) >> 24) };
    }

    constexpr std::array<uint8_t, 2> to_array(uint16_t value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x00ff), static_cast<uint8_t>((value & 0xff00) >> 8) };
    }

    constexpr auto to_array(guid const& value) noexcept
    {
        return combine(to_array(value.Data1), to_array(value.Data2), to_array(value.Data3),
            std::array<uint8_t, 8>{ value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] });
    }

    template <typename T>
    constexpr T to_hex_digit(uint8_t value) noexcept
    {
        value &= 0xF;
        return value < 10 ? static_cast<T>('0') + value : static_cast<T>('a') + (value - 10);
    }

    template <typename T>
    constexpr std::array<T, 2> uint8_to_hex(uint8_t const value) noexcept
    {
        return { to_hex_digit<T>(value >> 4), to_hex_digit<T>(value & 0xF) };
    }

    template <typename T>
    constexpr auto uint16_to_hex(uint16_t value) noexcept
    {
        return combine(uint8_to_hex<T>(static_cast<uint8_t>(value >> 8)), uint8_to_hex<T>(value & 0xFF));
    }

    template <typename T>
    constexpr auto uint32_to_hex(uint32_t const value) noexcept
    {
        return combine(uint16_to_hex<T>(value >> 16), uint16_to_hex<T>(value & 0xFFFF));
    }

    template <typename T>
    constexpr auto to_array(guid const& value) noexcept
    {
        return combine
        (
            std::array<T, 1>{'{'},
            uint32_to_hex<T>(value.Data1), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data2), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data3), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data4[0] << 8 | value.Data4[1]), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data4[2] << 8 | value.Data4[3]),
            uint16_to_hex<T>(value.Data4[4] << 8 | value.Data4[5]),
            uint16_to_hex<T>(value.Data4[6] << 8 | value.Data4[7]),
            std::array<T, 1>{'}'}
        );
    }

    constexpr uint32_t to_guid(uint8_t a, uint8_t b, uint8_t c, uint8_t d) noexcept
    {
        return (static_cast<uint32_t>(d) << 24) | (static_cast<uint32_t>(c) << 16) | (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    constexpr uint16_t to_guid(uint8_t a, uint8_t b) noexcept
    {
        return (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    template <size_t Size>
    constexpr guid to_guid(std::array<uint8_t, Size> const& arr) noexcept
    {
        return
        {
            to_guid(arr[0], arr[1], arr[2], arr[3]),
            to_guid(arr[4], arr[5]),
            to_guid(arr[6], arr[7]),
        { arr[8], arr[9], arr[10], arr[11], arr[12], arr[13], arr[14], arr[15] }
        };
    }

    constexpr uint32_t endian_swap(uint32_t value) noexcept
    {
        return (value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24;
    }

    constexpr uint16_t endian_swap(uint16_t value) noexcept
    {
        return (value & 0xFF00) >> 8 | (value & 0x00FF) << 8;
    }

    constexpr guid endian_swap(guid value) noexcept
    {
        value.Data1 = endian_swap(value.Data1);
        value.Data2 = endian_swap(value.Data2);
        value.Data3 = endian_swap(value.Data3);
        return value;
    }

    constexpr guid set_named_guid_fields(guid value) noexcept
    {
        value.Data3 = static_cast<uint16_t>((value.Data3 & 0x0fff) | (5 << 12));
        value.Data4[0] = static_cast<uint8_t>((value.Data4[0] & 0x3f) | 0x80);
        return value;
    }

    template <typename T, size_t Size, size_t... Index>
    constexpr std::array<uint8_t, Size> char_to_byte_array(std::array<T, Size> const& value, std::index_sequence<Index...> const) noexcept
    {
        return { static_cast<uint8_t>(value[Index])... };
    }

    constexpr auto sha1_rotl(uint8_t bits, uint32_t word) noexcept
    {
        return  (word << bits) | (word >> (32 - bits));
    }

    constexpr auto sha_ch(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return (x & y) ^ ((~x) & z);
    }

    constexpr auto sha_parity(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return x ^ y ^ z;
    }

    constexpr auto sha_maj(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return (x & y) ^ (x & z) ^ (y & z);
    }

    template <size_t Size>
    constexpr std::array<uint32_t, 5> process_msg_block(std::array<uint8_t, Size> const& input, uint32_t start_pos, std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        uint32_t const K[4] = { 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6 };
        std::array<uint32_t, 80> W = {};

        uint32_t t = 0;
        uint32_t temp = 0;

        for (t = 0; t < 16; t++)
        {
            W[t] = static_cast<uint32_t>(input[start_pos + t * 4]) << 24;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 1]) << 16;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 2]) << 8;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 3]);
        }

        for (t = 16; t < 80; t++)
        {
            W[t] = sha1_rotl(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
        }

        uint32_t A = intermediate_hash[0];
        uint32_t B = intermediate_hash[1];
        uint32_t C = intermediate_hash[2];
        uint32_t D = intermediate_hash[3];
        uint32_t E = intermediate_hash[4];

        for (t = 0; t < 20; t++)
        {
            temp = sha1_rotl(5, A) + sha_ch(B, C, D) + E + W[t] + K[0];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 20; t < 40; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[1];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 40; t < 60; t++)
        {
            temp = sha1_rotl(5, A) + sha_maj(B, C, D) + E + W[t] + K[2];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 60; t < 80; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[3];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        return { intermediate_hash[0] + A, intermediate_hash[1] + B, intermediate_hash[2] + C, intermediate_hash[3] + D, intermediate_hash[4] + E };
    }

    constexpr std::array<uint8_t, 8> size_to_bytes(size_t size) noexcept
    {
        return
        {
            static_cast<uint8_t>((size & 0xff00000000000000) >> 56),
            static_cast<uint8_t>((size & 0x00ff000000000000) >> 48),
            static_cast<uint8_t>((size & 0x0000ff0000000000) >> 40),
            static_cast<uint8_t>((size & 0x000000ff00000000) >> 32),
            static_cast<uint8_t>((size & 0x00000000ff000000) >> 24),
            static_cast<uint8_t>((size & 0x0000000000ff0000) >> 16),
            static_cast<uint8_t>((size & 0x000000000000ff00) >> 8),
            static_cast<uint8_t>((size & 0x00000000000000ff) >> 0)
        };
    }

    template <size_t Size, size_t RemainingSize, size_t... Index>
    constexpr std::array<uint8_t, RemainingSize + 1> make_remaining([[maybe_unused]] std::array<uint8_t, Size> const& input, [[maybe_unused]] uint32_t start_pos, std::index_sequence<Index...>) noexcept
    {
        return { input[Index + start_pos]..., 0x80 };
    }

    template <size_t Size>
    constexpr auto make_remaining(std::array<uint8_t, Size> const& input, uint32_t start_pos) noexcept
    {
        constexpr auto remaining_size = Size % 64;
        return make_remaining<Size, remaining_size>(input, start_pos, std::make_index_sequence<remaining_size>());
    }

    template <size_t InputSize, size_t RemainderSize>
    constexpr auto make_buffer(std::array<uint8_t, RemainderSize> const& remaining_buffer) noexcept
    {
        constexpr auto message_length = (RemainderSize + 8 <= 64) ? 64 : 64 * 2;
        constexpr auto padding_length = message_length - RemainderSize - 8;

        auto padding_buffer = std::array<uint8_t, padding_length>{};
        auto length_buffer = size_to_bytes(InputSize * 8);

        return combine(remaining_buffer, padding_buffer, length_buffer);
    }

    template <size_t Size>
    constexpr std::array<uint32_t, 5> finalize_remaining_buffer(std::array<uint8_t, Size> const& input, std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        if constexpr (Size == 64)
        {
            return process_msg_block(input, 0, intermediate_hash);
        }
        else if constexpr (Size == 64 * 2)
        {
            return process_msg_block(input, 64, process_msg_block(input, 0, intermediate_hash));
        }
    }

    template <size_t... Index>
    constexpr std::array<uint8_t, 20> get_result(std::array<uint32_t, 5> const& intermediate_hash, std::index_sequence<Index...>) noexcept
    {
        return { static_cast<uint8_t>(intermediate_hash[Index >> 2] >> (8 * (3 - (Index & 0x03))))... };
    }

    constexpr auto get_result(std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        return get_result(intermediate_hash, std::make_index_sequence<20>{});
    }

    template <size_t Size>
    constexpr auto calculate_sha1(std::array<uint8_t, Size> const& input) noexcept
    {
        std::array<uint32_t, 5> intermediate_hash{ 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0 };
        uint32_t i = 0;

        while (i + 64 <= Size)
        {
            intermediate_hash = process_msg_block(input, i, intermediate_hash);
            i += 64;
        }

        intermediate_hash = finalize_remaining_buffer(make_buffer<Size>(make_remaining(input, i)), intermediate_hash);
        return get_result(intermediate_hash);
    }

    template <size_t Size>
    constexpr guid generate_guid(std::array<char, Size> const& value) noexcept
    {
        guid namespace_guid = { 0xd57af411, 0x737b, 0xc042,{ 0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee } };

        auto buffer = combine(to_array(namespace_guid), char_to_byte_array(value, std::make_index_sequence<Size>()));
        auto hash = calculate_sha1(buffer);
        auto big_endian_guid = to_guid(hash);
        auto little_endian_guid = endian_swap(big_endian_guid);
        return set_named_guid_fields(little_endian_guid);
    }

    template <typename TArg, typename... TRest>
    struct arg_collection
    {
        constexpr static auto data{ combine(to_array(signature<TArg>::data), ";", arg_collection<TRest...>::data) };
    };

    template <typename TArg>
    struct arg_collection<TArg>
    {
        constexpr static auto data{ to_array(signature<TArg>::data) };
    };

    template <typename T>
    struct pinterface_guid
    {
#pragma warning(suppress: 4307)
        static constexpr guid value{ generate_guid(signature<T>::data) };
    };

    template <typename T>
#ifdef __clang__
    inline static const auto name_v
#else
#pragma warning(suppress: 4307)
    inline constexpr auto name_v
#endif
    {
        combine
        (
            to_array<wchar_t>(guid_of<T>()),
            std::array<wchar_t, 1>{ L'\0' }
        )
    };

    constexpr size_t to_utf8_size(wchar_t const value) noexcept
    {
        if (value <= 0x7F)
        {
            return 1;
        }

        if (value <= 0x7FF)
        {
            return 2;
        }

        return 3;
    }

    constexpr size_t to_utf8(wchar_t const value, char* buffer) noexcept
    {
        if (value <= 0x7F)
        {
            *buffer = static_cast<char>(value);
            return 1;
        }

        if (value <= 0x7FF)
        {
            *buffer = static_cast<char>(0xC0 | (value >> 6));
            *(buffer + 1) = 0x80 | (value & 0x3F);
            return 2;
        }

        *buffer = 0xE0 | (value >> 12);
        *(buffer + 1) = 0x80 | ((value >> 6) & 0x3F);
        *(buffer + 2) = 0x80 | (value & 0x3F);
        return 3;
    }

    template <typename T>
    constexpr size_t to_utf8_size() noexcept
    {
        auto input = to_array(name_v<T>);
        size_t length = 0;

        for (wchar_t const element : input)
        {
            length += to_utf8_size(element);
        }

        return length;
    }

    template <typename T>
    constexpr auto to_utf8() noexcept
    {
        auto input = to_array(name_v<T>);
        std::array<char, to_utf8_size<T>()> output{};
        size_t offset{};

        for (wchar_t const element : input)
        {
            offset += to_utf8(element, &output[offset]);
        }

        return output;
    }

    template <typename T>
    constexpr guid generic_guid_v{};

    template <typename T>
    constexpr auto& basic_signature_v{""};

    template <> inline constexpr auto& basic_signature_v<bool>{"b1"};
    template <> inline constexpr auto& basic_signature_v<int8_t>{"i1"};
    template <> inline constexpr auto& basic_signature_v<int16_t>{"i2"};
    template <> inline constexpr auto& basic_signature_v<int32_t>{"i4"};
    template <> inline constexpr auto& basic_signature_v<int64_t>{"i8"};
    template <> inline constexpr auto& basic_signature_v<uint8_t>{"u1"};
    template <> inline constexpr auto& basic_signature_v<uint16_t>{"u2"};
    template <> inline constexpr auto& basic_signature_v<uint32_t>{"u4"};
    template <> inline constexpr auto& basic_signature_v<uint64_t>{"u8"};
    template <> inline constexpr auto& basic_signature_v<float>{"f4"};
    template <> inline constexpr auto& basic_signature_v<double>{"f8"};
    template <> inline constexpr auto& basic_signature_v<char16_t>{"c2"};
    template <> inline constexpr auto& basic_signature_v<guid>{"g16"};
    template <> inline constexpr auto& basic_signature_v<hstring>{"string"};
    template <> inline constexpr auto& basic_signature_v<Windows::Foundation::IInspectable>{"cinterface(IInspectable)"};

    template <> inline constexpr auto& name_v<bool>{ L"Boolean" };
    template <> inline constexpr auto& name_v<int8_t>{ L"Int8" };
    template <> inline constexpr auto& name_v<int16_t>{ L"Int16" };
    template <> inline constexpr auto& name_v<int32_t>{ L"Int32" };
    template <> inline constexpr auto& name_v<int64_t>{ L"Int64" };
    template <> inline constexpr auto& name_v<uint8_t>{ L"UInt8" };
    template <> inline constexpr auto& name_v<uint16_t>{ L"UInt16" };
    template <> inline constexpr auto& name_v<uint32_t>{ L"UInt32" };
    template <> inline constexpr auto& name_v<uint64_t>{ L"UInt64" };
    template <> inline constexpr auto& name_v<float>{ L"Single" };
    template <> inline constexpr auto& name_v<double>{ L"Double" };
    template <> inline constexpr auto& name_v<char16_t>{ L"Char16" };
    template <> inline constexpr auto& name_v<guid>{ L"Guid" };
    template <> inline constexpr auto& name_v<hstring>{ L"String" };
    template <> inline constexpr auto& name_v<hresult>{ L"Windows.Foundation.HResult" };
    template <> inline constexpr auto& name_v<event_token>{ L"Windows.Foundation.EventRegistrationToken" };
    template <> inline constexpr auto& name_v<Windows::Foundation::IInspectable>{ L"Object" };
    template <> inline constexpr auto& name_v<Windows::Foundation::TimeSpan>{ L"Windows.Foundation.TimeSpan" };
    template <> inline constexpr auto& name_v<Windows::Foundation::DateTime>{ L"Windows.Foundation.DateTime" };
    template <> inline constexpr auto& name_v<IAgileObject>{ L"IAgileObject" };

    template <> struct category<bool> { using type = basic_category; };
    template <> struct category<int8_t> { using type = basic_category; };
    template <> struct category<int16_t> { using type = basic_category; };
    template <> struct category<int32_t> { using type = basic_category; };
    template <> struct category<int64_t> { using type = basic_category; };
    template <> struct category<uint8_t> { using type = basic_category; };
    template <> struct category<uint16_t> { using type = basic_category; };
    template <> struct category<uint32_t> { using type = basic_category; };
    template <> struct category<uint64_t> { using type = basic_category; };
    template <> struct category<float> { using type = basic_category; };
    template <> struct category<double> { using type = basic_category; };
    template <> struct category<char16_t> { using type = basic_category; };
    template <> struct category<guid> { using type = basic_category; };
    template <> struct category<hresult> { using type = struct_category<int32_t>; };
    template <> struct category<event_token> { using type = struct_category<int64_t>; };
    template <> struct category<Windows::Foundation::IInspectable> { using type = basic_category; };
    template <> struct category<Windows::Foundation::TimeSpan> { using type = struct_category<int64_t>; };
    template <> struct category<Windows::Foundation::DateTime> { using type = struct_category<int64_t>; };

    template <typename T>
    struct category_signature<basic_category, T>
    {
        constexpr static auto data{ to_array(basic_signature_v<T>) };
    };

    template <typename T>
    struct category_signature<enum_category, T>
    {
        using enum_type = std::underlying_type_t<T>;
        constexpr static auto data{ combine("enum(", to_utf8<T>(), ";", signature<enum_type>::data, ")") };
    };

    template <typename... Fields, typename T>
    struct category_signature<struct_category<Fields...>, T>
    {
        constexpr static auto data{ combine("struct(", to_utf8<T>(), ";", arg_collection<Fields...>::data, ")") };
    };

    template <typename T>
    struct category_signature<class_category, T>
    {
        constexpr static auto data{ combine("rc(", to_utf8<T>(), ";", signature<winrt::default_interface<T>>::data, ")") };
    };

    template <typename... Args, typename T>
    struct category_signature<generic_category<Args...>, T>
    {
        constexpr static auto data{ combine("pinterface(", to_array<char>(generic_guid_v<T>), ";", arg_collection<Args...>::data, ")") };
    };

    template <typename T>
    struct category_signature<interface_category, T>
    {
        constexpr static auto data{ to_array<char>(guid_of<T>()) };
    };

    template <typename T>
    struct category_signature<delegate_category, T>
    {
        constexpr static auto data{ combine("delegate(", to_array<char>(guid_of<T>()), ")") };
    };

    template <size_t Size>
    constexpr std::wstring_view to_wstring_view(std::array<wchar_t, Size> const& value) noexcept
    {
        return { value.data(), Size - 1 };
    }

    template <size_t Size>
    constexpr std::wstring_view to_wstring_view(wchar_t const (&value)[Size]) noexcept
    {
        return { value, Size - 1 };
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    constexpr auto name_of() noexcept
    {
        return impl::to_wstring_view(impl::name_v<T>);
    }
}
