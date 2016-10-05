// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct IDeviceAccountConfiguration;
struct IDeviceAccountConfiguration2;
struct IUserDataAccountSystemAccessManagerStatics;
struct IUserDataAccountSystemAccessManagerStatics2;
struct DeviceAccountConfiguration;

}

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct IDeviceAccountConfiguration;
struct IDeviceAccountConfiguration2;
struct IUserDataAccountSystemAccessManagerStatics;
struct IUserDataAccountSystemAccessManagerStatics2;
struct DeviceAccountConfiguration;
struct UserDataAccountSystemAccessManager;

}

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

enum class DeviceAccountAuthenticationType
{
    Basic = 0,
    OAuth = 1,
    SingleSignOn = 2,
};

enum class DeviceAccountIconId
{
    Exchange = 0,
    Msa = 1,
    Outlook = 2,
    Generic = 3,
};

enum class DeviceAccountMailAgeFilter
{
    All = 0,
    Last1Day = 1,
    Last3Days = 2,
    Last7Days = 3,
    Last14Days = 4,
    Last30Days = 5,
    Last90Days = 6,
};

enum class DeviceAccountServerType
{
    Exchange = 0,
    Pop = 1,
    Imap = 2,
};

enum class DeviceAccountSyncScheduleKind
{
    Manual = 0,
    Every15Minutes = 1,
    Every30Minutes = 2,
    Every60Minutes = 3,
    Every2Hours = 4,
    Daily = 5,
    AsItemsArrive = 6,
};

}

}
