// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management {

struct IMdmAlert;
struct IMdmSession;
struct IMdmSessionManagerStatics;
struct MdmAlert;
struct MdmSession;

}

namespace Windows::Management {

struct IMdmAlert;
struct IMdmSession;
struct IMdmSessionManagerStatics;
struct MdmAlert;
struct MdmSession;
struct MdmSessionManager;

}

namespace Windows::Management {

template <typename T> struct impl_IMdmAlert;
template <typename T> struct impl_IMdmSession;
template <typename T> struct impl_IMdmSessionManagerStatics;

}

namespace Windows::Management {

enum class MdmAlertDataType
{
    String = 0,
    Base64 = 1,
    Boolean = 2,
    Integer = 3,
};

enum class MdmAlertMark
{
    None = 0,
    Fatal = 1,
    Critical = 2,
    Warning = 3,
    Informational = 4,
};

enum class MdmSessionState
{
    NotStarted = 0,
    Starting = 1,
    Connecting = 2,
    Communicating = 3,
    AlertStatusAvailable = 4,
    Retrying = 5,
    Completed = 6,
};

}

}
