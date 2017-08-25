// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.Collation.1.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::Collation {

struct WINRT_EBO CharacterGrouping :
    Windows::Globalization::Collation::ICharacterGrouping
{
    CharacterGrouping(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CharacterGroupings :
    Windows::Globalization::Collation::ICharacterGroupings
{
    CharacterGroupings(std::nullptr_t) noexcept {}
    CharacterGroupings();
    CharacterGroupings(param::hstring const& language);
};

}
