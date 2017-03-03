// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Inking::Analysis {

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

namespace Windows::UI::Input::Inking::Analysis {

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

namespace Windows::UI::Input::Inking::Analysis {

template <typename T> struct impl_IInkAnalysisInkBullet;
template <typename T> struct impl_IInkAnalysisInkDrawing;
template <typename T> struct impl_IInkAnalysisInkWord;
template <typename T> struct impl_IInkAnalysisLine;
template <typename T> struct impl_IInkAnalysisListItem;
template <typename T> struct impl_IInkAnalysisNode;
template <typename T> struct impl_IInkAnalysisParagraph;
template <typename T> struct impl_IInkAnalysisResult;
template <typename T> struct impl_IInkAnalysisRoot;
template <typename T> struct impl_IInkAnalysisWritingRegion;
template <typename T> struct impl_IInkAnalyzer;
template <typename T> struct impl_IInkAnalyzerFactory;

}

namespace Windows::UI::Input::Inking::Analysis {

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

}

}
