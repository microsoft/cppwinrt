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
    if (IsBuiltIn(prop.category))
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

template <typename T>
struct EvaulationResultConverter
{
    static constexpr auto category{ PropertyCategory::Class };
};

template <>
struct EvaulationResultConverter<bool>
{
    static constexpr auto category{ PropertyCategory::Bool };
    static void Convert(_In_ DkmString* pValue, _In_ DkmString* pType, _In_opt_ DkmDataAddress*, _Out_ bool& result)
    {
        if (pType->Value() != L"bool"sv)
        {
            throw winrt::hresult_error(E_FAIL, std::wstring(L"Evaluation returned incorrect type: ") + pType->Value());
        }
        if (pValue->Value() == L"true"sv)
        {
            result = true;
        }
        else if (pValue->Value() == L"false"sv)
        {
            result = false;
        }
        else
        {
            throw hresult_out_of_bounds(std::wstring(L"result out of range: ") + pValue->Value());
        }
    }
};

template <>
struct EvaulationResultConverter<uint32_t>
{
    static constexpr auto category{ PropertyCategory::Uint4 };
    static void Convert(_In_ DkmString* pValue, _In_ DkmString* pType, _In_opt_ DkmDataAddress*, _Out_ uint32_t& result)
    {
        if (pType->Value() != L"uint32_t"sv &&  pType->Value() != L"unsigned int"sv)
        {
            throw winrt::hresult_error(E_FAIL, std::wstring(L"Evaluation returned incorrect type: ") + pType->Value());
        }
        result = std::stoul(std::wstring(pValue->Value()), nullptr, 0);
    }
};

template <>
struct EvaulationResultConverter<com_ptr<DkmPointerValueHome>>
{
    static constexpr auto category{ PropertyCategory::Class };
    static void Convert(_In_ DkmString*, _In_ DkmString*, _In_opt_ DkmDataAddress* pAddress, _Out_ com_ptr<DkmPointerValueHome>& result)
    {
        com_ptr<DkmPointerValueHome> pointer;
        winrt::check_hresult(DkmPointerValueHome::Create(pAddress->Value(), result.put()));
    }
};

template <typename T>
static HRESULT EvaluatePropertyValue(
    const PropertyData& prop,
    _In_ DkmVisualizedExpression* pExpression,
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType,
    _Out_ T& value
) try
{
    XLANG_ASSERT(prop.category == EvaulationResultConverter<T>::category);
    com_ptr<DkmEvaluationResult> pEvaluationResult;
    winrt::check_hresult(EvaluatePropertyExpression(prop, pExpression, pObject, objectType, pEvaluationResult));
    auto pSuccessEvaluationResult = DkmSuccessEvaluationResult::TryCast(pEvaluationResult.get());
    if (!pSuccessEvaluationResult)
    {
        std::wstring errorMessage = L"Evaluation failed: ";
        if (auto pFailedEvaluationResult = DkmFailedEvaluationResult::TryCast(pEvaluationResult.get()))
        {
            errorMessage += pFailedEvaluationResult->ErrorMessage()->Value();
        }
        throw winrt::hresult_error(E_FAIL, errorMessage);
    }
    auto pValue = pSuccessEvaluationResult->Value();
    auto pType = pSuccessEvaluationResult->Type();
    if (!pValue || !pType)
    {
        throw winrt::hresult_error(E_FAIL, L"Evaluation returned null value or type");
    }
    EvaulationResultConverter<T>::Convert(pValue, pType, pSuccessEvaluationResult->Address(), value);
    return S_OK;
}
catch (...)
{
    NatvisDiagnostic(pExpression, std::wstring(L"EvaluatePropertyValue error - ") + winrt::to_message(), NatvisDiagnosticLevel::Error);
    return winrt::to_hresult();
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
    _In_ DkmPointerValueHome* pObject,
    ObjectType objectType,
    _Deref_out_ DkmChildVisualizedExpression** ppResult
)
{
    *ppResult = nullptr;

    com_ptr<DkmEvaluationResult> pEvaluationResult;
    IF_FAIL_RET(EvaluatePropertyExpression(prop, pParent, pObject, objectType, pEvaluationResult));
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
    if (IsBuiltIn(prop.category))
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

static HRESULT CreateChildVisualizedExpression(
    _In_ PropertyData const& prop,
    _In_ DkmVisualizedExpression* pParent,
    ObjectType objectType,
    _Deref_out_ DkmChildVisualizedExpression** ppResult
)
{
    auto pParentPointer = DkmPointerValueHome::TryCast(pParent->ValueHome());
    if (!pParentPointer)
    {
        return E_NOINTERFACE;
    }
    return CreateChildVisualizedExpression(prop, pParent, pParentPointer, objectType, ppResult);
}

std::optional<PropertyCategory> GetPropertyCategory(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& owningType,
    TypeSig const& propertyType
)
{
    std::optional<PropertyCategory> propCategory;
    if (auto pElementType = std::get_if<ElementType>(&propertyType.Type()))
    {
        if ((ElementType::Boolean <= *pElementType) && (*pElementType <= ElementType::String))
        {
            propCategory = (PropertyCategory)(static_cast<std::underlying_type<ElementType>::type>(*pElementType) -
                static_cast<std::underlying_type<ElementType>::type>(ElementType::Boolean));
        }
        else if (*pElementType == ElementType::Object)
        {
            // result = PropertyCategory::Class;
        }
    }
    else if (auto pIndex = std::get_if<coded_index<TypeDefOrRef>>(&propertyType.Type()))
    {
        auto type = ResolveType(process, *pIndex);
        if (type)
        {
            if (get_category(type) == category::class_type || get_category(type) == category::interface_type)
            {
                propCategory = PropertyCategory::Class;
            }
            else
            {
                propCategory = PropertyCategory::Value;
            }
        }
        else if (pIndex->type() == TypeDefOrRef::TypeRef)
        {
            auto typeRef = pIndex->TypeRef();
            if (typeRef.TypeNamespace() == "System" && typeRef.TypeName() == "Guid")
            {
                propCategory = PropertyCategory::Guid;
            }
        }
    }
    else if (auto pGenericInst = std::get_if<GenericTypeInstSig>(&propertyType.Type()))
    {
        XLANG_ASSERT(get_category(ResolveType(process, pGenericInst->GenericType())) == category::interface_type);
        propCategory = PropertyCategory::Class;
    }
    else if (auto pGenericIndex = std::get_if<GenericTypeIndex>(&propertyType.Type()))
    {
        if (auto pOwner = std::get_if<GenericTypeInstSig>(&owningType.Type()))
        {
            auto const& index = pGenericIndex->index;
            auto const& genericArgs = pOwner->GenericArgs();
            propCategory = GetPropertyCategory(process, owningType, genericArgs.first[index]);
        }
        else
        {
            NatvisDiagnostic(process, L"Can't resolve GenericTypeIndex property on non-generic Type", NatvisDiagnosticLevel::Warning);
        }
    }
    else
    {
        NatvisDiagnostic(process, L"Unsupported TypeSig encountered", NatvisDiagnosticLevel::Warning);
    }
    return propCategory;
}

struct writer
{
    std::vector<TypeSig> generic_params;

    std::string result;

    void write(char c)
    {
        result.push_back(c);
    }

    void write(std::string_view const& str)
    {
        for (auto c : str)
        {
            if (c == '.')
            {
                write(':');
                write(':');
            }
            else if (c != '`')
            {
                write(c);
            }
            else
            {
                return;
            }
        }
    }

    void write(ElementType type)
    {
        switch (type)
        {
        case ElementType::Boolean:
            write("bool");
            break;
        case ElementType::Char:
            write("wchar_t");
            break;
        case ElementType::I1:
            write("int8_t");
            break;
        case ElementType::U1:
            write("uint8_t");
            break;
        case ElementType::I2:
            write("int16_t");
            break;
        case ElementType::U2:
            write("uint16_t");
            break;
        case ElementType::I4:
            write("int32_t");
            break;
        case ElementType::U4:
            write("uint32_t");
            break;
        case ElementType::I8:
            write("int64_t");
            break;
        case ElementType::U8:
            write("uint64_t");
            break;
        case ElementType::R4:
            write("float");
            break;
        case ElementType::R8:
            write("double");
            break;
        case ElementType::String:
            write("winrt::hstring");
            break;
        case ElementType::Object:
            write("winrt::Windows::Foundation::IInspectable");
            break;
        default:
            XLANG_ASSERT(false);
            break;
        };
    }

    void write_namespace_and_type(std::string_view ns, std::string_view name)
    {
        if (ns == "System")
        {
            if (name == "Guid")
            {
                ns = "";
                name = "guid";
            }
        }
        else if (ns == "Windows.Foundation")
        {
            if (name == "EventRegistrationToken")
            {
                ns = "";
                name = "event_token";
            }
            else if (name == "HResult")
            {
                ns = "";
                name = "hresult";
            }
        }
        else if (ns == "Windows.Foundation.Numerics")
        {
            if (name == "Matrix3x2") { name = "float3x2"; }
            else if (name == "Matrix4x4") { name = "float4x4"; }
            else if (name == "Plane") { name = "plane"; }
            else if (name == "Quaternion") { name = "quarternion"; }
            else if (name == "Vector2") { name = "float2"; }
            else if (name == "Vector3") { name = "float3"; }
            else if (name == "Vector4") { name = "float4"; }
        }

        write("winrt::");
        if (!ns.empty())
        {
            write(ns);
            write("::");
        }
        write(name);
    }

    void write(TypeRef const& type)
    {
        write_namespace_and_type(type.TypeNamespace(), type.TypeName());
    }

    void write(TypeDef const& type)
    {
        write_namespace_and_type(type.TypeNamespace(), type.TypeName());
    }

    void write(TypeSpec const& type)
    {
        write(type.Signature().GenericTypeInst());
    }

    void write(coded_index<TypeDefOrRef> type)
    {
        switch (type.type())
        {
        case TypeDefOrRef::TypeDef:
            write(type.TypeDef());
            break;
        case TypeDefOrRef::TypeRef:
            write(type.TypeRef());
            break;
        case TypeDefOrRef::TypeSpec:
            write(type.TypeSpec());
            break;
        }
    }

    void write(GenericTypeInstSig const& type)
    {
        write(type.GenericType());
        bool first = true;
        write("<");
        for (auto&& elem : type.GenericArgs())
        {
            if (first)
            {
                first = false;
            }
            else
            {
                write(", ");
            }
            write(elem);
        }
        write(">");
    }

    void write(GenericTypeIndex const& var)
    {
        write(generic_params[var.index]);
    }

    void write(GenericMethodTypeIndex const&)
    {
        // Nothing
    }

    void write(TypeSig const& type)
    {
        std::visit([this](auto&& arg)
            {
                write(arg);
            }, type.Type());
    }
};

GenericTypeInstSig ReplaceGenericIndices(GenericTypeInstSig const& sig, std::vector<TypeSig> const& genericArgs)
{
    std::vector<TypeSig> replacementArgs;
    for (auto&& arg : sig.GenericArgs())
    {
        if (auto pGenericSig = std::get_if<GenericTypeInstSig>(&arg.Type()))
        {
            replacementArgs.emplace_back(ReplaceGenericIndices(*pGenericSig, genericArgs));
        }
        else if (auto pGenericIndex = std::get_if<GenericTypeIndex>(&arg.Type()))
        {
            replacementArgs.push_back(genericArgs[pGenericIndex->index]);
        }
        else
        {
            replacementArgs.push_back(arg);
        }
    }
    return GenericTypeInstSig{ sig.GenericType(), std::move(replacementArgs) };
}

TypeSig ExpandInterfaceImplForType(coded_index<TypeDefOrRef> impl, TypeSig const& type)
{
    if (auto pGenericInst = std::get_if<GenericTypeInstSig>(&type.Type()))
    {
        if (impl.type() == TypeDefOrRef::TypeSpec)
        {
            auto const& genericArgs = pGenericInst->GenericArgs();
            auto newSig = ReplaceGenericIndices(impl.TypeSpec().Signature().GenericTypeInst(), std::vector<TypeSig>{ genericArgs.first, genericArgs.second });
            return TypeSig{ newSig };
        }
    }
    return TypeSig{ impl };
}

std::wstring string_to_wstring(std::string_view const& str)
{
    int const size = MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), nullptr, 0);
    if (size == 0)
    {
        return {};
    }

    std::wstring result(size, L'?');
    auto size_result = MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), result.data(), size);
    XLANG_ASSERT(size == size_result);
    return result;
}

std::optional<PropertyData> CreatePropertyData(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& typeSig,
    MethodDef const& method,
    std::string_view propName,
    const std::wstring& propIid,
    int32_t propIndex
)
{
    std::optional<PropertyCategory> propCategory = GetPropertyCategory(process, typeSig, method.Signature().ReturnType().Type());
    if (propCategory)
    {
        std::wstring propAbiType;
        std::wstring propDisplayType;
        if (!IsBuiltIn(*propCategory))
        {
            writer writer;
            if (auto pGenericTypeInst = std::get_if<GenericTypeInstSig>(&typeSig.Type()))
            {
                auto const& genericArgs = pGenericTypeInst->GenericArgs();
                writer.generic_params.assign(genericArgs.first, genericArgs.second);
            }
            writer.write(method.Signature().ReturnType().Type());
            propDisplayType = string_to_wstring(writer.result);

            if (*propCategory == PropertyCategory::Class)
            {
                propAbiType = L"winrt::impl::inspectable_abi*";
            }
            else
            {
                propAbiType = propDisplayType;
            }
        }

        return PropertyData(propIid, propIndex, *propCategory, std::move(propAbiType), std::move(propDisplayType), string_to_wstring(propName));
    }
    return {};
}

template <typename MethodList>
MethodDef FindMethodByName(MethodList&& methods, std::string_view const& name)
{
    auto iter = std::ranges::find_if(methods, [&name](auto&& method) { return name == method.Name(); });
    if (iter != end(methods))
    {
        return *iter;
    }
    else
    {
        return MethodDef{ nullptr, 0 };
    }
}

// Return property names to ignore in normal processing
std::vector<std::string_view> GetIteratorPseudoProperties(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& typeSig,
    TypeDef const& type,
    std::wstring const& propIid,
    _Inout_ PseudoPropertyData& pseudoPropertyData)
{
    if ((type.TypeNamespace() != "Windows.Foundation.Collections"sv) ||
        type.TypeName() != "IIterator`1"sv)
    {
        return {};
    }

    const auto currentMethod = FindMethodByName(type.MethodList(), "get_Current"sv);
    if (!currentMethod || !currentMethod.Flags().SpecialName())
    {
        NatvisDiagnostic(process, L"IIterator<T>.Current not present or missing SpecialName flag", NatvisDiagnosticLevel::Warning);
        return {};
    }

    const auto hasCurrentMethod = FindMethodByName(type.MethodList(), "get_HasCurrent"sv);
    if (!hasCurrentMethod || !hasCurrentMethod.Flags().SpecialName())
    {
        NatvisDiagnostic(process, L"IIterator<T>.HasCurrent not present or missing SpecialName flag", NatvisDiagnosticLevel::Warning);
        return {};
    }

    auto currentPropData = CreatePropertyData(process, typeSig, currentMethod, "Current", propIid, currentMethod - type.MethodList().first);
    if (!currentPropData)
    {
        NatvisDiagnostic(process, L"Failed to create property data for IIterator<T>.Current", NatvisDiagnosticLevel::Warning);
        return {};
    }

    auto hasCurrentPropData = CreatePropertyData(process, typeSig, hasCurrentMethod, "HasCurrent", propIid, hasCurrentMethod - type.MethodList().first);
    if (!hasCurrentPropData)
    {
        NatvisDiagnostic(process, L"Failed to create property data for IIterator<T>.HasCurrent", NatvisDiagnosticLevel::Warning);
        return {};
    }

    XLANG_ASSERT(!pseudoPropertyData.m_iteratorPropertyData);
    pseudoPropertyData.m_iteratorPropertyData = std::make_unique<IteratorPropertyData>();
    pseudoPropertyData.m_iteratorPropertyData->currentProperty = std::move(currentPropData).value();
    pseudoPropertyData.m_iteratorPropertyData->hasCurrentProperty = std::move(hasCurrentPropData).value();
    return { "get_Current"sv, "get_HasCurrent"sv };
}

// Return property names to ignore in normal processing
std::vector<std::string_view> GetVectorPseudoProperties(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& typeSig,
    TypeDef const& type,
    std::wstring const& propIid,
    _Inout_ PseudoPropertyData& pseudoPropertyData)
{
    if (type.TypeNamespace() != "Windows.Foundation.Collections"sv || 
        (type.TypeName() != "IVector`1"sv && type.TypeName() != "IVectorView`1"sv && type.TypeName() != "IIterable`1"sv))
    {
        return {};
    }

    if (!pseudoPropertyData.m_vectorPropertyData)
    {
        pseudoPropertyData.m_vectorPropertyData = std::make_unique<VectorPropertyData>();
    }

    if (type.TypeName() == "IVector`1"sv || type.TypeName() == "IVectorView`1"sv)
    {
        const auto sizeMethod = FindMethodByName(type.MethodList(), "get_Size"sv);
        if (!sizeMethod || !sizeMethod.Flags().SpecialName())
        {
            NatvisDiagnostic(process, L"IVector<T>.Size not present or missing SpecialName flag", NatvisDiagnosticLevel::Warning);
            return {};
        }
        auto propData = CreatePropertyData(process, typeSig, sizeMethod, "Size", propIid, sizeMethod - type.MethodList().first);
        if (!propData)
        {
            NatvisDiagnostic(process, L"Failed to create property data for IVector<T>.Size", NatvisDiagnosticLevel::Warning);
            return {};
        }
        pseudoPropertyData.m_vectorPropertyData->sizeProperty = std::move(propData).value();
        // It's OK to not ignore Size and leave it also as a normal property.
        return {};
    }

    XLANG_ASSERT(type.TypeName() == "IIterable`1"sv);
    const auto firstMethod = FindMethodByName(type.MethodList(), "First"sv);
    if (!firstMethod)
    {
        NatvisDiagnostic(process, L"Failed to find method for IIterable<T>.First()", NatvisDiagnosticLevel::Warning);
        return {};
    }
    auto firstProperty = CreatePropertyData(process, typeSig, firstMethod, "First", propIid, firstMethod - type.MethodList().first);
    if (!firstProperty)
    {
        NatvisDiagnostic(process, L"Failed to create property data for IIterable<T>.First()", NatvisDiagnosticLevel::Warning);
        return {};
    }

    // Follow the return type of First() to get IIterator<!T>
    auto firstReturnType = firstMethod.Signature().ReturnType().Type();
    auto firstReturnGenericInst = std::get_if<GenericTypeInstSig>(&firstReturnType.Type());
    if (!firstReturnGenericInst)
    {
        NatvisDiagnostic(process, L"IIterable<T>.First() return type not a GenericTypeInst", NatvisDiagnosticLevel::Warning);
        return {};
    }
    auto iterableGenericInst = std::get_if<GenericTypeInstSig>(&typeSig.Type());
    if (!iterableGenericInst)
    {
        NatvisDiagnostic(process, L"IIterable<T> not a GenericTypeInst", NatvisDiagnosticLevel::Warning);
        return {};
    }
    auto iterableGenericArgs = iterableGenericInst->GenericArgs();

    // So far, we should have IIterator`1<!0>. Now we need to instantiate this with the generic arg in the originating IIterable`<T> to get IIterator`1<!T>
    TypeSig iteratorTypeSig = TypeSig{ ReplaceGenericIndices(*firstReturnGenericInst, std::vector<TypeSig>{ iterableGenericArgs.first, iterableGenericArgs.second }) };
    auto [iteratorType, iteratorPropIid] = ResolveTypeInterface(process, iteratorTypeSig);

    if (iteratorType.TypeNamespace() != "Windows.Foundation.Collections"sv || iteratorType.TypeName() != "IIterator`1"sv)
    {
        NatvisDiagnostic(process, L"IIterable<T>.First() did not resolve to IIterator", NatvisDiagnosticLevel::Warning);
        return {};
    }

    const auto moveNextMethod = FindMethodByName(iteratorType.MethodList(), "MoveNext"sv);
    if (!moveNextMethod)
    {
        NatvisDiagnostic(process, L"Failed to find method for IIterator<T>.MoveNext()", NatvisDiagnosticLevel::Warning);
        return {};
    }
    auto moveNextProperty = CreatePropertyData(process, iteratorTypeSig, moveNextMethod, "MoveNext", iteratorPropIid, moveNextMethod - iteratorType.MethodList().first);
    if (!moveNextProperty)
    {
        NatvisDiagnostic(process, L"Failed to create property data for IIterator<T>.MoveNext()", NatvisDiagnosticLevel::Warning);
        return {};
    }
    const auto currentMethod = FindMethodByName(iteratorType.MethodList(), "get_Current"sv);
    if (!currentMethod)
    {
        NatvisDiagnostic(process, L"Failed to find method for IIterator<T>.get_Current()", NatvisDiagnosticLevel::Warning);
        return {};
    }
    auto currentProperty = CreatePropertyData(process, iteratorTypeSig, currentMethod, "Current", iteratorPropIid, currentMethod - iteratorType.MethodList().first);
    if (!currentProperty)
    {
        NatvisDiagnostic(process, L"Failed to create property data for IIterator<T>.get_Current()", NatvisDiagnosticLevel::Warning);
        return {};
    }


    pseudoPropertyData.m_vectorPropertyData->firstProperty = std::move(firstProperty).value();
    pseudoPropertyData.m_vectorPropertyData->moveNextProperty = std::move(moveNextProperty).value();
    pseudoPropertyData.m_vectorPropertyData->currentProperty = std::move(currentProperty).value();
    return {};
}

// Return property names to ignore in normal processing
std::vector<std::string_view> GetPseudoProperties(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& typeSig,
    TypeDef const& type,
    std::wstring const& propIid,
    _Inout_ PseudoPropertyData& pseudoPropertyData)
{
    std::vector<std::string_view> result;
    auto ignore = GetIteratorPseudoProperties(process, typeSig, type, propIid, pseudoPropertyData);
    result.insert(result.end(), ignore.begin(), ignore.end());
    ignore = GetVectorPseudoProperties(process, typeSig, type, propIid, pseudoPropertyData);
    result.insert(result.end(), ignore.begin(), ignore.end());
    return result;
}

void GetInterfaceData(
    Microsoft::VisualStudio::Debugger::DkmProcess* process,
    TypeSig const& typeSig,
    _Inout_ std::vector<PropertyData>& propertyData,
    _Inout_ bool& isStringable,
    _Inout_ PseudoPropertyData& pseudoPropertyData)
{
    auto [type, propIid] = ResolveTypeInterface(process, typeSig);

    if (!type)
    {
        return;
    }

    if (propIid == IID_IStringable)
    {
        isStringable = true;
        return;
    }

    auto ignoreMethods = GetPseudoProperties(process, typeSig, type, propIid, pseudoPropertyData);

    int32_t propIndex = -1;
    for (auto&& method : type.MethodList())
    {
        propIndex++;

        auto isGetter = method.Flags().SpecialName() && starts_with(method.Name(), "get_");
        if (!isGetter)
        {
            continue;
        }
        if (std::ranges::any_of(ignoreMethods, [methodName = method.Name()](auto&& name) { return name == methodName; }))
        {
            continue;
        }

        std::string_view propName = method.Name().substr(4);
        auto propData = CreatePropertyData(process, typeSig, method, propName, propIid, propIndex);
        if (!propData.has_value())
        {
            continue;
        }

        propertyData.emplace_back(std::move(propData).value());
    }
}

void object_visualizer::GetPropertyData()
{
    auto valueHome = make_com_ptr(m_pVisualizedExpression->ValueHome());
    com_ptr<DkmPointerValueHome> pObject = valueHome.as<DkmPointerValueHome>();
    auto rc = GetRuntimeClass(m_pVisualizedExpression.get(), pObject.get(), m_objectType);
    if (rc.empty())
    {
        return;
    }
    auto process = m_pVisualizedExpression->RuntimeInstance()->Process();
    // runtime class name is delimited by L"..."
    GetTypeProperties(process, std::string_view{ rc.data() + 2, rc.length() - 3 });
}

void object_visualizer::GetTypeProperties(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& type_name)
{
    // TODO: add support for direct generic interface implementations (e.g., key_value_pair)
    auto typeSig = FindType(process, type_name);
    TypeDef type{};
    if (auto const* index = std::get_if<coded_index<TypeDefOrRef>>(&typeSig.Type()))
    {
        type = ResolveType(process, *index);
    }
    else if (auto const* genericInst = std::get_if<GenericTypeInstSig>(&typeSig.Type()))
    {
        type = ResolveType(process, genericInst->GenericType());
    }

    if (!type)
    {
        return;
    }

    if (get_category(type) == category::class_type)
    {
        auto const& [extends_namespace, extends_name] = get_base_class_namespace_and_name(type);
        if(!extends_namespace.empty() && !extends_name.empty())
        {
            auto base_type = std::string(extends_namespace) + "." + std::string(extends_name);
            if (base_type != "System.Object")
            {
                GetTypeProperties(process, base_type);
            }
        }
        auto impls = type.InterfaceImpl();
        for (auto&& impl : impls)
        {
            GetInterfaceData(process, ExpandInterfaceImplForType(impl.Interface(), typeSig), m_propertyData, m_isStringable, m_pseudoPropertyData);
        }
    }
    else if (get_category(type) == category::interface_type)
    {
        auto impls = type.InterfaceImpl();
        for (auto&& impl : impls)
        {
            GetInterfaceData(process, ExpandInterfaceImplForType(impl.Interface(), typeSig), m_propertyData, m_isStringable, m_pseudoPropertyData);
        }
        GetInterfaceData(process, typeSig, m_propertyData, m_isStringable, m_pseudoPropertyData);
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
    pInitialChildren->Members = nullptr;
    pInitialChildren->Length = 0;
    // Ignore metadata errors to ensure that Raw Data is always available
    if (GetChildCount() == 0)
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

    IF_FAIL_RET(EnsurePseudoProperties());

    com_ptr<DkmEvaluationResultEnumContext> pEnumContext;
    IF_FAIL_RET(DkmEvaluationResultEnumContext::Create(
        static_cast<uint32_t>(GetChildCount()),
        m_pVisualizedExpression->StackFrame(),
        pInspectionContext,
        this,
        pEnumContext.put()));

    if (InitialRequestSize > 0)
    {
        IF_FAIL_RET(GetItems(m_pVisualizedExpression.get(), pEnumContext.get(), 0, InitialRequestSize, pInitialChildren));
    }

    *ppEnumContext = pEnumContext.detach();

    return S_OK;
}

HRESULT CreateFailedEvaulationExpression(_In_ DkmVisualizedExpression* pParent,
    _In_ const DkmSourceString& errorMessage,
    _In_ const DkmSourceString& displayName,
    _COM_Outptr_ DkmChildVisualizedExpression** ppResult)
{
    com_ptr<DkmString> pErrorMessage;
    IF_FAIL_RET(DkmString::Create(errorMessage, pErrorMessage.put()));

    com_ptr<DkmString> pDisplayName;
    IF_FAIL_RET(DkmString::Create(displayName, pDisplayName.put()));

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

    com_ptr<DkmChildVisualizedExpression> pVisualizedExpression;
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
        pVisualizedExpression.put()
    ));

    *ppResult = pVisualizedExpression.detach();
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
    auto childCount = std::min(GetChildCount() - StartIndex, (size_t)Count);
    auto EndIndex = StartIndex + childCount;

    IF_FAIL_RET(DkmAllocArray(childCount, &resultValues));

    auto pParent = pVisualizedExpression;
    UINT32 currentIndex = StartIndex;
    for(; currentIndex < m_propertyData.size() && currentIndex < EndIndex; ++currentIndex)
    {
        auto& prop = m_propertyData[currentIndex];
        com_ptr<DkmChildVisualizedExpression> pPropertyVisualized;
        if(FAILED(CreateChildVisualizedExpression(prop, pParent, m_objectType, pPropertyVisualized.put())))
        {
            IF_FAIL_RET(CreateFailedEvaulationExpression(pParent, L"<Property evaluation failed>", prop.displayName.c_str(), pPropertyVisualized.put()));
        }
        resultValues.Members[currentIndex - StartIndex] = pPropertyVisualized.detach();
    }

    auto propertiesAdded = currentIndex - StartIndex;
    auto pseudoPropertyStartIndex = currentIndex - m_propertyData.size();
    IF_FAIL_RET(EvaluatePseudoProperties(pVisualizedExpression, pseudoPropertyStartIndex, Count - propertiesAdded, resultValues.Members + propertiesAdded));

    *pItems = resultValues.Detach();
    return S_OK;
}

void EvaulateIteratorPseudoProperty(
    _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pParent,
    _In_ DkmPointerValueHome* pObject,
    _In_ ObjectType objectType,
    _Inout_ IteratorPropertyData& propertyData,
    _COM_Outptr_ DkmChildVisualizedExpression** ppResult)
{
    if (!propertyData.hasCurrent.has_value())
    {
        bool value;
        if (FAILED(EvaluatePropertyValue(propertyData.hasCurrentProperty, pParent, pObject, objectType, value)))
        {
            check_hresult(CreateFailedEvaulationExpression(pParent, L"<Property evaluation failed>", propertyData.hasCurrentProperty.displayName.c_str(), ppResult));
        }
        propertyData.hasCurrent = value;
    }

    const auto& prop = propertyData.hasCurrent.value() ? propertyData.currentProperty : propertyData.hasCurrentProperty;
    com_ptr<DkmChildVisualizedExpression> pPropertyVisualized;
    if (FAILED(CreateChildVisualizedExpression(prop, pParent, objectType, pPropertyVisualized.put())))
    {
        check_hresult(CreateFailedEvaulationExpression(pParent, L"<Property evaluation failed>", prop.displayName.c_str(), ppResult));
    }
    *ppResult = pPropertyVisualized.detach();
}

void EvaluateNextVectorElement(
    _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pParent,
    _Inout_ VectorPropertyData& propertyData)
{
    XLANG_ASSERT(propertyData.elementExpressions.size() < propertyData.size);
    auto currentIndex = propertyData.elementExpressions.size();
    com_ptr<DkmChildVisualizedExpression> pPropertyVisualized;
    auto elementProperty = propertyData.currentProperty;
    elementProperty.displayName = std::format(L"[{}]", currentIndex);
    if (FAILED(CreateChildVisualizedExpression(elementProperty, pParent, propertyData.iteratorInstance.get(), ObjectType::Abi, pPropertyVisualized.put())))
    {
        check_hresult(CreateFailedEvaulationExpression(pParent, L"<Property evaluation failed>", elementProperty.displayName.c_str(), pPropertyVisualized.put()));
    }
    propertyData.elementExpressions.push_back(std::move(pPropertyVisualized));

    // Execute MoveCurrent
    bool moveCurrentResult;
    check_hresult(EvaluatePropertyValue(propertyData.moveNextProperty, pParent, propertyData.iteratorInstance.get(), ObjectType::Abi, moveCurrentResult));
}

size_t EvaluateVectorPseudoProperties(
    _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pParent,
    _In_ DkmPointerValueHome* pObject,
    _In_ ObjectType objectType,
    size_t StartIndex,
    size_t Count,
    _Inout_ VectorPropertyData& propertyData,
    _Outptr_result_buffer_to_(Count, return) DkmChildVisualizedExpression** ppResult)
{
    if (StartIndex == Count)
    {
        return 0;
    }

    if (propertyData.failureExpression)
    {
        propertyData.failureExpression.copy_to(ppResult);
        return 1;
    }

    // If this isn't the case, did we get out of sync somehow?
    XLANG_ASSERT(propertyData.elementExpressions.size() == StartIndex);

    auto elementsToFetch = std::min(Count, propertyData.size.value() - propertyData.elementExpressions.size());
    for (size_t i = 0; i < elementsToFetch; ++i)
    {
        EvaluateNextVectorElement(pParent, propertyData);
        propertyData.elementExpressions.back().copy_to(ppResult + i);
    }
    return elementsToFetch;
}

HRESULT object_visualizer::EvaluatePseudoProperties(
    _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pParent,
    size_t StartIndex,
    size_t Count,
    _Outptr_result_buffer_(Count) Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression** expressions) try
{
    if (StartIndex == Count)
    {
        return S_OK;
    }

    auto valueHome = make_com_ptr(pParent->ValueHome());
    auto pObject = DkmPointerValueHome::TryCast(valueHome.get());
    if (!pObject)
    {
        return E_NOINTERFACE;
    }

    if (m_pseudoPropertyData.m_iteratorPropertyData)
    {
        if (StartIndex == 0)
        {
            EvaulateIteratorPseudoProperty(pParent, pObject, m_objectType, *m_pseudoPropertyData.m_iteratorPropertyData, expressions);
            ++StartIndex;
            ++expressions;
            --Count;
        }
        --StartIndex;
    }

    if (m_pseudoPropertyData.m_vectorPropertyData)
    {
        EvaluateVectorPseudoProperties(pParent, pObject, m_objectType, StartIndex, Count, *m_pseudoPropertyData.m_vectorPropertyData, expressions);
    }

    return S_OK;
}
catch (...)
{
    return winrt::to_hresult();
}

HRESULT EnsureVectorPseudoProperties(
    _In_ DkmVisualizedExpression* pParent,
    _In_ DkmPointerValueHome* pParentObject,
    ObjectType parentObjectType,
    _Inout_ VectorPropertyData& propertyData)
{
    // Evaluate Size and obtain IITerator from IIterable<T>.First() for vector properties
    uint32_t size;
    if (FAILED(EvaluatePropertyValue(propertyData.sizeProperty, pParent, pParentObject, parentObjectType, size)))
    {
        return CreateFailedEvaulationExpression(pParent, L"Failed to evaluate collection Size", L"[elements]", propertyData.failureExpression.put());
    }
    com_ptr<DkmPointerValueHome> pIterator;
    if (FAILED(EvaluatePropertyValue(propertyData.firstProperty, pParent, pParentObject, parentObjectType, pIterator)))
    {
        return CreateFailedEvaulationExpression(pParent, L"Failed to evaluate collection.First()", L"[elements]", propertyData.failureExpression.put());
    }

    propertyData.size = size;
    propertyData.iteratorInstance = pIterator;
    return S_OK;
}

HRESULT object_visualizer::EnsurePseudoProperties()
{
    auto valueHome = make_com_ptr(m_pVisualizedExpression->ValueHome());
    auto pObject = DkmPointerValueHome::TryCast(valueHome.get());
    if (!pObject)
    {
        return E_NOINTERFACE;
    }

    if (m_pseudoPropertyData.m_vectorPropertyData)
    {
        IF_FAIL_RET(EnsureVectorPseudoProperties(m_pVisualizedExpression.get(), pObject, m_objectType, *m_pseudoPropertyData.m_vectorPropertyData));
    }
    return S_OK;
}

size_t object_visualizer::GetPseudoPropertyCount() const
{
    size_t result = 0;
    if (m_pseudoPropertyData.m_iteratorPropertyData)
    {
        ++result;
    }
    if (m_pseudoPropertyData.m_vectorPropertyData)
    {
        if (m_pseudoPropertyData.m_vectorPropertyData->size)
        {
            result += m_pseudoPropertyData.m_vectorPropertyData->size.value();
        }
        else
        {
            // Save one space for the catch-all failure
            ++result;
        }
    }
    return result;
}

