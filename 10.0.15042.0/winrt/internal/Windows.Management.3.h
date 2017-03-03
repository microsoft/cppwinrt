// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management {

struct WINRT_EBO MdmAlert :
    Windows::Management::IMdmAlert
{
    MdmAlert(std::nullptr_t) noexcept {}
    MdmAlert();
};

struct WINRT_EBO MdmSession :
    Windows::Management::IMdmSession
{
    MdmSession(std::nullptr_t) noexcept {}
};

struct MdmSessionManager
{
    MdmSessionManager() = delete;
    static Windows::Foundation::Collections::IVectorView<hstring> SessionIds();
    static Windows::Management::MdmSession TryCreateSession();
    static void DeleteSessionById(hstring_view sessionId);
    static Windows::Management::MdmSession GetSessionById(hstring_view sessionId);
};

}

}
