#include "pch.h"

using namespace winrt;

int main()
{
    init_apartment();

    winrt::Windows::Foundation::Uri uri{ L"https://www.microsoft.com" };
    const auto asString = uri.ToString();

    // Cause the "if constexpr" block to be reachable, possibly triggering a build warning.
    winrt::Windows::Networking::Sockets::StreamWebSocket socket{ nullptr };
    socket.Close(1000, L"");

    return 0;
}
