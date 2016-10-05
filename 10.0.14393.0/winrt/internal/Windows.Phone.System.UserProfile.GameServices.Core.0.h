// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::System::UserProfile::GameServices::Core {

struct IGameService;
struct IGameService2;
struct IGameServicePropertyCollection;
struct GameServicePropertyCollection;

}

namespace Windows::Phone::System::UserProfile::GameServices::Core {

struct IGameService;
struct IGameService2;
struct IGameServicePropertyCollection;
struct GameService;
struct GameServicePropertyCollection;

}

namespace Windows::Phone::System::UserProfile::GameServices::Core {

enum class GameServiceGameOutcome
{
    None = 0,
    Win = 1,
    Loss = 2,
    Tie = 3,
};

enum class GameServiceScoreKind
{
    Number = 0,
    Time = 1,
};

}

}
