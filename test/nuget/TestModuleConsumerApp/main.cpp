#include "pch.h"

import std;
import winrt.Windows.Foundation;
import winrt.TestModuleComponent1;
import winrt.TestModuleComponent2;

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();

    // Platform types from pre-built modules
    Uri uri(L"https://example.com/consumer");
    std::printf("URI: %ls\n", uri.AbsoluteUri().c_str());

    // Component1
    auto greeter = TestModuleComponent1::Greeter(L"Modules");
    std::printf("Greet: %ls\n", greeter.Greet().c_str());
    std::printf("Homepage: %ls\n", greeter.Homepage().AbsoluteUri().c_str());

    // Component2 (depends on Component1)
    auto group = TestModuleComponent2::GreeterGroup();
    group.Add(TestModuleComponent1::Greeter(L"Alice"));
    group.Add(TestModuleComponent1::Greeter(L"Bob"));
    std::printf("GreetAll: %ls\n", group.GreetAll().c_str());

    std::printf("All consumer tests passed.\n");
    return 0;
}
