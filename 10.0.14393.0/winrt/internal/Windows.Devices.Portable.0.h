// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Portable {

struct IServiceDeviceStatics;
struct IStorageDeviceStatics;

}

namespace Windows::Devices::Portable {

struct IServiceDeviceStatics;
struct IStorageDeviceStatics;
struct ServiceDevice;
struct StorageDevice;

}

namespace Windows::Devices::Portable {

enum class ServiceDeviceType
{
    CalendarService = 0,
    ContactsService = 1,
    DeviceStatusService = 2,
    NotesService = 3,
    RingtonesService = 4,
    SmsService = 5,
    TasksService = 6,
};

}

}
