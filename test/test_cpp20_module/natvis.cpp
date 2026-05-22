#include "pch.h"
#include <winstring.h>

import std;
import winrt.Windows.Foundation;

//
// These tests confirm that the natvis infrastructure (winrt::impl::natvis)
// is reachable through modules, ensuring the debugger visualizer can function.
// natvis is only active in _DEBUG builds.
//

using namespace winrt;
using namespace Windows::Foundation;

#ifdef _DEBUG

TEST_CASE("module_natvis_get_val")
{
    // Verify impl::natvis::get_val is callable through the module.
    Uri uri(L"http://example.com/");
    IInspectable inspectable = uri;

    // IStringable IID: {96369F54-8EB6-48F0-ABCE-C1B211E627C3}
    // Method index 0 = ToString
    auto result = impl::natvis::get_val(&inspectable, L"{96369F54-8EB6-48F0-ABCE-C1B211E627C3}", 0);

    // Compare the natvis result with the direct call
    hstring expected = uri.ToString();
    uint32_t expected_len = 0;
    auto expected_buf = WindowsGetStringRawBuffer(static_cast<HSTRING>(get_abi(expected)), &expected_len);
    uint32_t actual_len = 0;
    auto actual_buf = WindowsGetStringRawBuffer(static_cast<HSTRING>(result.s), &actual_len);
    REQUIRE(expected_len == actual_len);
    REQUIRE(memcmp(expected_buf, actual_buf, expected_len * sizeof(wchar_t)) == 0);
}

TEST_CASE("module_natvis_uri_properties")
{
    Uri uri(L"http://moderncpp.com/path");
    IInspectable inspectable = uri;

    // IUriRuntimeClass IID: {9E365E57-48B2-4160-956F-C7385120BBFC}
    // Method 5 = Host, Method 7 = Path, Method 11 = SchemeName
    auto host_val = impl::natvis::get_val(&inspectable, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 5);
    hstring host_expected = uri.Host();
    REQUIRE(host_expected == hstring{ WindowsGetStringRawBuffer(static_cast<HSTRING>(host_val.s), nullptr) });

    auto path_val = impl::natvis::get_val(&inspectable, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 7);
    hstring path_expected = uri.Path();
    REQUIRE(path_expected == hstring{ WindowsGetStringRawBuffer(static_cast<HSTRING>(path_val.s), nullptr) });

    auto scheme_val = impl::natvis::get_val(&inspectable, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 11);
    hstring scheme_expected = uri.SchemeName();
    REQUIRE(scheme_expected == hstring{ WindowsGetStringRawBuffer(static_cast<HSTRING>(scheme_val.s), nullptr) });
}

#endif // _DEBUG
