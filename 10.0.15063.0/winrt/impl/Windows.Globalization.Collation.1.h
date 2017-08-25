// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Globalization.Collation.0.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::Collation {

struct WINRT_EBO ICharacterGrouping :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGrouping>
{
    ICharacterGrouping(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICharacterGroupings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGroupings>,
    impl::require<ICharacterGroupings, Windows::Foundation::Collections::IIterable<Windows::Globalization::Collation::CharacterGrouping>, Windows::Foundation::Collections::IVectorView<Windows::Globalization::Collation::CharacterGrouping>>
{
    ICharacterGroupings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICharacterGroupingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGroupingsFactory>
{
    ICharacterGroupingsFactory(std::nullptr_t = nullptr) noexcept {}
};

}
