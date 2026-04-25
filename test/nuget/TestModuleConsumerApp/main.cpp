#include "pch.h"

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
    printf("URI: %ls\n", uri.AbsoluteUri().c_str());

    // Component1
    auto greeter = TestModuleComponent1::Greeter(L"Modules");
    printf("Greet: %ls\n", greeter.Greet().c_str());
    printf("Homepage: %ls\n", greeter.Homepage().AbsoluteUri().c_str());

    // Component2 (depends on Component1)
    auto group = TestModuleComponent2::GreeterGroup();
    group.Add(TestModuleComponent1::Greeter(L"Alice"));
    group.Add(TestModuleComponent1::Greeter(L"Bob"));
    printf("GreetAll: %ls\n", group.GreetAll().c_str());

    printf("All consumer tests passed.\n");
    return 0;
}
