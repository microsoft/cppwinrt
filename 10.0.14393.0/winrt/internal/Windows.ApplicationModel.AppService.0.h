// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::AppService {

struct IAppServiceCatalogStatics;
struct IAppServiceClosedEventArgs;
struct IAppServiceConnection;
struct IAppServiceConnection2;
struct IAppServiceDeferral;
struct IAppServiceRequest;
struct IAppServiceRequestReceivedEventArgs;
struct IAppServiceResponse;
struct IAppServiceTriggerDetails;
struct IAppServiceTriggerDetails2;
struct AppServiceClosedEventArgs;
struct AppServiceConnection;
struct AppServiceDeferral;
struct AppServiceRequest;
struct AppServiceRequestReceivedEventArgs;
struct AppServiceResponse;
struct AppServiceTriggerDetails;

}

namespace Windows::ApplicationModel::AppService {

struct IAppServiceCatalogStatics;
struct IAppServiceClosedEventArgs;
struct IAppServiceConnection;
struct IAppServiceConnection2;
struct IAppServiceDeferral;
struct IAppServiceRequest;
struct IAppServiceRequestReceivedEventArgs;
struct IAppServiceResponse;
struct IAppServiceTriggerDetails;
struct IAppServiceTriggerDetails2;
struct AppServiceCatalog;
struct AppServiceClosedEventArgs;
struct AppServiceConnection;
struct AppServiceDeferral;
struct AppServiceRequest;
struct AppServiceRequestReceivedEventArgs;
struct AppServiceResponse;
struct AppServiceTriggerDetails;

}

namespace Windows::ApplicationModel::AppService {

enum class AppServiceClosedStatus
{
    Completed = 0,
    Canceled = 1,
    ResourceLimitsExceeded = 2,
    Unknown = 3,
};

enum class AppServiceConnectionStatus
{
    Success = 0,
    AppNotInstalled = 1,
    AppUnavailable = 2,
    AppServiceUnavailable = 3,
    Unknown = 4,
    RemoteSystemUnavailable = 5,
    RemoteSystemNotSupportedByApp = 6,
    NotAuthorized = 7,
};

enum class AppServiceResponseStatus
{
    Success = 0,
    Failure = 1,
    ResourceLimitsExceeded = 2,
    Unknown = 3,
    RemoteSystemUnavailable = 4,
    MessageSizeTooLarge = 5,
};

}

}
