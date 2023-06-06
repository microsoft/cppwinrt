#include "pch.h"
#include <variant>
#include "object_visualizer.h"
#include "property_visualizer.h"

using namespace Microsoft::VisualStudio::Debugger;
using namespace Microsoft::VisualStudio::Debugger::Evaluation;
using namespace std::literals;
using namespace winrt;
using namespace winmd::reader;

#define IID_IInspectable L"AF86E2E0-B12D-4C6A-9C5A-D7AA65101E90"
#define IID_IStringable  L"96369F54-8EB6-48F0-ABCE-C1B211E627C3"

constexpr struct
{
    PCWSTR propField;
    PCWSTR displayType;
}
g_categoryData[] = 
{
    { L"b", L"bool" },
    { L"c", L"wchar_t" },
    { L"i1", L"int8_t" },
    { L"u1", L"uint8_t" },
    { L"i2", L"int16_t" },
    { L"u2", L"uint16_t" },
    { L"i4", L"int32_t" },
    { L"u4", L"uint32_t" },
    { L"i8", L"int64_t" },
    { L"u8", L"uint64_t" },
    { L"r4", L"float" },
    { L"r8", L"double" },
    { L"s,sh", L"winrt::hstring" },
    { L"g", L"winrt::guid" },
};

NatvisDiagnosticLevel GetNatvisDiagnosticLevel()
{
    static NatvisDiagnosticLevel level = NatvisDiagnosticLevel::Unknown;
    if (level != NatvisDiagnosticLevel::Unknown)
    {
        return level;
    }
    level = NatvisDiagnosticLevel::Error;

    // If < VS16, just output errors
    if (!DkmComponentManager::IsApiVersionSupported(DkmApiVersion::VS16RTM))
    {
        return level;
    }

    // Else, use VS natvis diagnostics level directly
    HKEY userSettingsKey;
    if (FAILED(DkmGlobalSettings::OpenVSUserSettingsKey(L"Debugger\\NatvisDiagnostics", &userSettingsKey)))
    {
        return level;
    }

    char data[MAX_PATH];
    DWORD dataSize = _countof(data);
    if (RegGetValue(userSettingsKey, "", "Level", RRF_RT_REG_SZ, nullptr, data, &dataSize) == ERROR_SUCCESS)
    {
        switch (data[0])
        {
        case 'O':
            level = NatvisDiagnosticLevel::Off;
            break;
        case 'E':
            level = NatvisDiagnosticLevel::Error;
            break;
        case 'W':
            level = NatvisDiagnosticLevel::Warning;
            break;
        case 'V':
            level = NatvisDiagnosticLevel::Verbose;
            break;
        }
    }
    RegCloseKey(userSettingsKey);
    return level;
}

HRESULT NatvisDiagnostic(DkmProcess* process, std::wstring_view const& messageText, NatvisDiagnosticLevel level, HRESULT errorCode)
{
    if (GetNatvisDiagnosticLevel() < level)
    {
        return S_OK;
    }
    auto userMessage = std::wstring(L"Natvis C++/WinRT: ") + std::wstring(messageText) + L"\n";
    com_ptr<DkmString> pUserMessageText;
    IF_FAIL_RET(DkmString::Create(DkmSourceString(userMessage.c_str()), pUserMessageText.put()));
    com_ptr<DkmUserMessage> pUserMessage;
    IF_FAIL_RET(DkmUserMessage::Create(process->Connection(), process, DkmUserMessageOutputKind::UnfilteredOutputWindowMessage, pUserMessageText.get(), 0, errorCode, pUserMessage.put()));
    return pUserMessage->Post();
}

static HRESULT EvaluatePropertyExpression(
    _In_ PropertyData const& prop,
    _In_ DkmVisualizedExpression* pExpression,
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType,
    _Out_ com_ptr<DkmEvaluationResult>& pEvaluationResult
)
{
    wchar_t abiAddress[40];
    auto process = pExpression->RuntimeInstance()->Process();
    bool is64Bit = ((process->SystemInformation()->Flags() & DefaultPort::DkmSystemInformationFlags::Is64Bit) != 0);
    swprintf_s(abiAddress, is64Bit ? L"%s0x%I64x" : L"%s0x%08x", objectType == ObjectType::Abi ? L"(::IUnknown*)" : L"*(::IUnknown**)", pObject->Address());
    wchar_t wszEvalText[500];
    std::wstring propCast;
    PCWSTR propField;
    if (prop.category < PropertyCategory::Value)
    {
        propField = g_categoryData[(int)prop.category].propField;
    }
    else
    {
        propField = L"v";
        propCast = L"*(" + prop.abiType + L"*)";
    }
    swprintf_s(wszEvalText, L"%sWINRT_abi_val(%s, L\"{%s}\", %i).%s", propCast.c_str(), abiAddress, prop.iid.c_str(), prop.index, propField);

    com_ptr<DkmString> pEvalText;
    IF_FAIL_RET(DkmString::Create(DkmSourceString(wszEvalText), pEvalText.put()));
    NatvisDiagnostic(process, wszEvalText, NatvisDiagnosticLevel::Verbose);

    auto evalFlags = DkmEvaluationFlags::TreatAsExpression | DkmEvaluationFlags::ForceEvaluationNow | DkmEvaluationFlags::ForceRealFuncEval;
    auto inspectionContext = pExpression->InspectionContext();
    com_ptr<DkmLanguageExpression> pLanguageExpression;
    IF_FAIL_RET(DkmLanguageExpression::Create(
        inspectionContext->Language(),
        evalFlags,
        pEvalText.get(),
        DkmDataItem::Null(),
        pLanguageExpression.put()
    ));

    com_ptr<DkmInspectionContext> pInspectionContext;
    if ( (pExpression->InspectionContext()->EvaluationFlags() & evalFlags) != evalFlags)
    {
        DkmInspectionContext::Create(
            inspectionContext->InspectionSession(),
            inspectionContext->RuntimeInstance(),
            inspectionContext->Thread(),
            inspectionContext->Timeout(),
            evalFlags,
            inspectionContext->FuncEvalFlags(),
            inspectionContext->Radix(),
            inspectionContext->Language(),
            inspectionContext->ReturnValue(),
            pInspectionContext.put()
        );
    }
    else
    {
        pInspectionContext.copy_from(inspectionContext);
    }

    auto hr = pExpression->EvaluateExpressionCallback(
        pInspectionContext.get(),
        pLanguageExpression.get(),
        pExpression->StackFrame(),
        pEvaluationResult.put()
    );
    if (hr != S_OK)
    {
        NatvisDiagnostic(process, L"EvaluateExpressionCallback failed", NatvisDiagnosticLevel::Warning, hr);
    }
    return hr;
}

static HRESULT EvaluatePropertyString(
    _In_ PropertyData const& prop,
    _In_ DkmVisualizedExpression* pExpression,
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType,
    _Out_ com_ptr<DkmString>& pValue
)
{
    com_ptr<DkmEvaluationResult> pEvaluationResult;
    IF_FAIL_RET(EvaluatePropertyExpression(prop, pExpression, pObject, objectType, pEvaluationResult));
    if (pEvaluationResult->TagValue() != DkmEvaluationResult::Tag::SuccessResult)
    {
        return E_FAIL;
    }
    com_ptr<DkmSuccessEvaluationResult> pSuccessEvaluationResult = pEvaluationResult.as<DkmSuccessEvaluationResult>();
    if (pSuccessEvaluationResult->Address()->Value() != 0)
    {
        pValue.copy_from(pSuccessEvaluationResult->Value());
    }
    return S_OK;
}

static std::string GetRuntimeClass(
    _In_ DkmVisualizedExpression* pExpression,
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType
)
{
    com_ptr<DkmString> pValue;
    EvaluatePropertyString({ IID_IInspectable, -2, PropertyCategory::String }, pExpression, pObject, objectType, pValue);
    if (!pValue || pValue->Length() == 0)
    {
        return "";
    }
    return to_string(pValue->Value());
}

static HRESULT ObjectToString(
    _In_ DkmVisualizedExpression* pExpression,
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType,
    _Out_ com_ptr<DkmString>& pValue
)
{
    if (SUCCEEDED(EvaluatePropertyString({ IID_IStringable, 0, PropertyCategory::String }, pExpression, pObject, objectType, pValue)))
    {
        if (pValue && pValue->Length() > 0)
        {
            return S_OK;
        }
        pValue = nullptr;
        
        // WINRT_abi_val returned 0, which may be success or failure (due to VirtualQuery validation)
        // Call back for the runtime class name to determine which it was
        if (!GetRuntimeClass(pExpression, pObject, objectType).empty())
        {
            return DkmString::Create(L"<Expand object to view properties>", pValue.put());
        }
    }

    // VirtualQuery validation failed (as determined by no runtime class name) or an
    // exception escaped WINRT_abi_val (e.g, bad pointer, which we try to avoid via VirtualQuery)
    return DkmString::Create(L"<Object uninitialized or information unavailable>", pValue.put());
}

static HRESULT CreateChildVisualizedExpression(
    _In_ PropertyData const& prop,
    _In_ DkmVisualizedExpression* pParent,
    ObjectType objectType,
    _Deref_out_ DkmChildVisualizedExpression** ppResult
)
{
    *ppResult = nullptr;

    com_ptr<DkmEvaluationResult> pEvaluationResult;
    auto valueHome = make_com_ptr(pParent->ValueHome());
    com_ptr<DkmPointerValueHome> pParentPointer = valueHome.as<DkmPointerValueHome>();
    IF_FAIL_RET(EvaluatePropertyExpression(prop, pParent, pParentPointer.get(), objectType, pEvaluationResult));
    if (pEvaluationResult->TagValue() != DkmEvaluationResult::Tag::SuccessResult)
    {
        return E_FAIL;
    }

    com_ptr<DkmSuccessEvaluationResult> pSuccessEvaluationResult = pEvaluationResult.as<DkmSuccessEvaluationResult>();
    com_ptr<DkmString> pValue;
    com_ptr<DkmPointerValueHome> pChildPointer;
    bool isNonNullObject = false;
    if (prop.category == PropertyCategory::Class)
    {
        auto childObjectAddress = pSuccessEvaluationResult->Address()->Value();
        if (childObjectAddress)
        {
            isNonNullObject = true;
            IF_FAIL_RET(DkmPointerValueHome::Create(childObjectAddress, pChildPointer.put()));
            IF_FAIL_RET(ObjectToString(pParent, pChildPointer.get(), ObjectType::Abi, pValue));
        }
    }
    if(!isNonNullObject)
    {
        com_ptr<DkmExpressionValueHome> expressionValueHome = make_com_ptr(pParent->ValueHome());
        pChildPointer = expressionValueHome.as<DkmPointerValueHome>();
        pValue.copy_from(pSuccessEvaluationResult->Value());
    }

    com_ptr<DkmString> pDisplayName;
    IF_FAIL_RET(DkmString::Create(prop.displayName.c_str(), pDisplayName.put()));

    PCWSTR displayType;
    if (prop.category < PropertyCategory::Value)
    {
        displayType = g_categoryData[(int)prop.category].displayType;
    }
    else
    {
        displayType = prop.displayType.c_str();
    }
    com_ptr<DkmString> pDisplayType;
    IF_FAIL_RET(DkmString::Create(displayType, pDisplayType.put()));

    com_ptr<DkmSuccessEvaluationResult> pVisualizedResult;
    IF_FAIL_RET(DkmSuccessEvaluationResult::Create(
        pParent->InspectionContext(),
        pParent->StackFrame(),
        pDisplayName.get(),
        pSuccessEvaluationResult->FullName(),
        pSuccessEvaluationResult->Flags(),
        pValue.get(),
        pSuccessEvaluationResult->EditableValue(),
        pDisplayType.get(),
        pSuccessEvaluationResult->Category(),
        pSuccessEvaluationResult->Access(),
        pSuccessEvaluationResult->StorageType(),
        pSuccessEvaluationResult->TypeModifierFlags(),
        pSuccessEvaluationResult->Address(),
        pSuccessEvaluationResult->CustomUIVisualizers(),
        pSuccessEvaluationResult->ExternalModules(),
        DkmDataItem::Null(),
        pVisualizedResult.put()
    ));

    com_ptr<DkmChildVisualizedExpression> pChildVisualizedExpression;
    IF_FAIL_RET(DkmChildVisualizedExpression::Create(
        pParent->InspectionContext(),
        pParent->VisualizerId(),
        pParent->SourceId(),
        pParent->StackFrame(),
        pChildPointer.get(),
        pVisualizedResult.get(),
        pParent,
        2,
        DkmDataItem::Null(),
        pChildVisualizedExpression.put()
    ));

    if (isNonNullObject)
    {
        com_ptr<object_visualizer> pObjectVisualizer = make_self<object_visualizer>(pChildVisualizedExpression.get(), ObjectType::Abi);
        IF_FAIL_RET(pChildVisualizedExpression->SetDataItem(DkmDataCreationDisposition::CreateNew, pObjectVisualizer.get()));
    }
    else
    {
        com_ptr<property_visualizer> pPropertyVisualizer = make_self<property_visualizer>(pChildVisualizedExpression.get(), pSuccessEvaluationResult.get());
        IF_FAIL_RET(pChildVisualizedExpression->SetDataItem(DkmDataCreationDisposition::CreateNew, pPropertyVisualizer.get()));
    }

    *ppResult = pChildVisualizedExpression.detach();

    return S_OK;
}

struct property_type
{
    MethodDef get;
    MethodDef set;
};

void GetPropertyDataForType(
    _In_ Microsoft::VisualStudio::Debugger::DkmProcess* process,
    _In_ coded_index<TypeDefOrRef> const& index,
    _Out_ std::optional<PropertyCategory>& propCategory,
    _Out_ std::wstring& propAbiType,
    _Out_ std::wstring& propDisplayType
){
    auto type = ResolveType(process, index);
    if (!type)
    {
        return;
    }

    auto typeName = type.TypeName();
    if (typeName == "GUID"sv)
    {
        propCategory = PropertyCategory::Guid;
    }
    else
    {
        auto ns = std::string(type.TypeNamespace());
        auto name = std::string(type.TypeName());

        // Map numeric type names
        if (ns == "Windows.Foundation.Numerics")
        {
            if (name == "Matrix3x2") { name = "float3x2"; }
            else if (name == "Matrix4x4") { name = "float4x4"; }
            else if (name == "Plane") { name = "plane"; }
            else if (name == "Quaternion") { name = "quaternion"; }
            else if (name == "Vector2") { name = "float2"; }
            else if (name == "Vector3") { name = "float3"; }
            else if (name == "Vector4") { name = "float4"; }
        }

        // Types come back from winmd files with '.', need to be '::'
        // Ex. Windows.Foundation.Uri needs to be Windows::Foundation::Uri
        auto fullTypeName = ns + "::" + name;
        wchar_t cppTypename[500];
        size_t i, j;
        for (i = 0, j = 0; i < (fullTypeName.length() + 1); i++, j++)
        {
            if (fullTypeName[i] == L'.')
            {
                cppTypename[j++] = L':';
                cppTypename[j] = L':';
            }
            else
            {
                cppTypename[j] = fullTypeName[i];
            }
        }

        propDisplayType = std::wstring(L"winrt::") + cppTypename;
        switch (get_category(type))
        {
        case category::class_type:
        case category::interface_type:
            propCategory = PropertyCategory::Class;
            propAbiType = L"winrt::impl::inspectable_abi*";
            break;

        default:
            propCategory = PropertyCategory::Value;
            propAbiType = propDisplayType;
            break;
        }
    }
}

void GetInterfaceData(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    coded_index<TypeDefOrRef> index,
    _Inout_ std::vector<PropertyData>& propertyData,
    _Out_ bool& isStringable
){
    isStringable = false;
    auto [type, propIid] = ResolveTypeInterface(process, index);
    if (!type)
    {
        return;
    }

    if (propIid == IID_IStringable)
    {
        isStringable = true;
        return;
    }

    int32_t propIndex = -1;
    for (auto&& method : type.MethodList())
    {
        propIndex++;

        auto isGetter = method.Flags().SpecialName() && starts_with(method.Name(), "get_");
        if (!isGetter)
        {
            continue;
        }

        std::optional<PropertyCategory> propCategory;
        std::wstring propAbiType;
        std::wstring propDisplayType;

        auto retType = method.Signature().ReturnType();
        std::visit(overloaded{
            [&](ElementType type)
            {
                if ((ElementType::Boolean <= type) && (type <= ElementType::String))
                {
                    propCategory = (PropertyCategory)(static_cast<std::underlying_type<ElementType>::type>(type) -
                        static_cast<std::underlying_type<ElementType>::type>(ElementType::Boolean));
                }
                else if (type == ElementType::Object)
                {
                    //propDisplayType = L"winrt::Windows::Foundation::IInspectable";
                    //propCategory = PropertyCategory::Class;
                    //propAbiType = L"winrt::impl::inspectable_abi*";
                }
            },
            [&](coded_index<TypeDefOrRef> const& index)
            {
                GetPropertyDataForType(process, index, propCategory, propAbiType, propDisplayType);
            },
            [&](GenericTypeIndex /*var*/)
            {
                    NatvisDiagnostic(process, L"Generics not yet supported", NatvisDiagnosticLevel::Warning);
            },
            [&](GenericMethodTypeIndex /*var*/)
            {
                    NatvisDiagnostic(process, L"Generics not yet supported", NatvisDiagnosticLevel::Warning);
            },
            [&](GenericTypeInstSig const& type)
            {
                GetPropertyDataForType(process, type.GenericType(), propCategory, propAbiType, propDisplayType);
            }
        }, retType.Type().Type());

        if (propCategory)
        {
            auto propName = method.Name().substr(4);
            std::wstring propDisplayName(propName.cbegin(), propName.cend());
            propertyData.push_back({ propIid, propIndex, *propCategory, propAbiType, propDisplayType, propDisplayName });
        }
    }
}

void object_visualizer::GetPropertyData()
{
    auto valueHome = make_com_ptr(m_pVisualizedExpression->ValueHome());
    com_ptr<DkmPointerValueHome> pObject = valueHome.as<DkmPointerValueHome>();
    auto rcTemp = GetRuntimeClass(m_pVisualizedExpression.get(), pObject.get(), m_objectType);
    if (rcTemp.empty())
    {
        return;
    }
    auto process = m_pVisualizedExpression->RuntimeInstance()->Process();
    std::string_view rc = rcTemp;
    // Runtime class name is delimited by L"..."
    rc = rc.substr(2, rc.size() - 3);
    
    // Strip any parameterized goo
    rc = rc.substr(0, rc.find('<'));

    GetTypeProperties(process, rc);
}

void object_visualizer::GetTypeProperties(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& type_name)
{
    // TODO: add support for direct generic interface implementations (e.g., key_value_pair)
    auto type = ResolveType(process, type_name);
    if (!type.m_classType)
    {
        return;
    }

    if (get_category(type.m_classType) == category::class_type)
    {
        auto const& [extends_namespace, extends_name] = get_base_class_namespace_and_name(type.m_classType);
        if(!extends_namespace.empty() && !extends_name.empty())
        {
            auto base_type = std::string(extends_namespace) + "." + std::string(extends_name);
            if (base_type != "System.Object")
            {
                GetTypeProperties(process, base_type);
            }
        }
        auto impls = type.m_classType.InterfaceImpl();
        for (auto&& impl : impls)
        {
            GetInterfaceData(process, impl.Interface(), m_propertyData, m_isStringable);
        }
    }
    else if (get_category(type.m_classType) == category::interface_type)
    {
        auto impls = type.m_classType.InterfaceImpl();
        for (auto&& impl : impls)
        {
            GetInterfaceData(process, impl.Interface(), m_propertyData, m_isStringable);
        }
        GetInterfaceData(process, type.m_classType.coded_index<TypeDefOrRef>(), m_propertyData, m_isStringable);
    }
}

HRESULT object_visualizer::CreateEvaluationResult(_In_ DkmVisualizedExpression* pVisualizedExpression, _In_ ObjectType objectType, _Deref_out_ DkmEvaluationResult** ppResultObject)
{
    com_ptr<object_visualizer> pObjectVisualizer = make_self<object_visualizer>(pVisualizedExpression, objectType);

    IF_FAIL_RET(pVisualizedExpression->SetDataItem(DkmDataCreationDisposition::CreateNew, pObjectVisualizer.get()));

    IF_FAIL_RET(pObjectVisualizer->CreateEvaluationResult(ppResultObject));

    IF_FAIL_RET(pVisualizedExpression->SetDataItem(DkmDataCreationDisposition::CreateNew, *ppResultObject));

    return S_OK;
}

#ifdef COMPONENT_DEPLOYMENT
static std::set<UINT64> g_refresh_cache;
bool requires_refresh(UINT64 address, DkmEvaluationFlags_t evalFlags)
{
    auto refreshed = g_refresh_cache.find(address) != g_refresh_cache.end();
    return !refreshed && ((evalFlags & DkmEvaluationFlags::EnableExtendedSideEffects) != DkmEvaluationFlags::EnableExtendedSideEffects);
}
void cache_refresh(UINT64 address)
{
    g_refresh_cache.insert(address);
}
#else
bool requires_refresh(UINT64, DkmEvaluationFlags_t)
{
    return false;
}
void cache_refresh(UINT64)
{
}
#endif

HRESULT object_visualizer::CreateEvaluationResult(_Deref_out_ DkmEvaluationResult** ppResultObject)
{
    com_ptr<DkmRootVisualizedExpression> pRootVisualizedExpression = m_pVisualizedExpression.as<DkmRootVisualizedExpression>();

    auto valueHome = make_com_ptr(m_pVisualizedExpression->ValueHome());
    com_ptr<DkmPointerValueHome> pPointerValueHome = valueHome.as<DkmPointerValueHome>();
    auto address = pPointerValueHome->Address();
    
    com_ptr<DkmString> pValue;
    DkmEvaluationResultFlags_t evalResultFlags = DkmEvaluationResultFlags::ReadOnly | DkmEvaluationResultFlags::Expandable;
    if (requires_refresh(address, m_pVisualizedExpression->InspectionContext()->EvaluationFlags()))
    {
        IF_FAIL_RET(DkmString::Create(L"<Refresh to view properties>", pValue.put()));
        evalResultFlags |= DkmEvaluationResultFlags::EnableExtendedSideEffectsUponRefresh | DkmEvaluationResultFlags::CanEvaluateNow;
    }
    else
    {
        cache_refresh(address);
        IF_FAIL_RET(ObjectToString(m_pVisualizedExpression.get(), pPointerValueHome.get(), m_objectType, pValue));
    }

    com_ptr<DkmDataAddress> pAddress;
    IF_FAIL_RET(DkmDataAddress::Create(m_pVisualizedExpression->StackFrame()->RuntimeInstance(), address, nullptr, pAddress.put()));

    com_ptr<DkmSuccessEvaluationResult> pSuccessEvaluationResult;
    IF_FAIL_RET(DkmSuccessEvaluationResult::Create(
        m_pVisualizedExpression->InspectionContext(),
        m_pVisualizedExpression->StackFrame(),
        pRootVisualizedExpression->Name(),
        pRootVisualizedExpression->FullName(),
        evalResultFlags,
        pValue.get(),
        pValue.get(),
        pRootVisualizedExpression->Type(),
        DkmEvaluationResultCategory::Class,
        DkmEvaluationResultAccessType::None,
        DkmEvaluationResultStorageType::None,
        DkmEvaluationResultTypeModifierFlags::None,
        pAddress.get(),
        (DkmReadOnlyCollection<DkmCustomUIVisualizerInfo*>*)nullptr,
        (DkmReadOnlyCollection<DkmModuleInstance*>*)nullptr,
        DkmDataItem::Null(),
        pSuccessEvaluationResult.put()
    ));

    pSuccessEvaluationResult->SetDataItem(DkmDataCreationDisposition::CreateNew, this);

    *ppResultObject = (DkmEvaluationResult*)pSuccessEvaluationResult.detach();

    return S_OK;
}

HRESULT object_visualizer::GetChildren(
    _In_ UINT32 InitialRequestSize,
    _In_ DkmInspectionContext* pInspectionContext,
    _Out_ DkmArray<DkmChildVisualizedExpression*>* pInitialChildren,
    _Deref_out_ DkmEvaluationResultEnumContext** ppEnumContext)
{
    // Ignore metadata errors to ensure that Raw Data is always available
    if (m_propertyData.empty())
    {
        try
        {
            GetPropertyData();
        }
        catch (std::invalid_argument const& e)
        {
            std::string_view message(e.what());
            NatvisDiagnostic(m_pVisualizedExpression.get(),
                std::wstring(L"Exception in object_visualizer::GetPropertyData: ") +
                std::wstring(message.begin(), message.end()),
                NatvisDiagnosticLevel::Error, to_hresult());
        }
        catch (...)
        {
            NatvisDiagnostic(m_pVisualizedExpression.get(),
                L"Exception in object_visualizer::GetPropertyData", NatvisDiagnosticLevel::Error, to_hresult());
        }
    }

    com_ptr<DkmEvaluationResultEnumContext> pEnumContext;
    IF_FAIL_RET(DkmEvaluationResultEnumContext::Create(
        static_cast<uint32_t>(m_propertyData.size()),
        m_pVisualizedExpression->StackFrame(),
        pInspectionContext,
        this,
        pEnumContext.put()));

    IF_FAIL_RET(GetItems(m_pVisualizedExpression.get(), pEnumContext.get(), 0, InitialRequestSize, pInitialChildren));

    *ppEnumContext = pEnumContext.detach();

    return S_OK;
}

HRESULT object_visualizer::GetItems(
    _In_ DkmVisualizedExpression* pVisualizedExpression,
    _In_ DkmEvaluationResultEnumContext* /*pEnumContext*/,
    _In_ UINT32 StartIndex,
    _In_ UINT32 Count,
    _Out_ DkmArray<DkmChildVisualizedExpression*>* pItems)
{
    CAutoDkmArray<DkmChildVisualizedExpression*> resultValues;
    IF_FAIL_RET(DkmAllocArray(std::min(m_propertyData.size(), size_t(Count)), &resultValues));

    auto pParent = pVisualizedExpression;
    auto childCount = std::min(m_propertyData.size() - StartIndex, (size_t)Count);
    for(auto i = 0; i < childCount; ++i)
    {
        auto& prop = m_propertyData[i + (size_t)StartIndex];
        com_ptr<DkmChildVisualizedExpression> pPropertyVisualized;
        if(FAILED(CreateChildVisualizedExpression(prop, pParent, m_objectType, pPropertyVisualized.put())))
        {
            com_ptr<DkmString> pErrorMessage;
            IF_FAIL_RET(DkmString::Create(L"<Property evaluation failed>", pErrorMessage.put()));

            com_ptr<DkmString> pDisplayName;
            IF_FAIL_RET(DkmString::Create(prop.displayName.c_str(), pDisplayName.put()));

            com_ptr<DkmFailedEvaluationResult> pVisualizedResult;
            IF_FAIL_RET(DkmFailedEvaluationResult::Create(
                pParent->InspectionContext(),
                pParent->StackFrame(),
                pDisplayName.get(),
                nullptr,
                pErrorMessage.get(),
                DkmEvaluationResultFlags::ExceptionThrown,
                DkmDataItem::Null(),
                pVisualizedResult.put()
            ));

            IF_FAIL_RET(DkmChildVisualizedExpression::Create(
                pParent->InspectionContext(),
                pParent->VisualizerId(),
                pParent->SourceId(),
                pParent->StackFrame(),
                nullptr,
                pVisualizedResult.get(),
                pParent,
                2,
                DkmDataItem::Null(),
                pPropertyVisualized.put()
            ));
        }
        resultValues.Members[i] = pPropertyVisualized.detach();
    }

    *pItems = resultValues.Detach();
    return S_OK;
}
