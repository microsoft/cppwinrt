// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Automation::Provider {


}

namespace Windows::UI::Xaml::Automation::Text {

enum class TextPatternRangeEndpoint
{
    Start = 0,
    End = 1,
};

enum class TextUnit
{
    Character = 0,
    Format = 1,
    Word = 2,
    Line = 3,
    Paragraph = 4,
    Page = 5,
    Document = 6,
};

}

}
