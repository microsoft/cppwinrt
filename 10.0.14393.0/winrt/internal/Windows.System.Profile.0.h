// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Profile {

struct IAnalyticsInfoStatics;
struct IAnalyticsVersionInfo;
struct IHardwareIdentificationStatics;
struct IHardwareToken;
struct IKnownRetailInfoPropertiesStatics;
struct IPlatformDiagnosticsAndUsageDataSettingsStatics;
struct IRetailInfoStatics;
struct ISharedModeSettingsStatics;
struct ISystemIdentificationInfo;
struct ISystemIdentificationStatics;
struct AnalyticsVersionInfo;
struct HardwareToken;
struct SystemIdentificationInfo;

}

namespace Windows::System::Profile {

struct IAnalyticsInfoStatics;
struct IAnalyticsVersionInfo;
struct IHardwareIdentificationStatics;
struct IHardwareToken;
struct IKnownRetailInfoPropertiesStatics;
struct IPlatformDiagnosticsAndUsageDataSettingsStatics;
struct IRetailInfoStatics;
struct ISharedModeSettingsStatics;
struct ISystemIdentificationInfo;
struct ISystemIdentificationStatics;
struct AnalyticsInfo;
struct AnalyticsVersionInfo;
struct HardwareIdentification;
struct HardwareToken;
struct KnownRetailInfoProperties;
struct PlatformDiagnosticsAndUsageDataSettings;
struct RetailInfo;
struct SharedModeSettings;
struct SystemIdentification;
struct SystemIdentificationInfo;

}

namespace Windows::System::Profile {

enum class PlatformDataCollectionLevel
{
    Security = 0,
    Basic = 1,
    Enhanced = 2,
    Full = 3,
};

enum class SystemIdentificationSource
{
    None = 0,
    Tpm = 1,
    Uefi = 2,
};

}

}
