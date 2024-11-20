#include "pch.h"

using namespace winrt;

int main()
{
    init_apartment();

    winrt::Windows::Foundation::Uri uri{ L"https://www.microsoft.com" };
    const auto asString = uri.ToString();

    return 0;
}
