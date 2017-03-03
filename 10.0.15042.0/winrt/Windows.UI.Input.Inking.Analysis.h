// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.UI.Input.Inking.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Input.Inking.Analysis.3.h"
#include "Windows.UI.Input.Inking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>
{
    HRESULT __stdcall get_DrawingKind(Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrawingKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Center(impl::abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Points(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextAlternates(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAlternates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisLine> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndentLevel(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndentLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRect(impl::abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotatedBoundingRect(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotatedBoundingRect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Children(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(impl::abi_arg_out<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStrokeIds(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> strokeIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *strokeIds = detach_abi(this->shim().GetStrokeIds());
            return S_OK;
        }
        catch (...)
        {
            *strokeIds = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisResult> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>
{
    HRESULT __stdcall get_Status(Windows::UI::Input::Inking::Analysis::InkAnalysisStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindNodes(Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind nodeKind, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindNodes(nodeKind));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>
{
    HRESULT __stdcall get_RecognizedText(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalyzer> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalyzer>
{
    HRESULT __stdcall get_AnalysisRoot(impl::abi_arg_out<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnalysisRoot());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAnalyzing(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAnalyzing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDataForStroke(impl::abi_arg_in<Windows::UI::Input::Inking::IInkStroke> stroke) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDataForStroke(*reinterpret_cast<const Windows::UI::Input::Inking::InkStroke *>(&stroke));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDataForStrokes(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke>> strokes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDataForStrokes(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> *>(&strokes));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearDataForAllStrokes() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearDataForAllStrokes();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveDataForStroke(uint32_t strokeId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveDataForStroke(strokeId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveDataForStrokes(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<uint32_t>> strokeIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveDataForStrokes(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<uint32_t> *>(&strokeIds));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceDataForStroke(impl::abi_arg_in<Windows::UI::Input::Inking::IInkStroke> stroke) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceDataForStroke(*reinterpret_cast<const Windows::UI::Input::Inking::InkStroke *>(&stroke));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStrokeDataKind(uint32_t strokeId, Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind strokeKind) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStrokeDataKind(strokeId, strokeKind);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AnalyzeAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AnalyzeAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory> : produce_base<D, Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
{
    HRESULT __stdcall abi_CreateAnalyzer(impl::abi_arg_out<Windows::UI::Input::Inking::Analysis::IInkAnalyzer> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAnalyzer());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Input::Inking::Analysis {

template <typename D> Windows::UI::Input::Inking::Analysis::InkAnalysisRoot impl_IInkAnalyzer<D>::AnalysisRoot() const
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisRoot value { nullptr };
    check_hresult(WINRT_SHIM(IInkAnalyzer)->get_AnalysisRoot(put_abi(value)));
    return value;
}

template <typename D> bool impl_IInkAnalyzer<D>::IsAnalyzing() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IInkAnalyzer)->get_IsAnalyzing(&value));
    return value;
}

template <typename D> void impl_IInkAnalyzer<D>::AddDataForStroke(const Windows::UI::Input::Inking::InkStroke & stroke) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_AddDataForStroke(get_abi(stroke)));
}

template <typename D> void impl_IInkAnalyzer<D>::AddDataForStrokes(iterable<Windows::UI::Input::Inking::InkStroke> strokes) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_AddDataForStrokes(get_abi(strokes)));
}

template <typename D> void impl_IInkAnalyzer<D>::ClearDataForAllStrokes() const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_ClearDataForAllStrokes());
}

template <typename D> void impl_IInkAnalyzer<D>::RemoveDataForStroke(uint32_t strokeId) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_RemoveDataForStroke(strokeId));
}

template <typename D> void impl_IInkAnalyzer<D>::RemoveDataForStrokes(iterable<uint32_t> strokeIds) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_RemoveDataForStrokes(get_abi(strokeIds)));
}

template <typename D> void impl_IInkAnalyzer<D>::ReplaceDataForStroke(const Windows::UI::Input::Inking::InkStroke & stroke) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_ReplaceDataForStroke(get_abi(stroke)));
}

template <typename D> void impl_IInkAnalyzer<D>::SetStrokeDataKind(uint32_t strokeId, Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind strokeKind) const
{
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_SetStrokeDataKind(strokeId, strokeKind));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> impl_IInkAnalyzer<D>::AnalyzeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> result;
    check_hresult(WINRT_SHIM(IInkAnalyzer)->abi_AnalyzeAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::Analysis::InkAnalyzer impl_IInkAnalyzerFactory<D>::CreateAnalyzer() const
{
    Windows::UI::Input::Inking::Analysis::InkAnalyzer result { nullptr };
    check_hresult(WINRT_SHIM(IInkAnalyzerFactory)->abi_CreateAnalyzer(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::Analysis::InkAnalysisStatus impl_IInkAnalysisResult<D>::Status() const
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisStatus value {};
    check_hresult(WINRT_SHIM(IInkAnalysisResult)->get_Status(&value));
    return value;
}

template <typename D> uint32_t impl_IInkAnalysisNode<D>::Id() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind impl_IInkAnalysisNode<D>::Kind() const
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind value {};
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IInkAnalysisNode<D>::BoundingRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_BoundingRect(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> impl_IInkAnalysisNode<D>::RotatedBoundingRect() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> value;
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_RotatedBoundingRect(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> impl_IInkAnalysisNode<D>::Children() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> value;
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_Children(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Analysis::IInkAnalysisNode impl_IInkAnalysisNode<D>::Parent() const
{
    Windows::UI::Input::Inking::Analysis::IInkAnalysisNode value;
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IInkAnalysisNode<D>::GetStrokeIds() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> strokeIds;
    check_hresult(WINRT_SHIM(IInkAnalysisNode)->abi_GetStrokeIds(put_abi(strokeIds)));
    return strokeIds;
}

template <typename D> hstring impl_IInkAnalysisRoot<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisRoot)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> impl_IInkAnalysisRoot<D>::FindNodes(Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind nodeKind) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> result;
    check_hresult(WINRT_SHIM(IInkAnalysisRoot)->abi_FindNodes(nodeKind, put_abi(result)));
    return result;
}

template <typename D> hstring impl_IInkAnalysisWritingRegion<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisWritingRegion)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IInkAnalysisParagraph<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisParagraph)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IInkAnalysisListItem<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisListItem)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IInkAnalysisInkBullet<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisInkBullet)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IInkAnalysisLine<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisLine)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> int32_t impl_IInkAnalysisLine<D>::IndentLevel() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IInkAnalysisLine)->get_IndentLevel(&value));
    return value;
}

template <typename D> hstring impl_IInkAnalysisInkWord<D>::RecognizedText() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInkAnalysisInkWord)->get_RecognizedText(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IInkAnalysisInkWord<D>::TextAlternates() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IInkAnalysisInkWord)->get_TextAlternates(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind impl_IInkAnalysisInkDrawing<D>::DrawingKind() const
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind value {};
    check_hresult(WINRT_SHIM(IInkAnalysisInkDrawing)->get_DrawingKind(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IInkAnalysisInkDrawing<D>::Center() const
{
    Windows::Foundation::Point value {};
    check_hresult(WINRT_SHIM(IInkAnalysisInkDrawing)->get_Center(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> impl_IInkAnalysisInkDrawing<D>::Points() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> value;
    check_hresult(WINRT_SHIM(IInkAnalysisInkDrawing)->get_Points(put_abi(value)));
    return value;
}

inline InkAnalyzer::InkAnalyzer() :
    InkAnalyzer(activate_instance<InkAnalyzer>())
{}

}

}

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer>
{
    size_t operator()(const winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
