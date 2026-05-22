#include "pch.h"
#include "winmd_signature.h"

using namespace winrt;
using namespace winmd::reader;
using namespace std::literals;
using namespace Microsoft::VisualStudio::Debugger;

static std::map<coded_index<TypeDefOrRef>, std::pair<TypeDef, std::wstring>> _cache;

static guid to_winrt_guid(winmd_signature::guid_value const& g)
{
    return { g.Data1, g.Data2, g.Data3, { g.Data4[0], g.Data4[1], g.Data4[2], g.Data4[3], g.Data4[4], g.Data4[5], g.Data4[6], g.Data4[7] } };
}

static guid get_guid(TypeDef const& type)
{
    return to_winrt_guid(winmd_signature::extract_guid(type));
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

static guid generate_guid(GenericTypeInstSig const& type)
{
    auto sig = winmd_signature::signature_builder::get_signature(type);
    return to_winrt_guid(winmd_signature::compute_guid_from_signature(sig));
}

std::pair<TypeDef, std::wstring> ResolveTypeInterface(DkmProcess* process, winmd::reader::TypeSig const& typeSig)
{
    coded_index<TypeDefOrRef> index;
    if (auto ptrIndex = std::get_if<coded_index<TypeDefOrRef>>(&typeSig.Type()))
    {
        index = *ptrIndex;
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
            format_guid(generate_guid(index.TypeSpec().Signature().GenericTypeInst())) : format_guid(get_guid(type));

        auto type_guid = std::pair{ type, guid };
        _cache[index] = type_guid;
        return type_guid;
    }
    else if (auto* ptrGeneric = std::get_if<GenericTypeInstSig>(&typeSig.Type()))
    {
        index = ptrGeneric->GenericType();
        auto guid = format_guid(generate_guid(*ptrGeneric));
        return { ResolveType(process, index), guid };
    }
    return {};
};

void ClearTypeResolver()
{
    _cache.clear();
}
