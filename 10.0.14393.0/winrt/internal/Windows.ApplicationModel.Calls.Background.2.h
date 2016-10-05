// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Calls.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Calls::Background {

template <typename D>
struct WINRT_EBO impl_IPhoneCallBlockedTriggerDetails
{
    hstring PhoneNumber() const;
    GUID LineId() const;
    Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason CallBlockedReason() const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneCallOriginDataRequestTriggerDetails
{
    GUID RequestId() const;
    hstring PhoneNumber() const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneLineChangedTriggerDetails
{
    GUID LineId() const;
    Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind ChangeType() const;
    bool HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneNewVoicemailMessageTriggerDetails
{
    GUID LineId() const;
    int32_t VoicemailCount() const;
    hstring OperatorMessage() const;
};

struct IPhoneCallBlockedTriggerDetails :
    Windows::IInspectable,
    impl::consume<IPhoneCallBlockedTriggerDetails>
{
    IPhoneCallBlockedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallBlockedTriggerDetails>(m_ptr); }
};

struct IPhoneCallOriginDataRequestTriggerDetails :
    Windows::IInspectable,
    impl::consume<IPhoneCallOriginDataRequestTriggerDetails>
{
    IPhoneCallOriginDataRequestTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOriginDataRequestTriggerDetails>(m_ptr); }
};

struct IPhoneLineChangedTriggerDetails :
    Windows::IInspectable,
    impl::consume<IPhoneLineChangedTriggerDetails>
{
    IPhoneLineChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneLineChangedTriggerDetails>(m_ptr); }
};

struct IPhoneNewVoicemailMessageTriggerDetails :
    Windows::IInspectable,
    impl::consume<IPhoneNewVoicemailMessageTriggerDetails>
{
    IPhoneNewVoicemailMessageTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNewVoicemailMessageTriggerDetails>(m_ptr); }
};

}

}
