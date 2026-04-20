#pragma once
#include "Toaster.g.h"

namespace winrt::test_component_module::implementation
{
    struct Toaster : ToasterT<Toaster>
    {
        Toaster() = default;
        Toaster(hstring const& name) : m_name(name) {}

        hstring Name() const { return m_name; }
        void Name(hstring const& value) { m_name = value; }

        Windows::Foundation::IAsyncAction ToastAsync()
        {
            co_return;
        }

        void ApplySettings(Windows::Foundation::Collections::IMapView<hstring, hstring> const&)
        {
            // Stub — exercises cross-namespace module dep in .g.h
        }

        static test_component_module::Toaster CreateDefault()
        {
            return make<Toaster>(L"Default Toaster");
        }

    private:
        hstring m_name{ L"Unnamed" };
    };
}

namespace winrt::test_component_module::factory_implementation
{
    struct Toaster : ToasterT<Toaster, implementation::Toaster>
    {
    };
}
