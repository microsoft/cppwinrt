// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Pdf {

struct IPdfDocument;
struct IPdfDocumentStatics;
struct IPdfPage;
struct IPdfPageDimensions;
struct IPdfPageRenderOptions;
struct PdfDocument;
struct PdfPage;
struct PdfPageDimensions;
struct PdfPageRenderOptions;

}

namespace Windows::Data::Pdf {

struct IPdfDocument;
struct IPdfDocumentStatics;
struct IPdfPage;
struct IPdfPageDimensions;
struct IPdfPageRenderOptions;
struct PdfDocument;
struct PdfPage;
struct PdfPageDimensions;
struct PdfPageRenderOptions;

}

namespace Windows::Data::Pdf {

enum class PdfPageRotation
{
    Normal = 0,
    Rotate90 = 1,
    Rotate180 = 2,
    Rotate270 = 3,
};

}

}
