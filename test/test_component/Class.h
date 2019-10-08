#pragma once
#include "Class.g.h"
#include "DeferrableEventArgs.g.h"

namespace winrt::test_component::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;
        Class(hstring const&) {}

        static void StaticTest()
        {
        }

        static int32_t StaticTestReturn()
        {
            return 0;
        }

        static int32_t StaticProperty()
        {
            return 0;
        }

        void Fail(bool fail)
        {
            m_fail = fail;
        }

        void abi_enter()
        {
            if (m_fail)
            {
                throw hresult_invalid_argument(L"value");
            }
        }

        Class(Windows::Foundation::Collections::IIterable<hstring> const& arg, int32_t dummy1);
        Class(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& arg, int32_t dummy1, int32_t dummy2);
        Class(Windows::Foundation::Collections::IMap<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3);
        Class(Windows::Foundation::Collections::IMapView<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4);
        Class(Windows::Foundation::Collections::IVector<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5);
        Class(Windows::Foundation::Collections::IVectorView<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5, int32_t dummy6);

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

        hstring InInt32(int32_t value);
        hstring InString(hstring const& value);
        hstring InObject(Windows::Foundation::IInspectable const& value);
        hstring InStringable(Windows::Foundation::IStringable const& value);
        hstring InStruct(Struct const& value);
        hstring InStructRef(Struct const& value);
        hstring InEnum(Signed const& value);

        void OutInt32(int32_t& value);
        void OutString(hstring& value);
        void OutObject(Windows::Foundation::IInspectable& value);
        void OutStringable(Windows::Foundation::IStringable& value);
        void OutStruct(Struct& value);
        void OutEnum(Signed& value);

        int32_t ReturnInt32();
        hstring ReturnString();
        Windows::Foundation::IInspectable ReturnObject();
        Windows::Foundation::IStringable ReturnStringable();
        Struct ReturnStruct();
        Signed ReturnEnum();

        hstring InInt32Array(array_view<int32_t const> value);
        hstring InStringArray(array_view<hstring const> value);
        hstring InObjectArray(array_view<Windows::Foundation::IInspectable const> value);
        hstring InStringableArray(array_view<Windows::Foundation::IStringable const> value);
        hstring InStructArray(array_view<Struct const> value);
        hstring InEnumArray(array_view<Signed const> value);

        void OutInt32Array(com_array<int32_t>& value);
        void OutStringArray(com_array<hstring>& value);
        void OutObjectArray(com_array<Windows::Foundation::IInspectable>& value);
        void OutStringableArray(com_array<Windows::Foundation::IStringable>& value);
        void OutStructArray(com_array<Struct>& value);
        void OutEnumArray(com_array<Signed>& value);

        void RefInt32Array(array_view<int32_t> value);
        void RefStringArray(array_view<hstring> value);
        void RefObjectArray(array_view<Windows::Foundation::IInspectable> value);
        void RefStringableArray(array_view<Windows::Foundation::IStringable> value);
        void RefStructArray(array_view<Struct> value);
        void RefEnumArray(array_view<Signed> value);

        com_array<int32_t> ReturnInt32Array();
        com_array<hstring> ReturnStringArray();
        com_array<Windows::Foundation::IInspectable> ReturnObjectArray();
        com_array<Windows::Foundation::IStringable> ReturnStringableArray();
        com_array<Struct> ReturnStructArray();
        com_array<Signed> ReturnEnumArray();

        void NoexceptVoid() noexcept;
        int32_t NoexceptInt32() noexcept;
        hstring NoexceptString() noexcept;

        event_token DeferrableEvent(Windows::Foundation::TypedEventHandler<test_component::Class, test_component::DeferrableEventArgs> const& handler);
        void DeferrableEvent(event_token const& token);
        Windows::Foundation::IAsyncOperation<int> RaiseDeferrableEventAsync();
    private:

        bool m_fail{};
        event<Windows::Foundation::TypedEventHandler<test_component::Class, test_component::DeferrableEventArgs>> m_deferrableEvent;
    };

    struct DeferrableEventArgs : DeferrableEventArgsT<DeferrableEventArgs>, deferrable_event_args<DeferrableEventArgs>
    {
        DeferrableEventArgs() = default;
        void IncrementCounter() { ++m_counter; }
        std::atomic<int> m_counter = 0;
    };

}
namespace winrt::test_component::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
