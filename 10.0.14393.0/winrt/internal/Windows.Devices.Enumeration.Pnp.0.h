// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Enumeration::Pnp {

struct IPnpObject;
struct IPnpObjectStatics;
struct IPnpObjectUpdate;
struct IPnpObjectWatcher;
struct PnpObject;
struct PnpObjectCollection;
struct PnpObjectUpdate;
struct PnpObjectWatcher;

}

namespace Windows::Devices::Enumeration::Pnp {

struct IPnpObject;
struct IPnpObjectStatics;
struct IPnpObjectUpdate;
struct IPnpObjectWatcher;
struct PnpObject;
struct PnpObjectCollection;
struct PnpObjectUpdate;
struct PnpObjectWatcher;

}

namespace Windows::Devices::Enumeration::Pnp {

enum class PnpObjectType
{
    Unknown = 0,
    DeviceInterface = 1,
    DeviceContainer = 2,
    Device = 3,
    DeviceInterfaceClass = 4,
    AssociationEndpoint = 5,
    AssociationEndpointContainer = 6,
    AssociationEndpointService = 7,
};

}

}
