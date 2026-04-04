#include "pch.h"
#include "TestModuleComponentClass.h"
#include "TestModuleComponentWidget.h"
#include "TestModuleComponentClass.g.cpp"

namespace winrt::TestModuleComponent::implementation
{
    void TestModuleComponentClass::Test()
    {
    }

    winrt::TestModuleComponent::Widgets::Widget TestModuleComponentClass::CreateWidget()
    {
        return winrt::make<winrt::TestModuleComponent::Widgets::implementation::Widget>(L"FromComponent");
    }

    winrt::TestModuleComponent::WidgetInfo TestModuleComponentClass::GetWidgetInfo()
    {
        auto widget = CreateWidget();
        return { widget.Size(), L"A test widget" };
    }

    winrt::Windows::Foundation::Uri TestModuleComponentClass::GetUri()
    {
        return winrt::Windows::Foundation::Uri(L"http://aka.ms/cppwinrt");
    }
}
