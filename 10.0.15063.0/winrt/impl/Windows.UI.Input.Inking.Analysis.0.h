// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct InkStroke;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Analysis {

enum class InkAnalysisDrawingKind
{
    Drawing = 0,
    Circle = 1,
    Ellipse = 2,
    Triangle = 3,
    IsoscelesTriangle = 4,
    EquilateralTriangle = 5,
    RightTriangle = 6,
    Quadrilateral = 7,
    Rectangle = 8,
    Square = 9,
    Diamond = 10,
    Trapezoid = 11,
    Parallelogram = 12,
    Pentagon = 13,
    Hexagon = 14,
};

enum class InkAnalysisNodeKind
{
    UnclassifiedInk = 0,
    Root = 1,
    WritingRegion = 2,
    Paragraph = 3,
    Line = 4,
    InkWord = 5,
    InkBullet = 6,
    InkDrawing = 7,
    ListItem = 8,
};

enum class InkAnalysisStatus
{
    Updated = 0,
    Unchanged = 1,
};

enum class InkAnalysisStrokeKind
{
    Auto = 0,
    Writing = 1,
    Drawing = 2,
};

struct IInkAnalysisInkBullet;
struct IInkAnalysisInkDrawing;
struct IInkAnalysisInkWord;
struct IInkAnalysisLine;
struct IInkAnalysisListItem;
struct IInkAnalysisNode;
struct IInkAnalysisParagraph;
struct IInkAnalysisResult;
struct IInkAnalysisRoot;
struct IInkAnalysisWritingRegion;
struct IInkAnalyzer;
struct IInkAnalyzerFactory;
struct InkAnalysisInkBullet;
struct InkAnalysisInkDrawing;
struct InkAnalysisInkWord;
struct InkAnalysisLine;
struct InkAnalysisListItem;
struct InkAnalysisNode;
struct InkAnalysisParagraph;
struct InkAnalysisResult;
struct InkAnalysisRoot;
struct InkAnalysisWritingRegion;
struct InkAnalyzer;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisLine>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisNode>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisResult>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalyzer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind>{ using type = enum_category; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkBullet" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkDrawing" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkWord" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisLine" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisListItem" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisNode" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisParagraph" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisResult" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisRoot" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalysisWritingRegion" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalyzer" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.IInkAnalyzerFactory" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkBullet" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkDrawing" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkWord" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisLine>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisLine" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisListItem" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisNode>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisNode" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisParagraph" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisResult>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisResult" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisRoot" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisWritingRegion" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalyzer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalyzer" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisDrawingKind" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisNodeKind" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisStatus>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisStatus" }; };
template <> struct name<Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Analysis.InkAnalysisStrokeKind" }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ static constexpr GUID value{ 0xEE049368,0x6110,0x4136,{ 0x95,0xF9,0xEE,0x80,0x9F,0xC2,0x00,0x30 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ static constexpr GUID value{ 0x6A85ED1F,0x1FE4,0x4E15,{ 0x89,0x8C,0x8E,0x11,0x23,0x77,0xE0,0x21 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ static constexpr GUID value{ 0x4BD228AD,0x83AF,0x4034,{ 0x8F,0x3B,0xF8,0x68,0x7D,0xFF,0xF4,0x36 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ static constexpr GUID value{ 0xA06D048D,0x2B8D,0x4754,{ 0xAD,0x5A,0xD0,0x87,0x11,0x93,0xA9,0x56 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ static constexpr GUID value{ 0xB4E3C23F,0xC4C3,0x4C3A,{ 0xA1,0xA6,0x9D,0x85,0x54,0x7E,0xE5,0x86 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ static constexpr GUID value{ 0x30831F05,0x5F64,0x4A2C,{ 0xBA,0x37,0x4F,0x48,0x87,0x87,0x95,0x74 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ static constexpr GUID value{ 0xD9AD045C,0x0CD1,0x4DD4,{ 0xA6,0x8B,0xEB,0x1F,0x12,0xB3,0xD7,0x27 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ static constexpr GUID value{ 0x8948BA79,0xA243,0x4AA3,{ 0xA2,0x94,0x1F,0x98,0xBD,0x0F,0xF5,0x80 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ static constexpr GUID value{ 0x3FB6A3C4,0x2FDE,0x4061,{ 0x85,0x02,0xA9,0x0F,0x32,0x54,0x5B,0x84 } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ static constexpr GUID value{ 0xDD6D6231,0xBD16,0x4663,{ 0xB5,0xAE,0x94,0x1D,0x30,0x43,0xEF,0x5B } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ static constexpr GUID value{ 0xF12B8F95,0x0866,0x4DC5,{ 0x8C,0x77,0xF8,0x86,0x14,0xDF,0xE3,0x8C } }; };
template <> struct guid<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ static constexpr GUID value{ 0x29138686,0x1963,0x49D8,{ 0x95,0x89,0xE1,0x43,0x84,0xC7,0x69,0xE3 } }; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisLine>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisLine; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisNode>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisNode; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisResult>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisResult; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion; };
template <> struct default_interface<Windows::UI::Input::Inking::Analysis::InkAnalyzer>{ using type = Windows::UI::Input::Inking::Analysis::IInkAnalyzer; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkBullet
{
    hstring RecognizedText() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkBullet<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkDrawing
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind DrawingKind() const;
    Windows::Foundation::Point Center() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> Points() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkDrawing<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkWord
{
    hstring RecognizedText() const;
    Windows::Foundation::Collections::IVectorView<hstring> TextAlternates() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkWord<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisLine
{
    hstring RecognizedText() const;
    int32_t IndentLevel() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisLine<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisListItem
{
    hstring RecognizedText() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisListItem<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisNode
{
    uint32_t Id() const;
    Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind Kind() const;
    Windows::Foundation::Rect BoundingRect() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> RotatedBoundingRect() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> Children() const;
    Windows::UI::Input::Inking::Analysis::IInkAnalysisNode Parent() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> GetStrokeIds() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisNode<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisParagraph
{
    hstring RecognizedText() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisParagraph<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisResult
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisStatus Status() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisResult<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisRoot
{
    hstring RecognizedText() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> FindNodes(Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind const& nodeKind) const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisRoot<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisWritingRegion
{
    hstring RecognizedText() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisWritingRegion<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzer
{
    Windows::UI::Input::Inking::Analysis::InkAnalysisRoot AnalysisRoot() const;
    bool IsAnalyzing() const;
    void AddDataForStroke(Windows::UI::Input::Inking::InkStroke const& stroke) const;
    void AddDataForStrokes(param::iterable<Windows::UI::Input::Inking::InkStroke> const& strokes) const;
    void ClearDataForAllStrokes() const;
    void RemoveDataForStroke(uint32_t strokeId) const;
    void RemoveDataForStrokes(param::iterable<uint32_t> const& strokeIds) const;
    void ReplaceDataForStroke(Windows::UI::Input::Inking::InkStroke const& stroke) const;
    void SetStrokeDataKind(uint32_t strokeId, Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind const& strokeKind) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Input::Inking::Analysis::InkAnalysisResult> AnalyzeAsync() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalyzer> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzer<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzerFactory
{
    Windows::UI::Input::Inking::Analysis::InkAnalyzer CreateAnalyzer() const;
};
template <> struct consume<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory> { template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzerFactory<D>; };

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DrawingKind(abi_t<Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind>* value) = 0;
    virtual HRESULT __stdcall get_Center(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Points(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TextAlternates(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IndentLevel(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind>* value) = 0;
    virtual HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_RotatedBoundingRect(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStrokeIds(::IUnknown** strokeIds) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::UI::Input::Inking::Analysis::InkAnalysisStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
    virtual HRESULT __stdcall FindNodes(abi_t<Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind> nodeKind, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecognizedText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnalysisRoot(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsAnalyzing(bool* value) = 0;
    virtual HRESULT __stdcall AddDataForStroke(::IUnknown* stroke) = 0;
    virtual HRESULT __stdcall AddDataForStrokes(::IUnknown* strokes) = 0;
    virtual HRESULT __stdcall ClearDataForAllStrokes() = 0;
    virtual HRESULT __stdcall RemoveDataForStroke(uint32_t strokeId) = 0;
    virtual HRESULT __stdcall RemoveDataForStrokes(::IUnknown* strokeIds) = 0;
    virtual HRESULT __stdcall ReplaceDataForStroke(::IUnknown* stroke) = 0;
    virtual HRESULT __stdcall SetStrokeDataKind(uint32_t strokeId, abi_t<Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind> strokeKind) = 0;
    virtual HRESULT __stdcall AnalyzeAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAnalyzer(::IUnknown** result) = 0;
};};

}
