// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {

struct WINRT_EBO PhoneCallBlockedTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails
{
    PhoneCallBlockedTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhoneCallOriginDataRequestTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails
{
    PhoneCallOriginDataRequestTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhoneLineChangedTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails
{
    PhoneLineChangedTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhoneNewVoicemailMessageTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails
{
    PhoneNewVoicemailMessageTriggerDetails(std::nullptr_t) noexcept {}
};

}
