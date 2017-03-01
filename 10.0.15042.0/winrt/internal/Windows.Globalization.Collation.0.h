// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Globalization::Collation {

struct ICharacterGrouping;
struct ICharacterGroupings;
struct ICharacterGroupingsFactory;
struct CharacterGrouping;
struct CharacterGroupings;

}

namespace Windows::Globalization::Collation {

struct ICharacterGrouping;
struct ICharacterGroupings;
struct ICharacterGroupingsFactory;
struct CharacterGrouping;
struct CharacterGroupings;

}

namespace Windows::Globalization::Collation {

template <typename T> struct impl_ICharacterGrouping;
template <typename T> struct impl_ICharacterGroupings;
template <typename T> struct impl_ICharacterGroupingsFactory;

}

}
