#pragma once

struct cppwinrt_visualizer : winrt::implements<cppwinrt_visualizer, 
    ::Microsoft::VisualStudio::Debugger::ComponentInterfaces::IDkmCustomVisualizer>
{
    cppwinrt_visualizer();
    ~cppwinrt_visualizer();

    STDMETHOD(EvaluateVisualizedExpression)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResult** ppResultObject
        );
    STDMETHOD(UseDefaultEvaluationBehavior)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _Out_ bool* pUseDefaultEvaluationBehavior,
        _Deref_out_opt_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResult** ppDefaultEvaluationResult
        );
    STDMETHOD(GetChildren)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _In_ UINT32 InitialRequestSize,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmInspectionContext* pInspectionContext,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pInitialChildren,
        _Deref_out_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext** ppEnumContext
        );
    STDMETHOD(GetItems)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmEvaluationResultEnumContext* pEnumContext,
        _In_ UINT32 StartIndex,
        _In_ UINT32 Count,
        _Out_ Microsoft::VisualStudio::Debugger::DkmArray<Microsoft::VisualStudio::Debugger::Evaluation::DkmChildVisualizedExpression*>* pItems
        );
    STDMETHOD(SetValueAsString)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _In_ Microsoft::VisualStudio::Debugger::DkmString* pValue,
        _In_ UINT32 Timeout,
        _Deref_out_opt_ Microsoft::VisualStudio::Debugger::DkmString** ppErrorText
        );
    STDMETHOD(GetUnderlyingString)(
        _In_ Microsoft::VisualStudio::Debugger::Evaluation::DkmVisualizedExpression* pVisualizedExpression,
        _Deref_out_opt_ Microsoft::VisualStudio::Debugger::DkmString** ppStringValue
        );
};
