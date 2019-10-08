#include "pch.h"
#include "catch.hpp"
#include <winstring.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Devices::Geolocation;
using namespace Windows::Graphics::Display;
using namespace Windows::Networking;
using namespace Windows::Networking::Sockets;

template<typename T, typename U = T>
void compare(T const& expected, U const& actual)
{
    REQUIRE(memcmp(&expected, &actual, sizeof(T)) == 0);
}

template<>
void compare(hstring const& expected, HSTRING const& actual)
{
    INT32 result;
    REQUIRE(WindowsCompareStringOrdinal(static_cast<HSTRING>(get_abi(expected)), actual, &result) == S_OK);
    REQUIRE(result == 0);
}

//
// This test does not validate the natvis script directly, but does execute the property expressions invoked by natvis
// 
TEST_CASE("natvis, Uri")
{
    Uri uri(L"http://moderncpp.com/");

    compare(uri.ToString(), WINRT_get_val(&uri, L"{96369F54-8EB6-48F0-ABCE-C1B211E627C3}", 0).s);
    compare(uri.AbsoluteCanonicalUri(), WINRT_get_val(&uri, L"{758D9661-221C-480F-A339-50656673F46F}", 0).s);
    compare(uri.DisplayIri(), WINRT_get_val(&uri, L"{758D9661-221C-480F-A339-50656673F46F}", 1).s);
    compare(uri.AbsoluteUri(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 0).s);
    compare(uri.DisplayUri(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 1).s);
    compare(uri.Domain(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 2).s);
    compare(uri.Extension(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 3).s);
    compare(uri.Fragment(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 4).s);
    compare(uri.Host(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 5).s);
    compare(uri.Password(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 6).s);
    compare(uri.Path(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 7).s);
    compare(uri.Query(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 8).s);
    compare(uri.RawUri(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 10).s);
    compare(uri.SchemeName(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 11).s);
    compare(uri.UserName(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 12).s);
    compare(uri.Port(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 13).i4);
    compare(uri.Suspicious(), WINRT_get_val(&uri, L"{9E365E57-48B2-4160-956F-C7385120BBFC}", 14).b);
}

TEST_CASE("natvis, TimedTextRegion")
{
    Windows::Media::Core::TimedTextRegion textRegion;

    // Set properties on textRegion
    Windows::UI::Color color{ 11, 22, 33, 44 };
    textRegion.Background(color);
    auto timedTextDisplayAlignment{ winrt::Windows::Media::Core::TimedTextDisplayAlignment::After };
    textRegion.DisplayAlignment(timedTextDisplayAlignment);
    winrt::Windows::Media::Core::TimedTextSize timedTextSize{ 11, 22 };
    textRegion.Extent(timedTextSize);
    textRegion.IsOverflowClipped(true);
    winrt::Windows::Media::Core::TimedTextDouble timedTextDouble{ 33 };
    textRegion.LineHeight(timedTextDouble);
    hstring name{ L"TextRegion" };
    textRegion.Name(name);
    winrt::Windows::Media::Core::TimedTextPadding timedTextPadding{ 11, 22, 33, 44 };
    textRegion.Padding(timedTextPadding);
    winrt::Windows::Media::Core::TimedTextPoint timedTextPoint{ 11, 22 };
    textRegion.Position(timedTextPoint);
    auto timedTextScrollMode{ winrt::Windows::Media::Core::TimedTextScrollMode::Rollup };
    textRegion.ScrollMode(timedTextScrollMode);
    auto timedTextWrapping{ winrt::Windows::Media::Core::TimedTextWrapping::Wrap };
    textRegion.TextWrapping(timedTextWrapping);
    auto timedTextWritingMode{ winrt::Windows::Media::Core::TimedTextWritingMode::LeftRight };
    textRegion.WritingMode(timedTextWritingMode);
    textRegion.ZIndex(3);

    compare(textRegion.Name(), WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 0).s);
    compare(textRegion.Position(), *(winrt::Windows::Media::Core::TimedTextPoint*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 2).v);
    compare(textRegion.Extent(), *(winrt::Windows::Media::Core::TimedTextSize*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 4).v);
    compare(textRegion.Background(), *(winrt::Windows::UI::Color*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 6).v);
    compare(textRegion.WritingMode(), *(winrt::Windows::Media::Core::TimedTextWritingMode*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 8).v);
    compare(textRegion.DisplayAlignment(), *(winrt::Windows::Media::Core::TimedTextDisplayAlignment*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 10).v);
    compare(textRegion.LineHeight(), *(winrt::Windows::Media::Core::TimedTextDouble*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 12).v);
    compare(textRegion.IsOverflowClipped(), WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 14).b);
    compare(textRegion.Padding(), *(winrt::Windows::Media::Core::TimedTextPadding*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 16).v);
    compare(textRegion.TextWrapping(), *(winrt::Windows::Media::Core::TimedTextWrapping*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 18).v);
    compare(textRegion.ZIndex(), WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 20).i4);
    compare(textRegion.ScrollMode(), *(winrt::Windows::Media::Core::TimedTextScrollMode*)WINRT_get_val(&textRegion, L"{1ED0881F-8A06-4222-9F59-B21BF40124B4}", 22).v);
}

TEST_CASE("natvis, StreamSocketInformation")
{
    StreamSocket socket;
    HostName hostname(L"moderncpp.com");
    auto connect = socket.ConnectAsync(hostname, L"80");
    connect.get();
    auto ssi = socket.Information();

    compare(ssi.ServerCertificateErrorSeverity(), *(winrt::Windows::Networking::Sockets::SocketSslErrorSeverity*)WINRT_get_val(&ssi, L"{12C28452-4BDC-4EE4-976A-CF130E9D92E3}", 0).v);
    compare(ssi.LocalPort(), WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 1).s);
    compare(ssi.RemoteServiceName(), WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 4).s);
    compare(ssi.RemotePort(), WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 5).s);
    compare(ssi.RoundTripTimeStatistics(), *(winrt::Windows::Networking::Sockets::RoundTripTimeStatistics*)WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 6).v);
    compare(ssi.BandwidthStatistics(), *(winrt::Windows::Networking::Sockets::BandwidthStatistics*)WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 7).v);
    compare(ssi.ProtectionLevel(), *(winrt::Windows::Networking::Sockets::SocketProtectionLevel*)WINRT_get_val(&ssi, L"{3B80AE30-5E68-4205-88F0-DC85D2E25DED}", 8).v);
}
