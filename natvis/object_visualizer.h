#pragma once

enum class PropertyCategory
{
    Bool,
    Char,
    Int1,
    Uint1,
    Int2,
    Uint2,
    Int4,
    Uint4,
    Int8,
    Uint8,
    Real4,
    Real8,
    String,
    Guid,
    Value,
    Class,
};

inline constexpr bool IsBuiltIn(PropertyCategory value) noexcept
{
    return PropertyCategory::Bool <= value && value < PropertyCategory::Value;
}

enum class ObjectType
{
    Abi,
    Projection,
};

// Metadata for resolving a runtime class property value
struct PropertyData 
{
    std::wstring iid;
    int32_t index;
    PropertyCategory category;
    std::wstring abiType;
    std::wstring displayType;
    std::wstring displayName;
};

// Special case for IIterator`1<T>
struct IteratorPropertyData
{
    std::optional<bool> hasCurrent;
    PropertyData currentProperty;
    PropertyData hasCurrentProperty;
};

// object_visualizer provides the visualization data model for WinRT objects, 
// both for root-level RAII IInspectables, and for nested ABI IInspectable properties.
struct __declspec(uuid("c7da92da-3bc9-4312-8a93-46f480663980"))
object_visualizer : winrt::implements<object_visualizer, ::IUnknown>
{
    object_visualizer(Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression, ObjectType objectType)
    {
        m_pVisualizedExpression = make_com_ptr(pVisualizedExpression);
        m_objectType = objectType;
    }

    ~object_visualizer()
    {
    }

    static HRESULT CreateEvaluationResult(_In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression, _In_ ObjectType objectType, _Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResult** ppResultObject);

    HRESULT CreateEvaluationResult(_Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResult** ppResultObject);

    HRESULT GetChildren(
        _In_ UINT32 InitialRequestSize,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmInspectionContext* pInspectionContext,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pInitialChildren,
        _Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext** ppEnumContext
    );

    HRESULT GetItems(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext* pEnumContext,
        _In_ UINT32 StartIndex,
        _In_ UINT32 Count,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pItems
    );

private:
    void GetPropertyData();
    void GetTypeProperties(Microsoft::VisualStudio::Debugger::DkmProcess* process, std::string_view const& type_name);
    size_t GetChildCount() const { return m_propertyData.size() + GetPseudoPropertyCount(); }
    winrt::com_ptr<Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression> m_pVisualizedExpression;
    ObjectType m_objectType;
    std::vector<PropertyData> m_propertyData;
    bool m_isStringable{ false };
    std::unique_ptr<IteratorPropertyData> m_iteratorPropertyData;

    HRESULT GetPseudoProperties(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        size_t Count,
        _Out_writes_(Count) Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression** expressions);
    size_t GetPseudoPropertyCount() const;
};
