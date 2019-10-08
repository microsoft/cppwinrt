#pragma once

#include "CustomBase.g.h"

namespace winrt::Component::implementation
{
    struct CustomBase : CustomBaseT<CustomBase>
    {
        CustomBase()
            : base_type(L"CustomBase")
        {}

        virtual hstring CustomVirtualMethod();

        void TryAsBase()
        {
            // Try querying an interface that doesn't inherit from Windows::Foundation::IInspectable, to force a com_ptr return type
            using target = impl::IWeakReferenceSource;
            static_assert(std::is_same_v<impl::com_ref<target>, com_ptr<target>>);
            this->try_as<target>();
        }
    };
}

namespace winrt::Component::factory_implementation
{
    struct CustomBase : CustomBaseT<CustomBase, implementation::CustomBase>
    {
    };
}
