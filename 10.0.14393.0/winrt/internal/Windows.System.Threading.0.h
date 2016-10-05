// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Threading {

struct IThreadPoolStatics;
struct IThreadPoolTimer;
struct IThreadPoolTimerStatics;
struct TimerDestroyedHandler;
struct TimerElapsedHandler;
struct WorkItemHandler;
struct ThreadPoolTimer;

}

namespace Windows::System::Threading {

struct TimerDestroyedHandler;
struct TimerElapsedHandler;
struct WorkItemHandler;
struct IThreadPoolStatics;
struct IThreadPoolTimer;
struct IThreadPoolTimerStatics;
struct ThreadPool;
struct ThreadPoolTimer;

}

namespace Windows::System::Threading {

enum class WorkItemOptions : unsigned
{
    None = 0x0,
    TimeSliced = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(WorkItemOptions)

enum class WorkItemPriority
{
    Low = -1,
    Normal = 0,
    High = 1,
};

}

}
