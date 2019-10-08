#include "pch.h"
#include "object_visualizer.h"
#include "property_visualizer.h"

using namespace Microsoft::VisualStudio::Debugger;
using namespace Microsoft::VisualStudio::Debugger::Evaluation;

using namespace xlang;
using namespace xlang::meta;
using namespace xlang::meta::reader;

HRESULT property_visualizer::GetChildren(
        _In_ UINT32 InitialRequestSize,
        _In_ DkmInspectionContext* pInspectionContext,
        _Out_ DkmArray<DkmChildVisualizedExpression*>* pVisualizedInitialChildren,
        _Deref_out_ DkmEvaluationResultEnumContext** ppEnumContext
        )
{
    // Forward this on to the EE. 
    CAutoDkmArray<DkmEvaluationResult*> initialChildren;
    IF_FAIL_RET(m_pVisualizedExpression->GetChildrenCallback(m_pEEEvaluationResult.get(), InitialRequestSize, pInspectionContext, &initialChildren, ppEnumContext));

    // Need to create a DkmArray of DkmChildVisualizedExpression that contain the evaluation results and return that.
    DkmAllocArray(initialChildren.Length, pVisualizedInitialChildren);
    
    for (DWORD i = 0; i < initialChildren.Length; i++)
    {
        auto pCurrEvaluationResult = make_com_ptr(initialChildren.Members[i]);
        
        if (pCurrEvaluationResult->TagValue() != DkmEvaluationResult::Tag::SuccessResult)
        {
            return E_FAIL;
        }

        DkmSuccessEvaluationResult* pCurrSuccessEvaluationResult = (DkmSuccessEvaluationResult*)(pCurrEvaluationResult.get());

        winrt::com_ptr<DkmPointerValueHome> pPointerValueHome;
        IF_FAIL_RET(DkmPointerValueHome::Create(pCurrSuccessEvaluationResult->Address()->Value(), pPointerValueHome.put()));

        winrt::com_ptr<DkmChildVisualizedExpression> pChildVisualizedExpression;
        IF_FAIL_RET(DkmChildVisualizedExpression::Create(
            pInspectionContext,
            pChildVisualizedExpression->Parent()->VisualizerId(),
            pChildVisualizedExpression->Parent()->SourceId(),
            pChildVisualizedExpression->Parent()->StackFrame(),
            pPointerValueHome.get(),
            pCurrEvaluationResult.get(),
            m_pVisualizedExpression.get(), // (parent)
            i,
            this,
            pChildVisualizedExpression.put()
            ));

        pVisualizedInitialChildren->Members[i] = pChildVisualizedExpression.detach();
    }

    return S_OK;
}

HRESULT property_visualizer::GetItems(
        _In_ DkmEvaluationResultEnumContext* pEnumContext,
        _In_ UINT32 StartIndex,
        _In_ UINT32 Count,
        _Out_ DkmArray<DkmChildVisualizedExpression*>* pItems
        )
{
    // Forward this on to the EE. 
    CAutoDkmArray<DkmEvaluationResult*> evaluationResults;
    IF_FAIL_RET(m_pVisualizedExpression->GetItemsCallback(pEnumContext, StartIndex, Count, &evaluationResults));

    DkmAllocArray(evaluationResults.Length, pItems);
    
    for (DWORD i = 0; i < evaluationResults.Length; i++)
    {
        auto pCurrEvaluationResult = make_com_ptr(evaluationResults.Members[i]);
        
        if (pCurrEvaluationResult->TagValue() != DkmEvaluationResult::Tag::SuccessResult)
        {
            return E_FAIL;
        }

        DkmSuccessEvaluationResult* pCurrSuccessEvaluationResult = (DkmSuccessEvaluationResult*)(pCurrEvaluationResult.get());

        winrt::com_ptr<DkmPointerValueHome> pPointerValueHome;
        auto address = pCurrSuccessEvaluationResult->Address();
        IF_FAIL_RET(DkmPointerValueHome::Create(address ? address->Value() : 0, pPointerValueHome.put()));

        winrt::com_ptr<DkmChildVisualizedExpression> pChildVisualizedExpression;
        IF_FAIL_RET(DkmChildVisualizedExpression::Create(
            m_pVisualizedExpression->InspectionContext(),
            m_pVisualizedExpression->Parent()->VisualizerId(),
            m_pVisualizedExpression->Parent()->SourceId(),
            m_pVisualizedExpression->Parent()->StackFrame(),
            pPointerValueHome.get(),
            pCurrEvaluationResult.get(),
            m_pVisualizedExpression.get(), // (parent)
            i,
            this,
            pChildVisualizedExpression.put()
            ));

        pItems->Members[i] = pChildVisualizedExpression.detach();
    }


    return S_OK;
}

HRESULT property_visualizer::SetValueAsString(
    _In_ DkmString* pValue,
    _In_ UINT32 Timeout,
    _Deref_out_opt_ DkmString** ppErrorText
    )
{
    // Forward this on to the EE. 
    IF_FAIL_RET(m_pVisualizedExpression->SetValueAsStringCallback(m_pEEEvaluationResult.get(), pValue, Timeout, ppErrorText));

    return S_OK;
}

HRESULT property_visualizer::GetUnderlyingString(
        _Deref_out_opt_ DkmString** ppStringValue
        )
{
    // Forward this on to the EE. 
    IF_FAIL_RET(m_pVisualizedExpression->GetUnderlyingStringCallback(m_pEEEvaluationResult.get(), ppStringValue));

    return S_OK;
}