// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Printing::OptionDetails {

struct IPrintCustomItemDetails;
struct IPrintCustomItemListOptionDetails;
struct IPrintCustomOptionDetails;
struct IPrintCustomTextOptionDetails;
struct IPrintItemListOptionDetails;
struct IPrintNumberOptionDetails;
struct IPrintOptionDetails;
struct IPrintTaskOptionChangedEventArgs;
struct IPrintTaskOptionDetails;
struct IPrintTaskOptionDetailsStatic;
struct IPrintTextOptionDetails;
struct PrintBindingOptionDetails;
struct PrintBorderingOptionDetails;
struct PrintCollationOptionDetails;
struct PrintColorModeOptionDetails;
struct PrintCopiesOptionDetails;
struct PrintCustomItemDetails;
struct PrintCustomItemListOptionDetails;
struct PrintCustomTextOptionDetails;
struct PrintDuplexOptionDetails;
struct PrintHolePunchOptionDetails;
struct PrintMediaSizeOptionDetails;
struct PrintMediaTypeOptionDetails;
struct PrintOrientationOptionDetails;
struct PrintQualityOptionDetails;
struct PrintStapleOptionDetails;
struct PrintTaskOptionChangedEventArgs;
struct PrintTaskOptionDetails;

}

namespace Windows::Graphics::Printing::OptionDetails {

struct IPrintCustomItemDetails;
struct IPrintCustomItemListOptionDetails;
struct IPrintCustomOptionDetails;
struct IPrintCustomTextOptionDetails;
struct IPrintItemListOptionDetails;
struct IPrintNumberOptionDetails;
struct IPrintOptionDetails;
struct IPrintTaskOptionChangedEventArgs;
struct IPrintTaskOptionDetails;
struct IPrintTaskOptionDetailsStatic;
struct IPrintTextOptionDetails;
struct PrintBindingOptionDetails;
struct PrintBorderingOptionDetails;
struct PrintCollationOptionDetails;
struct PrintColorModeOptionDetails;
struct PrintCopiesOptionDetails;
struct PrintCustomItemDetails;
struct PrintCustomItemListOptionDetails;
struct PrintCustomTextOptionDetails;
struct PrintDuplexOptionDetails;
struct PrintHolePunchOptionDetails;
struct PrintMediaSizeOptionDetails;
struct PrintMediaTypeOptionDetails;
struct PrintOrientationOptionDetails;
struct PrintQualityOptionDetails;
struct PrintStapleOptionDetails;
struct PrintTaskOptionChangedEventArgs;
struct PrintTaskOptionDetails;

}

namespace Windows::Graphics::Printing::OptionDetails {

enum class PrintOptionStates : unsigned
{
    None = 0x0,
    Enabled = 0x1,
    Constrained = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(PrintOptionStates)

enum class PrintOptionType
{
    Unknown = 0,
    Number = 1,
    Text = 2,
    ItemList = 3,
};

}

}
