// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.CommunicationBlocking.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::CommunicationBlocking {

struct CommunicationBlockingAccessManager
{
    CommunicationBlockingAccessManager() = delete;
    static bool IsBlockingActive();
    static Windows::Foundation::IAsyncOperation<bool> IsBlockedNumberAsync(hstring_ref number);
    static bool ShowBlockNumbersUI(const Windows::Foundation::Collections::IIterable<hstring> & phoneNumbers);
    static bool ShowUnblockNumbersUI(const Windows::Foundation::Collections::IIterable<hstring> & phoneNumbers);
    static void ShowBlockedCallsUI();
    static void ShowBlockedMessagesUI();
};

struct CommunicationBlockingAppManager
{
    CommunicationBlockingAppManager() = delete;
    static bool IsCurrentAppActiveBlockingApp();
    static void ShowCommunicationBlockingSettingsUI();
    static Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveBlockingAppAsync();
};

}

}
