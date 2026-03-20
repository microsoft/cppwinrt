#include "pch.h"
#include "natvis_type_helpers.h"

using namespace winrt;
using namespace winmd::reader;
using namespace std::literals;
using namespace Microsoft::VisualStudio::Debugger;
using namespace natvis_helpers;

static std::map<coded_index<TypeDefOrRef>, std::pair<TypeDef, std::wstring>> _cache;

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
