#include "pch.h"

using namespace winrt;
using namespace winmd::reader;
using namespace std::literals;
using namespace Microsoft::VisualStudio::Debugger;

static std::map<coded_index<TypeDefOrRef>, std::pair<TypeDef, std::wstring>> _cache;

template <typename T>
static bool has_attribute(T const& row, std::string_view const& type_namespace, std::string_view const& type_name) noexcept
{
    return static_cast<bool>(get_attribute(row, type_namespace, type_name));
}

template <typename V, typename...C>
static auto call(V&& variant, C&& ...call)
{
    return std::visit(overloaded<C...>{ std::forward<C>(call)... }, std::forward<V>(variant));
}

static std::string get_full_name(TypeDef const& type)
{
    return std::string(type.TypeNamespace()) + "." + std::string(type.TypeName());
}

static guid get_guid(TypeDef const& type)
{
    auto attribute = get_attribute(type, "Windows.Foundation.Metadata", "GuidAttribute");
    if (!attribute)
    {
        throw_invalid("'Windows.Foundation.Metadata.GuidAttribute' attribute for type '", get_full_name(type), "' not found");
    }
    auto args = attribute.Value().FixedArgs();
    return 
    {
        std::get<uint32_t>(std::get<ElemSig>(args[0].value).value),
        std::get<uint16_t>(std::get<ElemSig>(args[1].value).value),
        std::get<uint16_t>(std::get<ElemSig>(args[2].value).value),
        {
            std::get<uint8_t>(std::get<ElemSig>(args[3].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[4].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[5].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[6].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[7].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[8].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[9].value).value),
            std::get<uint8_t>(std::get<ElemSig>(args[10].value).value)
        }
    };
}

static std::wstring format_guid(guid guid)
{
    std::wstring guid_str(68, L'?');
    int count = swprintf_s(guid_str.data(), guid_str.size() + 1,
        L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
        guid.Data1,
        guid.Data2,
        guid.Data3,
        guid.Data4[0],
        guid.Data4[1],
        guid.Data4[2],
        guid.Data4[3],
        guid.Data4[4],
        guid.Data4[5],
        guid.Data4[6],
        guid.Data4[7]);
    guid_str.resize(count);
    return guid_str;
}

static auto get_default_interface(TypeDef const& type)
{
    auto impls = type.InterfaceImpl();
    for (auto&& impl : impls)
    {
        if (has_attribute(impl, "Windows.Foundation.Metadata"sv, "DefaultAttribute"sv))
        {
            return impl.Interface();
        }
    }
    throw_invalid("Type '", get_full_name(type), "' does not have a default interface");
}

struct signature_generator
{
    static std::string get_signature(coded_index<TypeDefOrRef> const& type)
    {
        switch (type.type())
        {
        case TypeDefOrRef::TypeDef:
            return get_signature(type.TypeDef());
        case TypeDefOrRef::TypeRef:
            return get_signature(type.TypeRef());
        default: //case TypeDefOrRef::TypeSpec:
            return get_signature(type.TypeSpec().Signature().GenericTypeInst());
        }
    }

private:
    static std::string get_class_signature(TypeDef const& type)
    {
        return std::string("rc(") + get_full_name(type) + ";" + get_signature(get_default_interface(type)) + ")";
    }

    static auto get_enum_signature(TypeDef const& type)
    {
        bool is_flags = has_attribute(type, "System"sv, "FlagsAttribute"sv);
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

    static std::string get_guid_signature(TypeDef const& type)
    {
        auto guid = get_guid(type);
        std::string guid_str(70, '?');
        int count = sprintf_s(guid_str.data(), guid_str.size() + 1,
            "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
            guid.Data1,
            guid.Data2,
            guid.Data3,
            guid.Data4[0],
            guid.Data4[1],
            guid.Data4[2],
            guid.Data4[3],
            guid.Data4[4],
            guid.Data4[5],
            guid.Data4[6],
            guid.Data4[7]);
        guid_str.resize(count);
        return guid_str;
    }

    static std::string get_guid_signature(coded_index<TypeDefOrRef> const& type)
    {
        switch (type.type())
        {
        case TypeDefOrRef::TypeDef:
            return get_guid_signature(type.TypeDef());
        case TypeDefOrRef::TypeRef:
            return get_guid_signature(find_required(type.TypeRef()));
        default: //case TypeDefOrRef::TypeSpec:
            return get_guid_signature(type.TypeSpec().Signature().GenericTypeInst().GenericType());
        }
    }

    static std::string get_signature(GenericTypeInstSig const& type)
    {
        std::string sig = "pinterface(" + get_guid_signature(type.GenericType());
        for (auto&& arg : type.GenericArgs())
        {
            sig += ";";
            sig += get_signature(arg);
        }
        sig += ")";
        return sig;
    }

    static std::string get_signature(TypeSig::value_type const& type)
    {
        return call(type, [&](ElementType type) -> std::string
        {
            switch (type)
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
                default: assert(false); return "";
            }
        },
        [&](auto&& type)
        {
            return get_signature(type);
        });
    }

    static std::string get_signature(TypeDef const& type)
    {
        switch (get_category(type))
        {
        case category::interface_type:
            return get_guid_signature(type);
        case category::class_type:
            return get_class_signature(type);
        case category::enum_type:
            return get_enum_signature(type);
        case category::struct_type:
            return get_struct_signature(type);
        default: //case category::delegate_type: 
            return "delegate(" + get_guid_signature(type) + ")";
        }
    }

    static std::string get_signature(TypeRef const& type)
    {
        if (type.TypeNamespace() == "System" && type.TypeName() == "Guid")
        {
            return "g16";
        }
        return get_signature(find_required(type));
    }

    static std::string get_signature(TypeSig const& signature)
    {
        return get_signature(signature.Type());
    }
};

using namespace winrt::impl;

static auto calculate_sha1(std::vector<uint8_t> const& input)
{
    auto input_size = input.size();

    std::array<uint32_t, 5> intermediate_hash{ 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0 };
    uint32_t i = 0;
    while (i + 64 <= input_size)
    {
        intermediate_hash = process_msg_block(input.data(), i, intermediate_hash);
        i += 64;
    }

    auto length = size_to_bytes(input_size * 8);
    auto remainder_size = (input_size % 64) + 1;
    if (remainder_size + 8 <= 64)
    {
        std::array<uint8_t, 64> remainder{};
        std::copy(input.begin() + i, input.end(), remainder.begin());
        remainder[remainder_size - 1] = 0x80;
        std::copy(length.begin(), length.end(), remainder.end() - 8);
        intermediate_hash = process_msg_block(remainder.data(), 0, intermediate_hash);
    }
    else
    {
        std::array<uint8_t, 64 * 2> remainder{};
        std::copy(input.begin() + i, input.end(), remainder.begin());
        remainder[remainder_size - 1] = 0x80;
        std::copy(length.begin(), length.end(), remainder.end() - 8);
        intermediate_hash = process_msg_block(remainder.data(), 0, intermediate_hash);
        intermediate_hash = process_msg_block(remainder.data(), 64, intermediate_hash);
    }

    return get_result(intermediate_hash);
}

static guid generate_guid(coded_index<TypeDefOrRef> const& type)
{
    constexpr guid namespace_guid = { 0xd57af411, 0x737b, 0xc042,{ 0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee } };
    constexpr auto namespace_bytes = winrt::impl::to_array(namespace_guid);

    std::vector<uint8_t> buffer{ namespace_bytes.begin(), namespace_bytes.end() };
    auto sig = signature_generator::get_signature(type);
    buffer.insert(buffer.end(), sig.begin(), sig.end());

    return set_named_guid_fields(endian_swap(to_guid(calculate_sha1(buffer))));
}

std::pair<TypeDef, std::wstring> ResolveTypeInterface(DkmProcess* process, winmd::reader::TypeSig const& typeSig)
{
    coded_index<TypeDefOrRef> index;
    if (auto ptrIndex = std::get_if<coded_index<TypeDefOrRef>>(&typeSig.Type()))
    {
        index = *ptrIndex;
    }
    else if (auto* ptrGeneric = std::get_if<GenericTypeInstSig>(&typeSig.Type()))
    {
        index = ptrGeneric->GenericType();
    }

    // TODO: Cache on the whole TypeSig, not just the generic index
    if (auto found = _cache.find(index); found != _cache.end())
    {
        return found->second;
    }

    TypeDef type = ResolveType(process, index);
    if (!type)
    {
        return {};
    }

    auto guid = index.type() == TypeDefOrRef::TypeSpec ?
        format_guid(generate_guid(index)) : format_guid(get_guid(type));

    auto type_guid = std::pair{ type, guid };
    _cache[index] = type_guid;
    return type_guid;
};

void ClearTypeResolver()
{
    _cache.clear();
}
