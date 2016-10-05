// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::ExtendedExecution {

struct IExtendedExecutionRevokedEventArgs;
struct IExtendedExecutionSession;
struct ExtendedExecutionRevokedEventArgs;
struct ExtendedExecutionSession;

}

namespace Windows::ApplicationModel::ExtendedExecution {

struct IExtendedExecutionRevokedEventArgs;
struct IExtendedExecutionSession;
struct ExtendedExecutionRevokedEventArgs;
struct ExtendedExecutionSession;

}

namespace Windows::ApplicationModel::ExtendedExecution {

enum class ExtendedExecutionReason
{
    Unspecified = 0,
    LocationTracking = 1,
    SavingData = 2,
};

enum class ExtendedExecutionResult
{
    Allowed = 0,
    Denied = 1,
};

enum class ExtendedExecutionRevokedReason
{
    Resumed = 0,
    SystemPolicy = 1,
};

}

}
