#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define NOMINMAX

#include <windows.h>
#pragma warning(push)
#pragma warning(disable : 4471)
#include <vsdebugeng.h>
#pragma warning(pop)
#include <vsdebugeng.templates.h>
#include <Dia2.h>
#include "base_includes.h"
#include "base_macros.h"
#include "base_types.h"
#include "base_extern.h"
#include "base_meta.h"
#include "base_identity.h"
#include "base_handle.h"
#include "base_lock.h"
#include "base_abi.h"
#include "base_windows.h"
#include "base_com_ptr.h"
#include "base_string.h"
#include "base_string_input.h"
#include "base_string_operators.h"
#include "base_array.h"
#include "base_weak_ref.h"
#include "base_agile_ref.h"
#include "base_error.h"
#include "base_marshaler.h"
#include "base_delegate.h"
#include "base_events.h"
#include "base_activation.h"
#include "base_implements.h"
#include <rometadataapi.h>
#include <rometadata.h>
#include <filesystem>
#include <functional>
#include <optional>
#include <set>
#include <memory>
#include <variant>
#include <cmd_reader.h>
#include <winmd_reader.h>
#include <rometadataresolution.h>

#ifndef IF_FAIL_RET
#define IF_FAIL_RET(expr) { HRESULT _hr = (expr); if(FAILED(_hr)) { return(_hr); } }
#endif

template<typename T>
winrt::com_ptr<T> make_com_ptr(T* ptr)
{
    winrt::com_ptr<T> result;
    result.copy_from(ptr);
    return result;
}

enum class NatvisDiagnosticLevel
{
    Unknown = -1,
    Off,
    Error,
    Warning,
    Verbose
};
NatvisDiagnosticLevel GetNatvisDiagnosticLevel();
HRESULT NatvisDiagnostic(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::wstring_view const& messageText, NatvisDiagnosticLevel level, HRESULT errorCode = S_OK);
inline HRESULT NatvisDiagnostic(Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* expression, std::wstring_view const& messageText, NatvisDiagnosticLevel level, HRESULT errorCode = S_OK)
{
    return NatvisDiagnostic(expression->RuntimeInstance()->Process(), messageText, level, errorCode);
}

template <typename...T> struct overloaded : T... { using T::operator()...; };
template <typename...T> overloaded(T...)->overloaded<T...>;

[[noreturn]] inline void throw_invalid(std::string const& message)
{
    throw std::invalid_argument(message);
}

template <typename...T>
[[noreturn]] inline void throw_invalid(std::string message, T const&... args)
{
    (message.append(args), ...);
    throw std::invalid_argument(message);
}

inline bool starts_with(std::string_view const& value, std::string_view const& match) noexcept
{
    return 0 == value.compare(0, match.size(), match);
}

winmd::reader::TypeDef FindSimpleType(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& typeName);
winmd::reader::TypeDef FindSimpleType(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& typeNamespace, std::string_view const& typeName);
winmd::reader::TypeSig FindType(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& typeName);

inline winmd::reader::TypeDef ResolveType(Microsoft::VisualStudio::Debugger::DkmProcess* process, winmd::reader::coded_index<winmd::reader::TypeDefOrRef> index) noexcept
{
    switch (index.type())
    {
    case winmd::reader::TypeDefOrRef::TypeDef:
        return index.TypeDef();
    case winmd::reader::TypeDefOrRef::TypeRef:
        return FindSimpleType(process, index.TypeRef().TypeNamespace(), index.TypeRef().TypeName());
    default: //case TypeDefOrRef::TypeSpec:
        return winmd::reader::find_required(index.TypeSpec().Signature().
            GenericTypeInst().GenericType().TypeRef());
    }
}

std::pair<winmd::reader::TypeDef, std::wstring> ResolveTypeInterface(Microsoft::VisualStudio::Debugger::DkmProcess* process, winmd::reader::TypeSig const& typeSig);

void ClearTypeResolver();
