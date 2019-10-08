#pragma once
#include "Class.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        Class(hstring const& name);
        Class(Windows::Foundation::Collections::IIterable<hstring> const& arg, int32_t dummy1);
        Class(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& arg, int32_t dummy1, int32_t dummy2);
        Class(Windows::Foundation::Collections::IMap<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3);
        Class(Windows::Foundation::Collections::IMapView<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4);
        Class(Windows::Foundation::Collections::IVector<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5);
        Class(Windows::Foundation::Collections::IVectorView<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5, int32_t dummy6);
        static void StaticTest();
        static int32_t StaticTestReturn();
        static int32_t StaticProperty();
        static hstring InIterable(Windows::Foundation::Collections::IIterable<hstring> const& value);
        static hstring InIterablePair(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& value);
        static Windows::Foundation::IAsyncOperation<hstring> InAsyncIterable(Windows::Foundation::Collections::IIterable<hstring> value);
        static Windows::Foundation::IAsyncOperation<hstring> InAsyncIterablePair(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> value);
        static hstring InMap(Windows::Foundation::Collections::IMap<hstring, hstring> const& value);
        static hstring InMapView(Windows::Foundation::Collections::IMapView<hstring, hstring> const& value);
        static Windows::Foundation::IAsyncOperation<hstring> InAsyncMapView(Windows::Foundation::Collections::IMapView<hstring, hstring> value);
        static hstring InVector(Windows::Foundation::Collections::IVector<hstring> const& value);
        static hstring InVectorView(Windows::Foundation::Collections::IVectorView<hstring> const& value);
        static Windows::Foundation::IAsyncOperation<hstring> InAsyncVectorView(Windows::Foundation::Collections::IVectorView<hstring> value);
        void Fail(bool value);
        hstring InInt32(int32_t value);
        hstring InString(hstring const& value);
        hstring InObject(Windows::Foundation::IInspectable const& value);
        hstring InStringable(Windows::Foundation::IStringable const& value);
        hstring InStruct(test_component::Struct const& value);
        hstring InStructRef(test_component::Struct const& value);
        hstring InEnum(test_component::Signed const& value);
        void OutInt32(int32_t& value);
        void OutString(hstring& value);
        void OutObject(Windows::Foundation::IInspectable& value);
        void OutStringable(Windows::Foundation::IStringable& value);
        void OutStruct(test_component::Struct& value);
        void OutEnum(test_component::Signed& value);
        int32_t ReturnInt32();
        hstring ReturnString();
        Windows::Foundation::IInspectable ReturnObject();
        Windows::Foundation::IStringable ReturnStringable();
        test_component::Struct ReturnStruct();
        test_component::Signed ReturnEnum();
        hstring InInt32Array(array_view<int32_t const> value);
        hstring InStringArray(array_view<hstring const> value);
        hstring InObjectArray(array_view<Windows::Foundation::IInspectable const> value);
        hstring InStringableArray(array_view<Windows::Foundation::IStringable const> value);
        hstring InStructArray(array_view<test_component::Struct const> value);
        hstring InEnumArray(array_view<test_component::Signed const> value);
        void OutInt32Array(com_array<int32_t>& value);
        void OutStringArray(com_array<hstring>& value);
        void OutObjectArray(com_array<Windows::Foundation::IInspectable>& value);
        void OutStringableArray(com_array<Windows::Foundation::IStringable>& value);
        void OutStructArray(com_array<test_component::Struct>& value);
        void OutEnumArray(com_array<test_component::Signed>& value);
        void RefInt32Array(array_view<int32_t> value);
        void RefStringArray(array_view<hstring> value);
        void RefObjectArray(array_view<Windows::Foundation::IInspectable> value);
        void RefStringableArray(array_view<Windows::Foundation::IStringable> value);
        void RefStructArray(array_view<test_component::Struct> value);
        void RefEnumArray(array_view<test_component::Signed> value);
        com_array<int32_t> ReturnInt32Array();
        com_array<hstring> ReturnStringArray();
        com_array<Windows::Foundation::IInspectable> ReturnObjectArray();
        com_array<Windows::Foundation::IStringable> ReturnStringableArray();
        com_array<test_component::Struct> ReturnStructArray();
        com_array<test_component::Signed> ReturnEnumArray();
        void NoexceptVoid() noexcept;
        int32_t NoexceptInt32() noexcept;
        hstring NoexceptString() noexcept;
        winrt::event_token DeferrableEvent(Windows::Foundation::TypedEventHandler<test_component::Class, test_component::DeferrableEventArgs> const& handler);
        void DeferrableEvent(winrt::event_token const& token) noexcept;
        Windows::Foundation::IAsyncOperation<int32_t> RaiseDeferrableEventAsync();
    };
}
namespace winrt::test_component::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
