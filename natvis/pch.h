#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define NOMINMAX

#include <windows.h>
#include <vsdebugeng.h>
#include <vsdebugeng.templates.h>
#include <Dia2.h>
#include "winrt\base.h"
#include <rometadataapi.h>
#include <rometadata.h>
#include <filesystem>
#include <functional>
#include <optional>
#include <set>
#include <memory>
#include <variant>
#include <cmd_reader.h>
#include <meta_reader.h>

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

xlang::meta::reader::TypeDef FindType(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& typeName);

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
