#include "pch.h"

#include <winrt/ConsoleApplication1.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace ConsoleApplication1;

int main()
{
    init_apartment();
    Uri uri(L"http://aka.ms/cppwinrt");
    printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());

    ConsoleApplication1Class c1{};
    c1.Test();
}
