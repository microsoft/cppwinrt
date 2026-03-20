#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#include "catch.hpp"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Data.Xml.Dom.h"
#include "winrt/Windows.Storage.h"
#include <filesystem>

using namespace winrt;
using namespace winrt::Windows::Data::Xml::Dom;
using namespace winrt::Windows::Storage;

namespace
{
    std::filesystem::path get_module_directory()
    {
        WCHAR path[MAX_PATH];
        GetModuleFileNameW(nullptr, path, MAX_PATH);
        return std::filesystem::path(path).parent_path();
    }

    const hstring natvis_ns{ L"xmlns:n='http://schemas.microsoft.com/vstudio/debugger/natvis/2010'" };

    struct NatvisDoc
    {
        XmlDocument doc;

        NatvisDoc()
        {
            auto natvis_path = get_module_directory() / L"cppwinrt.natvis";
            auto file = StorageFile::GetFileFromPathAsync(natvis_path.wstring()).get();
            doc = XmlDocument::LoadFromFileAsync(file).get();
        }

        XmlNodeList selectNodes(hstring const& xpath)
        {
            return doc.SelectNodesNS(xpath, winrt::Windows::Foundation::PropertyValue::CreateString(natvis_ns));
        }

        uint32_t countNodes(hstring const& xpath)
        {
            return selectNodes(xpath).Length();
        }
    };

    const std::vector<std::wstring> expected_types = {
        L"winrt::Windows::Foundation::IInspectable",
        L"winrt::impl::IInspectable",
        L"winrt::impl::inspectable_abi",
        L"winrt::impl::producer<*>",
        L"IInspectable",
        L"winrt::Windows::UI::Color",
        L"winrt::array_view<*>",
        L"winrt::com_ptr<*>",
        L"winrt::guid",
        L"winrt::hresult",
        L"winrt::hresult_error",
        L"winrt::hstring",
        L"winrt::param::hstring",
        L"winrt::Windows::Foundation::IUnknown",
    };

    std::string narrow(std::wstring_view ws)
    {
        std::string s(ws.size(), '\0');
        for (size_t i = 0; i < ws.size(); ++i)
            s[i] = static_cast<char>(ws[i]);
        return s;
    }
}

TEST_CASE("natvis xml is well-formed", "[xml]")
{
    NatvisDoc natvis;
    REQUIRE(natvis.doc != nullptr);
}

TEST_CASE("natvis xml has required type entries", "[xml]")
{
    NatvisDoc natvis;

    for (auto& type_name : expected_types)
    {
        auto xpath = L"//n:Type[@Name='" + type_name + L"']";
        auto count = natvis.countNodes(hstring(xpath));
        INFO("Missing Type entry for: " << narrow(type_name));
        REQUIRE(count >= 1);
    }
}

TEST_CASE("natvis has exactly 14 Type entries", "[xml]")
{
    NatvisDoc natvis;
    REQUIRE(natvis.countNodes(L"//n:Type") == 14);
}

TEST_CASE("natvis custom visualizer types reference correct VisualizerId", "[xml]")
{
    NatvisDoc natvis;
    const std::wstring expected_id = L"2ec1a02f-997c-4693-840e-88ffa1e21b56";

    auto nodes = natvis.selectNodes(L"//n:Type/n:CustomVisualizer");
    REQUIRE(nodes.Length() > 0);

    for (uint32_t i = 0; i < nodes.Length(); ++i)
    {
        auto elem = nodes.Item(i).as<IXmlElement>();
        auto actual = std::wstring(elem.GetAttribute(L"VisualizerId"));
        INFO("CustomVisualizer index " << i << " has wrong VisualizerId");
        REQUIRE(actual == expected_id);
    }
}

TEST_CASE("natvis null conditions are present for custom visualizer types", "[xml]")
{
    NatvisDoc natvis;

    std::vector<std::wstring> custom_vis_types = {
        L"winrt::Windows::Foundation::IInspectable",
        L"winrt::impl::IInspectable",
        L"winrt::impl::inspectable_abi",
        L"winrt::impl::producer<*>",
        L"IInspectable",
    };

    for (auto& type_name : custom_vis_types)
    {
        auto xpath = L"//n:Type[@Name='" + type_name + L"']/n:DisplayString";
        auto count = natvis.countNodes(hstring(xpath));
        INFO("Missing null DisplayString for: " << narrow(type_name));
        REQUIRE(count >= 1);
    }
}

TEST_CASE("natvis Color DisplayString format is correct", "[xml]")
{
    NatvisDoc natvis;
    auto nodes = natvis.selectNodes(L"//n:Type[@Name='winrt::Windows::UI::Color']/n:DisplayString");
    REQUIRE(nodes.Length() == 1);

    auto text = std::wstring(nodes.Item(0).InnerText());
    REQUIRE(text.find(L"nvoXb") != std::wstring::npos);
}

TEST_CASE("natvis hstring expand items reference correct APIs", "[xml]")
{
    NatvisDoc natvis;
    auto nodes = natvis.selectNodes(L"//n:Type[@Name='winrt::hstring']/n:Expand/n:Item");
    REQUIRE(nodes.Length() == 2);

    bool found_get_len = false;
    bool found_get_raw = false;
    for (uint32_t i = 0; i < nodes.Length(); ++i)
    {
        auto text = std::wstring(nodes.Item(i).InnerText());
        if (text.find(L"WindowsGetStringLen") != std::wstring::npos) found_get_len = true;
        if (text.find(L"WindowsGetStringRawBuffer") != std::wstring::npos) found_get_raw = true;
    }

    REQUIRE(found_get_len);
    REQUIRE(found_get_raw);
}

TEST_CASE("natvis hresult DisplayString uses hr format", "[xml]")
{
    NatvisDoc natvis;
    auto nodes = natvis.selectNodes(L"//n:Type[@Name='winrt::hresult']/n:DisplayString");
    REQUIRE(nodes.Length() == 1);

    auto text = std::wstring(nodes.Item(0).InnerText());
    REQUIRE(text.find(L"value,hr") != std::wstring::npos);
}
