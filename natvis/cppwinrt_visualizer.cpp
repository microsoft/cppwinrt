#include "pch.h"
#include "cppwinrt_visualizer.h"
#include "object_visualizer.h"
#include "property_visualizer.h"

using namespace Microsoft::VisualStudio::Debugger;
using namespace Microsoft::VisualStudio::Debugger::Evaluation;
using namespace Microsoft::VisualStudio::Debugger::Telemetry;
using namespace Microsoft::VisualStudio::Debugger::DefaultPort;
using namespace std::filesystem;
using namespace winrt;
using namespace xlang;
using namespace xlang::meta;
using namespace xlang::meta::reader;

std::vector<std::string> db_files;
std::unique_ptr<cache> db;

void MetadataDiagnostic(DkmProcess* process, std::wstring const& status, std::filesystem::path const& path)
{
    auto path_str = path.string();
    auto message = status + std::wstring(path_str.begin(), path_str.end());
    NatvisDiagnostic(process, message, NatvisDiagnosticLevel::Verbose);
}

HRESULT DownloadMetadata(DkmProcess* process, std::filesystem::path const& remote_path, std::filesystem::path const& local_path)
{
    auto conn = process->Connection();
    if ((conn->Flags() & DkmTransportConnectionFlags_t::LocalComputer) != 0)
    {
        return E_FAIL;
    }

    com_ptr<DkmString> root_dir;
    IF_FAIL_RET(DkmString::Create(remote_path.parent_path().c_str(), root_dir.put()));
    com_ptr<DkmString> search_spec;
    IF_FAIL_RET(DkmString::Create(remote_path.filename().c_str(), search_spec.put()));
    DkmArray<DkmFileInfo*> results;
    IF_FAIL_RET(conn->GetFileListing(root_dir.get(), search_spec.get(), false, &results));
    if (results.Length != 1)
    {
        return E_FAIL;
    }

    auto& remote_listing = results.Members[0];
    auto remote_file_size = remote_listing->FileSize();
    file_time_type remote_file_time{ file_time_type::duration(remote_listing->LastWriteTime()) };
    auto remote_file_path = remote_listing->FilePath();
    auto remote_file_name = remote_listing->FileName(); remote_file_name;
    if (exists(local_path))
    {
        auto local_file_time = last_write_time(local_path);
        auto local_file_size = file_size(local_path);
        if ((local_file_time >= remote_file_time) && (local_file_size == remote_file_size))
        {
            return S_OK;
        }
    }

    MetadataDiagnostic(process, L"Downloading ", remote_path);
    com_ptr<DkmString> local_file_path;
    IF_FAIL_RET(DkmString::Create(local_path.c_str(), local_file_path.put()));
    IF_FAIL_RET(conn->DownloadFile(remote_file_path, local_file_path.get(), true));
    last_write_time(local_path, remote_file_time);
    return S_OK;
}

// If local file found, use it
// If newer remote file found, download it to cache
// If cached file found (downloaded or not), use it
bool FindMetadata(DkmProcess* process, std::filesystem::path& winmd_path)
{
    if (exists(winmd_path))
    {
        return true;
    }

    auto cached_path = winmd_path;
    cached_path = std::filesystem::temp_directory_path();
    cached_path.replace_filename(winmd_path.filename().c_str());
    DownloadMetadata(process, winmd_path, cached_path);
    if (exists(cached_path))
    {
        winmd_path = cached_path;
        return true;
    }

    return false;
}

// If type not indexed, simulate RoGetMetaDataFile's strategy for finding app-local metadata
// and add to the database dynamically.  RoGetMetaDataFile looks for types in the current process
// so cannot be called directly.
void LoadMetadata(DkmProcess* process, WCHAR const* processPath, std::string_view const& typeName)
{
    auto winmd_path = path{ processPath };
    auto probe_file = std::string{ typeName };
    do
    {
        winmd_path.replace_filename(probe_file + ".winmd");
        MetadataDiagnostic(process, L"Looking for ", winmd_path);
        if (FindMetadata(process, winmd_path))
        {
            MetadataDiagnostic(process, L"Loaded ", winmd_path);
            db_files.push_back(winmd_path.string());
        }
        auto pos = probe_file.rfind('.');
        if (pos == std::string::npos)
        {
            break;
        }
        probe_file = probe_file.substr(0, pos);
    } while (true);
    db.reset(new cache(db_files));
}

TypeDef FindType(DkmProcess* process, std::string_view const& typeName)
{
    auto type = db->find(typeName);
    if (!type)
    {
        auto processPath = process->Path()->Value();
        LoadMetadata(process, processPath, typeName);
        type = db->find(typeName);
        if (!type)
        {
            NatvisDiagnostic(process,
                std::wstring(L"Could not find metadata for ") + std::wstring(typeName.begin(), typeName.end()), NatvisDiagnosticLevel::Error);
        }
    }
    return type;
}

cppwinrt_visualizer::cppwinrt_visualizer()
{
    try
    {
        std::array<char, MAX_PATH> local{};
#ifdef _WIN64
        ExpandEnvironmentStringsA("%windir%\\System32\\WinMetadata", local.data(), static_cast<DWORD>(local.size()));
#else
        ExpandEnvironmentStringsA("%windir%\\SysNative\\WinMetadata", local.data(), static_cast<DWORD>(local.size()));
#endif
        for (auto&& file : std::filesystem::directory_iterator(local.data()))
        {
            if (std::filesystem::is_regular_file(file))
            {
                db_files.push_back(file.path().string());
            }
        }
        db.reset(new cache(db_files));
    }
    catch (...)
    {
        // If unable to read metadata, don't take down VS 
    }

    // Log an event for telemetry purposes when the visualizer is brought online
    com_ptr<DkmString> eventName;
    if SUCCEEDED(DkmString::Create(DkmSourceString(L"vs/vc/diagnostics/cppwinrtvisualizer/objectconstructed"), eventName.put()))
    {
        com_ptr<DkmTelemetryEvent> error;
        if SUCCEEDED(DkmTelemetryEvent::Create(eventName.get(), nullptr, nullptr, error.put()))
        {
            error->Post();
        }
    }
}

cppwinrt_visualizer::~cppwinrt_visualizer()
{
    db_files.clear();
    db.reset();
}

HRESULT cppwinrt_visualizer::EvaluateVisualizedExpression(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _Deref_out_ DkmEvaluationResult** ppResultObject
)
{
    try
    {
        com_ptr<IUnknown> pUnkTypeSymbol;
        IF_FAIL_RET(pVisualizedExpression->GetSymbolInterface(__uuidof(IDiaSymbol), pUnkTypeSymbol.put()));

        com_ptr<IDiaSymbol> pTypeSymbol = pUnkTypeSymbol.as<IDiaSymbol>();

        CComBSTR bstrTypeName;
        IF_FAIL_RET(pTypeSymbol->get_name(&bstrTypeName));

        // Visualize top-level C++/WinRT objects containing ABI pointers
        bool isAbiObject;
        if (wcscmp(bstrTypeName, L"winrt::Windows::Foundation::IInspectable") == 0)
        {
            isAbiObject = false;
        }
        // Visualize nested object properties via raw ABI pointers
        else if ((wcscmp(bstrTypeName, L"winrt::impl::IInspectable") == 0) ||
                 (wcscmp(bstrTypeName, L"winrt::impl::inspectable_abi") == 0))
        {
            isAbiObject = true;
        }
        // Visualize all raw IInspectable pointers
        else if (wcscmp(bstrTypeName, L"IInspectable") == 0)
        {
            isAbiObject = true;
        }
        else
        {
            // unrecognized type
            NatvisDiagnostic(pVisualizedExpression, 
                std::wstring(L"Unrecognized type: ") + (LPWSTR)bstrTypeName,  NatvisDiagnosticLevel::Error);
            return S_OK;
        }

        IF_FAIL_RET(object_visualizer::CreateEvaluationResult(pVisualizedExpression, isAbiObject, ppResultObject));

        return S_OK;
    }
    catch (...)
    {
        // If something goes wrong, just fail to display object/property.  Don't take down VS.
        NatvisDiagnostic(pVisualizedExpression, 
            L"Exception in cppwinrt_visualizer::EvaluateVisualizedExpression", NatvisDiagnosticLevel::Error, to_hresult());
        return E_FAIL;
    }
}

HRESULT cppwinrt_visualizer::UseDefaultEvaluationBehavior(
    _In_ DkmVisualizedExpression* /*pVisualizedExpression*/,
    _Out_ bool* pUseDefaultEvaluationBehavior,
    _Deref_out_opt_ DkmEvaluationResult** ppDefaultEvaluationResult
)
{
    *pUseDefaultEvaluationBehavior = false;
    *ppDefaultEvaluationResult = nullptr;

    return S_OK;
}

HRESULT cppwinrt_visualizer::GetChildren(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _In_ UINT32 InitialRequestSize,
    _In_ DkmInspectionContext* pInspectionContext,
    _Out_ DkmArray<DkmChildVisualizedExpression*>* pInitialChildren,
    _Deref_out_ DkmEvaluationResultEnumContext** ppEnumContext
)
{
    try
    {
        com_ptr<object_visualizer> pObjectVisualizer;
        HRESULT hr = pVisualizedExpression->GetDataItem(pObjectVisualizer.put());
        if (SUCCEEDED(hr))
        {
            IF_FAIL_RET(pObjectVisualizer->GetChildren(InitialRequestSize, pInspectionContext, pInitialChildren, ppEnumContext));
        }
        else
        {
            com_ptr<property_visualizer> pPropertyVisualizer;
            hr = pVisualizedExpression->GetDataItem(pPropertyVisualizer.put());
            if (SUCCEEDED(hr))
            {
                IF_FAIL_RET(pPropertyVisualizer->GetChildren(InitialRequestSize, pInspectionContext, pInitialChildren, ppEnumContext));
            }
        }

        return hr;
    }
    catch (...)
    {
        // If something goes wrong, just fail to display object/property.  Don't take down VS.
        NatvisDiagnostic(pVisualizedExpression,
            L"Exception in cppwinrt_visualizer::GetChildren", NatvisDiagnosticLevel::Error, to_hresult());
        return E_FAIL;
    }
}

HRESULT cppwinrt_visualizer::GetItems(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _In_ DkmEvaluationResultEnumContext* pEnumContext,
    _In_ UINT32 StartIndex,
    _In_ UINT32 Count,
    _Out_ DkmArray<DkmChildVisualizedExpression*>* pItems
)
{
    try
    {
        com_ptr<object_visualizer> pObjectVisualizer;
        HRESULT hr = pVisualizedExpression->GetDataItem(pObjectVisualizer.put());
        if (SUCCEEDED(hr))
        {
            IF_FAIL_RET(pObjectVisualizer->GetItems(pVisualizedExpression, pEnumContext, StartIndex, Count, pItems));
        }
        else
        {
            com_ptr<property_visualizer> pPropertyVisualizer;
            hr = pVisualizedExpression->GetDataItem(pPropertyVisualizer.put());
            if (SUCCEEDED(hr))
            {
                IF_FAIL_RET(pPropertyVisualizer->GetItems(pEnumContext, StartIndex, Count, pItems));
            }
        }

        return hr;
    }
    catch (...)
    {
        // If something goes wrong, just fail to display object/property.  Don't take down VS.
        NatvisDiagnostic(pVisualizedExpression,
            L"Exception in cppwinrt_visualizer::GetItems", NatvisDiagnosticLevel::Error, to_hresult());
        return E_FAIL;
    }
}

HRESULT cppwinrt_visualizer::SetValueAsString(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _In_ DkmString* pValue,
    _In_ UINT32 Timeout,
    _Deref_out_opt_ DkmString** ppErrorText
)
{
    try
    {
        com_ptr<property_visualizer> pPropertyVisualizer;
        HRESULT hr = pVisualizedExpression->GetDataItem(pPropertyVisualizer.put());
        if (SUCCEEDED(hr))
        {
            IF_FAIL_RET(pPropertyVisualizer->SetValueAsString(pValue, Timeout, ppErrorText));
        }

        return hr;
    }
    catch (...)
    {
        // If something goes wrong, just fail to update object/property.  Don't take down VS.
        NatvisDiagnostic(pVisualizedExpression, 
            L"Exception in cppwinrt_visualizer::SetValueAsString", NatvisDiagnosticLevel::Error, to_hresult());
        return E_FAIL;
    }
}

HRESULT cppwinrt_visualizer::GetUnderlyingString(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _Deref_out_opt_ DkmString** ppStringValue
)
{
    try
    {
        com_ptr<property_visualizer> pPropertyVisualizer;
        HRESULT hr = pVisualizedExpression->GetDataItem(pPropertyVisualizer.put());
        if (SUCCEEDED(hr))
        {
            IF_FAIL_RET(pPropertyVisualizer->GetUnderlyingString(ppStringValue));
        }

        return hr;
    }
    catch (...)
    {
        // If something goes wrong, just fail to display object/property.  Don't take down VS.
        NatvisDiagnostic(pVisualizedExpression->RuntimeInstance()->Process(),
            L"Exception in cppwinrt_visualizer::GetUnderlyingString", NatvisDiagnosticLevel::Error, to_hresult());
        return E_FAIL;
    }
}
