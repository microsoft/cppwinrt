// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Input.Inking.Analysis.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.Input.Inking.0.h"
#include "Windows.UI.Input.Inking.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Inking::Analysis {

struct __declspec(uuid("ee049368-6110-4136-95f9-ee809fc20030")) __declspec(novtable) IInkAnalysisInkBullet : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
};

struct __declspec(uuid("6a85ed1f-1fe4-4e15-898c-8e112377e021")) __declspec(novtable) IInkAnalysisInkDrawing : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DrawingKind(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind * value) = 0;
    virtual HRESULT __stdcall get_Center(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_Points(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> ** value) = 0;
};

struct __declspec(uuid("4bd228ad-83af-4034-8f3b-f8687dfff436")) __declspec(novtable) IInkAnalysisInkWord : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
    virtual HRESULT __stdcall get_TextAlternates(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("a06d048d-2b8d-4754-ad5a-d0871193a956")) __declspec(novtable) IInkAnalysisLine : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
    virtual HRESULT __stdcall get_IndentLevel(int32_t * value) = 0;
};

struct __declspec(uuid("b4e3c23f-c4c3-4c3a-a1a6-9d85547ee586")) __declspec(novtable) IInkAnalysisListItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
};

struct __declspec(uuid("30831f05-5f64-4a2c-ba37-4f4887879574")) __declspec(novtable) IInkAnalysisNode : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind * value) = 0;
    virtual HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_RotatedBoundingRect(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall get_Children(Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> ** value) = 0;
    virtual HRESULT __stdcall get_Parent(Windows::UI::Input::Inking::Analysis::IInkAnalysisNode ** value) = 0;
    virtual HRESULT __stdcall abi_GetStrokeIds(Windows::Foundation::Collections::IVectorView<uint32_t> ** strokeIds) = 0;
};

struct __declspec(uuid("d9ad045c-0cd1-4dd4-a68b-eb1f12b3d727")) __declspec(novtable) IInkAnalysisParagraph : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
};

struct __declspec(uuid("8948ba79-a243-4aa3-a294-1f98bd0ff580")) __declspec(novtable) IInkAnalysisResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStatus * value) = 0;
};

struct __declspec(uuid("3fb6a3c4-2fde-4061-8502-a90f32545b84")) __declspec(novtable) IInkAnalysisRoot : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
    virtual HRESULT __stdcall abi_FindNodes(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind nodeKind, Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> ** result) = 0;
};

struct __declspec(uuid("dd6d6231-bd16-4663-b5ae-941d3043ef5b")) __declspec(novtable) IInkAnalysisWritingRegion : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(hstring * value) = 0;
};

struct __declspec(uuid("f12b8f95-0866-4dc5-8c77-f88614dfe38c")) __declspec(novtable) IInkAnalyzer : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AnalysisRoot(Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot ** value) = 0;
    virtual HRESULT __stdcall get_IsAnalyzing(bool * value) = 0;
    virtual HRESULT __stdcall abi_AddDataForStroke(Windows::UI::Input::Inking::IInkStroke * stroke) = 0;
    virtual HRESULT __stdcall abi_AddDataForStrokes(Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> * strokes) = 0;
    virtual HRESULT __stdcall abi_ClearDataForAllStrokes() = 0;
    virtual HRESULT __stdcall abi_RemoveDataForStroke(uint32_t strokeId) = 0;
    virtual HRESULT __stdcall abi_RemoveDataForStrokes(Windows::Foundation::Collections::IIterable<uint32_t> * strokeIds) = 0;
    virtual HRESULT __stdcall abi_ReplaceDataForStroke(Windows::UI::Input::Inking::IInkStroke * stroke) = 0;
    virtual HRESULT __stdcall abi_SetStrokeDataKind(uint32_t strokeId, winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind strokeKind) = 0;
    virtual HRESULT __stdcall abi_AnalyzeAsync(Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> ** result) = 0;
};

struct __declspec(uuid("29138686-1963-49d8-9589-e14384c769e3")) __declspec(novtable) IInkAnalyzerFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAnalyzer(Windows::UI::Input::Inking::Analysis::IInkAnalyzer ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisLine> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisLine; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisListItem> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisNode> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisNode; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisResult; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisRoot> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion; };
template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalyzer> { using default_interface = Windows::UI::Input::Inking::Analysis::IInkAnalyzer; };

}

namespace Windows::UI::Input::Inking::Analysis {

template <typename D>
struct WINRT_EBO impl_IInkAnalysisInkBullet
{
    hstring RecognizedText() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisInkDrawing
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind DrawingKind() const;
    Windows::Foundation::Point Center() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> Points() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisInkWord
{
    hstring RecognizedText() const;
    Windows::Foundation::Collections::IVectorView<hstring> TextAlternates() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisLine
{
    hstring RecognizedText() const;
    int32_t IndentLevel() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisListItem
{
    hstring RecognizedText() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisNode
{
    uint32_t Id() const;
    Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind Kind() const;
    Windows::Foundation::Rect BoundingRect() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> RotatedBoundingRect() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> Children() const;
    Windows::UI::Input::Inking::Analysis::IInkAnalysisNode Parent() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> GetStrokeIds() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisParagraph
{
    hstring RecognizedText() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisResult
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisRoot
{
    hstring RecognizedText() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> FindNodes(Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind nodeKind) const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalysisWritingRegion
{
    hstring RecognizedText() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalyzer
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisRoot AnalysisRoot() const;
    bool IsAnalyzing() const;
    void AddDataForStroke(const Windows::UI::Input::Inking::InkStroke & stroke) const;
    void AddDataForStrokes(iterable<Windows::UI::Input::Inking::InkStroke> strokes) const;
    void ClearDataForAllStrokes() const;
    void RemoveDataForStroke(uint32_t strokeId) const;
    void RemoveDataForStrokes(iterable<uint32_t> strokeIds) const;
    void ReplaceDataForStroke(const Windows::UI::Input::Inking::InkStroke & stroke) const;
    void SetStrokeDataKind(uint32_t strokeId, Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind strokeKind) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> AnalyzeAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IInkAnalyzerFactory
{
    Windows::UI::Input::Inking::Analysis::InkAnalyzer CreateAnalyzer() const;
};

}

namespace impl {

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisInkBullet<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisInkDrawing<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisInkWord<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisLine<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisListItem<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisNode<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisParagraph<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisResult<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisRoot<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalysisWritingRegion<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalyzer>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalyzer;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalyzer<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory;
    template <typename D> using consume = Windows::UI::Input::Inking::Analysis::impl_IInkAnalyzerFactory<D>;
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkBullet"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkDrawing"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkWord"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisLine>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisLine;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisLine"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisListItem"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisNode>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisNode"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisParagraph"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisResult>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisResult"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisRoot"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalysisWritingRegion"; }
};

template <> struct traits<Windows::UI::Input::Inking::Analysis::InkAnalyzer>
{
    using abi = ABI::Windows::UI::Input::Inking::Analysis::InkAnalyzer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Inking.Analysis.InkAnalyzer"; }
};

}

}
