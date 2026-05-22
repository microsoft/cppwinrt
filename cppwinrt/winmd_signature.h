#pragma once

// Shared utilities for computing WinRT parameterized interface GUIDs from metadata.
// Used by both cppwinrt.exe (code generator) and the natvis visualizer.
// Only depends on winmd_reader.h — no dependency on the cppwinrt writer or natvis types.

namespace winmd_signature
{
    using namespace winmd::reader;

    // ---- visit helper (works in both cppwinrt.exe and natvis contexts) ----
    template <typename...T> struct overloaded : T... { using T::operator()...; };
    template <typename...T> overloaded(T...) -> overloaded<T...>;

    template <typename V, typename...C>
    auto call(V&& variant, C&&...c)
    {
        return std::visit(overloaded<C...>{ std::forward<C>(c)... }, std::forward<V>(variant));
    }

    // ---- GUID value type (plain struct, no dependency on winrt::guid) ----
    struct guid_value
    {
        std::uint32_t Data1;
        std::uint16_t Data2;
        std::uint16_t Data3;
        std::uint8_t Data4[8];
    };

    // ---- Extract a GUID from a TypeDef's GuidAttribute ----
    inline guid_value extract_guid(TypeDef const& type)
    {
        auto attribute = get_attribute(type, "Windows.Foundation.Metadata", "GuidAttribute");
        if (!attribute)
        {
            winmd::impl::throw_invalid("'Windows.Foundation.Metadata.GuidAttribute' attribute for type '",
                type.TypeNamespace(), ".", type.TypeName(), "' not found");
        }
        auto args = attribute.Value().FixedArgs();
        return
        {
            std::get<std::uint32_t>(std::get<ElemSig>(args[0].value).value),
            std::get<std::uint16_t>(std::get<ElemSig>(args[1].value).value),
            std::get<std::uint16_t>(std::get<ElemSig>(args[2].value).value),
            {
                std::get<std::uint8_t>(std::get<ElemSig>(args[3].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[4].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[5].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[6].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[7].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[8].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[9].value).value),
                std::get<std::uint8_t>(std::get<ElemSig>(args[10].value).value)
            }
        };
    }

    // ---- Format a GUID as a lowercase signature string: {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} ----
    namespace impl
    {
        inline void write_hex(char*& p, std::uint8_t value)
        {
            static constexpr char digits[] = "0123456789abcdef";
            *p++ = digits[value >> 4];
            *p++ = digits[value & 0xF];
        }

        inline void write_hex(char*& p, std::uint16_t value)
        {
            write_hex(p, static_cast<std::uint8_t>(value >> 8));
            write_hex(p, static_cast<std::uint8_t>(value & 0xFF));
        }

        inline void write_hex(char*& p, std::uint32_t value)
        {
            write_hex(p, static_cast<std::uint16_t>(value >> 16));
            write_hex(p, static_cast<std::uint16_t>(value & 0xFFFF));
        }
    }

    inline std::string format_guid_signature(guid_value const& g)
    {
        // {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} = 38 chars + null
        char buf[39];
        char* p = buf;
        *p++ = '{';
        impl::write_hex(p, g.Data1); *p++ = '-';
        impl::write_hex(p, g.Data2); *p++ = '-';
        impl::write_hex(p, g.Data3); *p++ = '-';
        impl::write_hex(p, g.Data4[0]);
        impl::write_hex(p, g.Data4[1]); *p++ = '-';
        impl::write_hex(p, g.Data4[2]);
        impl::write_hex(p, g.Data4[3]);
        impl::write_hex(p, g.Data4[4]);
        impl::write_hex(p, g.Data4[5]);
        impl::write_hex(p, g.Data4[6]);
        impl::write_hex(p, g.Data4[7]);
        *p++ = '}';
        return { buf, static_cast<std::size_t>(p - buf) };
    }

    // ---- SHA1 computation ----
    struct sha1_context
    {
        static constexpr std::uint32_t K[4] = { 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6 };

        static std::uint32_t rotl(std::uint8_t bits, std::uint32_t word)
        {
            return (word << bits) | (word >> (32 - bits));
        }

        static std::array<std::uint32_t, 5> process_block(std::uint8_t const* input, std::size_t start, std::array<std::uint32_t, 5> hash)
        {
            std::array<std::uint32_t, 80> W{};
            for (std::size_t t = 0; t < 16; ++t)
            {
                W[t] = static_cast<std::uint32_t>(input[start + t * 4]) << 24 |
                       static_cast<std::uint32_t>(input[start + t * 4 + 1]) << 16 |
                       static_cast<std::uint32_t>(input[start + t * 4 + 2]) << 8 |
                       static_cast<std::uint32_t>(input[start + t * 4 + 3]);
            }
            for (std::size_t t = 16; t < 80; ++t)
            {
                W[t] = rotl(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
            }

            auto A = hash[0], B = hash[1], C = hash[2], D = hash[3], E = hash[4];
            std::uint32_t temp;
            for (std::size_t t = 0; t < 20; ++t)
            {
                temp = rotl(5, A) + ((B & C) ^ ((~B) & D)) + E + W[t] + K[0];
                E = D; D = C; C = rotl(30, B); B = A; A = temp;
            }
            for (std::size_t t = 20; t < 40; ++t)
            {
                temp = rotl(5, A) + (B ^ C ^ D) + E + W[t] + K[1];
                E = D; D = C; C = rotl(30, B); B = A; A = temp;
            }
            for (std::size_t t = 40; t < 60; ++t)
            {
                temp = rotl(5, A) + ((B & C) ^ (B & D) ^ (C & D)) + E + W[t] + K[2];
                E = D; D = C; C = rotl(30, B); B = A; A = temp;
            }
            for (std::size_t t = 60; t < 80; ++t)
            {
                temp = rotl(5, A) + (B ^ C ^ D) + E + W[t] + K[3];
                E = D; D = C; C = rotl(30, B); B = A; A = temp;
            }

            return { hash[0] + A, hash[1] + B, hash[2] + C, hash[3] + D, hash[4] + E };
        }

        static std::array<std::uint8_t, 20> compute(std::vector<std::uint8_t> const& input)
        {
            std::array<std::uint32_t, 5> hash{ 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0 };
            std::size_t i = 0;

            while (i + 64 <= input.size())
            {
                hash = process_block(input.data(), i, hash);
                i += 64;
            }

            auto bit_length = input.size() * 8;
            auto remainder_size = input.size() % 64;

            std::array<std::uint8_t, 128> final_block{};
            std::copy(input.begin() + i, input.end(), final_block.begin());
            final_block[remainder_size] = 0x80;

            std::size_t block_count;
            if (remainder_size + 1 + 8 <= 64)
            {
                block_count = 64;
            }
            else
            {
                block_count = 128;
            }

            for (int b = 7; b >= 0; --b)
            {
                final_block[block_count - 8 + (7 - b)] = static_cast<std::uint8_t>((bit_length >> (b * 8)) & 0xFF);
            }

            hash = process_block(final_block.data(), 0, hash);
            if (block_count == 128)
            {
                hash = process_block(final_block.data(), 64, hash);
            }

            std::array<std::uint8_t, 20> result{};
            for (std::size_t idx = 0; idx < 20; ++idx)
            {
                result[idx] = static_cast<std::uint8_t>(hash[idx >> 2] >> (8 * (3 - (idx & 0x03))));
            }
            return result;
        }
    };

    // ---- Compute a UUID v5 GUID from a WinRT type signature string ----
    inline guid_value compute_guid_from_signature(std::string const& sig)
    {
        constexpr std::uint8_t namespace_bytes[] =
        {
            // {d57af411-737b-c042-abae-878b1e16adee} in little-endian byte order
            0x11, 0xf4, 0x7a, 0xd5,
            0x7b, 0x73,
            0x42, 0xc0,
            0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee
        };

        std::vector<std::uint8_t> buffer(std::begin(namespace_bytes), std::end(namespace_bytes));
        buffer.insert(buffer.end(), sig.begin(), sig.end());

        auto hash = sha1_context::compute(buffer);

        guid_value result;
        result.Data1 = static_cast<std::uint32_t>(hash[0]) << 24 | static_cast<std::uint32_t>(hash[1]) << 16 |
                        static_cast<std::uint32_t>(hash[2]) << 8 | static_cast<std::uint32_t>(hash[3]);
        result.Data2 = static_cast<std::uint16_t>(hash[4]) << 8 | hash[5];
        result.Data3 = static_cast<std::uint16_t>(hash[6]) << 8 | hash[7];
        std::copy(hash.begin() + 8, hash.begin() + 16, result.Data4);

        // Endian swap
        result.Data1 = ((result.Data1 & 0xFF000000) >> 24) | ((result.Data1 & 0x00FF0000) >> 8) |
                        ((result.Data1 & 0x0000FF00) << 8) | ((result.Data1 & 0x000000FF) << 24);
        result.Data2 = static_cast<std::uint16_t>((result.Data2 >> 8) | (result.Data2 << 8));
        result.Data3 = static_cast<std::uint16_t>((result.Data3 >> 8) | (result.Data3 << 8));

        // Set version=5 and variant
        result.Data3 = static_cast<std::uint16_t>((result.Data3 & 0x0FFF) | (5 << 12));
        result.Data4[0] = static_cast<std::uint8_t>((result.Data4[0] & 0x3F) | 0x80);

        return result;
    }

    // ---- Resolution context for substituting GenericTypeIndex with concrete TypeSig values ----
    using type_arg_stack = std::vector<std::vector<TypeSig>>;

    // ---- signature_builder: computes WinRT type signature strings from metadata ----
    // Accepts an optional resolution stack to substitute GenericTypeIndex.
    // Operates entirely on metadata types (TypeDef, TypeRef, TypeSpec, TypeSig).
    struct signature_builder
    {
        static std::string get_signature(coded_index<TypeDefOrRef> const& type, type_arg_stack const& resolve = {})
        {
            switch (type.type())
            {
            case TypeDefOrRef::TypeDef:
                return get_signature(type.TypeDef());
            case TypeDefOrRef::TypeRef:
                return get_signature(type.TypeRef());
            default:
                return get_signature(type.TypeSpec().Signature().GenericTypeInst(), resolve);
            }
        }

        static std::string get_signature(GenericTypeInstSig const& type, type_arg_stack const& resolve = {})
        {
            std::string sig = "pinterface(" + get_guid_string(type.GenericType());
            for (auto&& arg : type.GenericArgs())
            {
                sig += ";";
                sig += get_signature(arg, resolve);
            }
            sig += ")";
            return sig;
        }

    private:
        static std::string get_full_name(TypeDef const& type)
        {
            return std::string(type.TypeNamespace()) + "." + std::string(type.TypeName());
        }

        static std::string get_default_interface_signature(TypeDef const& type)
        {
            for (auto&& impl : type.InterfaceImpl())
            {
                if (get_attribute(impl, "Windows.Foundation.Metadata", "DefaultAttribute"))
                {
                    return "rc(" + get_full_name(type) + ";" + get_signature(impl.Interface()) + ")";
                }
            }
            return {};
        }

        static std::string get_enum_signature(TypeDef const& type)
        {
            bool is_flags = static_cast<bool>(get_attribute(type, "System", "FlagsAttribute"));
            return "enum(" + get_full_name(type) + ";" + (is_flags ? "u4" : "i4") + ")";
        }

        static std::string get_struct_signature(TypeDef const& type)
        {
            std::string sig = "struct(" + get_full_name(type);
            for (auto& field : type.FieldList())
            {
                sig += ";";
                sig += get_signature(field.Signature().Type());
            }
            sig += ")";
            return sig;
        }

        static std::string get_guid_string(TypeDef const& type)
        {
            return format_guid_signature(extract_guid(type));
        }

        static std::string get_guid_string(coded_index<TypeDefOrRef> const& type)
        {
            switch (type.type())
            {
            case TypeDefOrRef::TypeDef:
                return get_guid_string(type.TypeDef());
            case TypeDefOrRef::TypeRef:
                return get_guid_string(find_required(type.TypeRef()));
            default:
                return get_signature(type.TypeSpec().Signature().GenericTypeInst());
            }
        }

        static std::string get_element_signature(ElementType t)
        {
            switch (t)
            {
            case ElementType::Boolean: return "b1";
            case ElementType::Char: return "c2";
            case ElementType::I1: return "i1";
            case ElementType::U1: return "u1";
            case ElementType::I2: return "i2";
            case ElementType::U2: return "u2";
            case ElementType::I4: return "i4";
            case ElementType::U4: return "u4";
            case ElementType::I8: return "i8";
            case ElementType::U8: return "u8";
            case ElementType::R4: return "f4";
            case ElementType::R8: return "f8";
            case ElementType::String: return "string";
            case ElementType::Object: return "cinterface(IInspectable)";
            default: return {};
            }
        }

        static std::string get_signature(TypeSig::value_type const& type, type_arg_stack const& resolve = {})
        {
            return call(type,
                [&](ElementType t) -> std::string { return get_element_signature(t); },
                [&](GenericTypeIndex idx) -> std::string
                {
                    if (!resolve.empty() && idx.index < resolve.back().size())
                    {
                        type_arg_stack parent_resolve(resolve.begin(), resolve.end() - 1);
                        return get_signature(resolve.back()[idx.index], parent_resolve);
                    }
                    return {};
                },
                [](GenericMethodTypeIndex) -> std::string { return {}; },
                [&](auto&& t) -> std::string { return get_signature(t, resolve); });
        }

        static std::string get_signature(TypeDef const& type)
        {
            switch (get_category(type))
            {
            case category::interface_type:  return get_guid_string(type);
            case category::class_type:      return get_default_interface_signature(type);
            case category::enum_type:       return get_enum_signature(type);
            case category::struct_type:     return get_struct_signature(type);
            case category::delegate_type:   return "delegate(" + get_guid_string(type) + ")";
            default: return {};
            }
        }

        static std::string get_signature(TypeRef const& type)
        {
            if (type.TypeNamespace() == "System" && type.TypeName() == "Guid")
                return "g16";
            return get_signature(find_required(type));
        }

        static std::string get_signature(TypeSig const& sig, type_arg_stack const& resolve = {})
        {
            return get_signature(sig.Type(), resolve);
        }
    };
}
