#pragma once

// property_visualizer provides the visualization data model for leaf (non-WinRT object) 
// nodes in the WinRT object graph, forwarding its implementation back to the expression
// evaluator for external types.
struct __declspec(uuid("87feab93-47a3-4f55-b48b-a29317fa52da"))
property_visualizer : winrt::implements<property_visualizer, ::IUnknown>
{
    property_visualizer(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression* pVisualizedExpression,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmSuccessEvaluationResult* pEEEvaluationResult)
    {
        m_pVisualizedExpression = make_com_ptr(pVisualizedExpression);
        m_pEEEvaluationResult = make_com_ptr(pEEEvaluationResult);
    }

    ~property_visualizer()
    {
    }

    HRESULT GetChildren(
        _In_ UINT32 InitialRequestSize,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmInspectionContext* pInspectionContext,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pInitialChildren,
        _Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext** ppEnumContext
        );

    HRESULT GetItems(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext* pEnumContext,
        _In_ UINT32 StartIndex,
        _In_ UINT32 Count,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pItems
        );

    HRESULT SetValueAsString(
        _In_ Microsoft::VisualStudio::Debugger::DkmString* pValue,
        _In_ UINT32 Timeout,
        _Deref_out_opt_ Microsoft::VisualStudio::Debugger::DkmString** ppErrorText
        );

    HRESULT GetUnderlyingString(
        _Deref_out_opt_ Microsoft::VisualStudio::Debugger::DkmString** ppStringValue
        );

private:
    // The DkmVisualizedExpression created for this object.
    winrt::com_ptr<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression> m_pVisualizedExpression;

    // The original evaluation result returned from the expression evaluator.
    winrt::com_ptr<Microsoft::VisualStudio::Debugger::Evaluation::DkmSuccessEvaluationResult> m_pEEEvaluationResult;
};