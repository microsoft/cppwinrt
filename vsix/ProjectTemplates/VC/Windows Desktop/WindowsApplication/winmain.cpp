#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

int __stdcall wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    init_apartment(apartment_type::single_threaded);
    Uri uri(L"http://aka.ms/cppwinrt");
    ::MessageBoxW(::GetDesktopWindow(), uri.AbsoluteUri().c_str(), L"C++/WinRT Desktop Application", MB_OK);
}
