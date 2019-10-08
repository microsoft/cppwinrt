#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::test_component::implementation
{
    using namespace Windows::Foundation;

    struct Value : implements<Value, IStringable>
    {
        Value(int32_t value) :
            m_value(value)
        {
        }

        hstring ToString()
        {
            return hstring{ std::to_wstring(m_value) };
        }

    private:

        int32_t m_value{};
    };

    hstring Class::InInt32(int32_t value)
    {
        return hstring{ std::to_wstring(value) };
    }

    hstring Class::InString(hstring const& value)
    {
        return value;
    }

    hstring Class::InObject(Windows::Foundation::IInspectable const& value)
    {
        return value.as<IStringable>().ToString();
    }

    hstring Class::InStringable(Windows::Foundation::IStringable const& value)
    {
        return value.ToString();
    }

    hstring Class::InStruct(Struct const& value)
    {
        return value.First + value.Second;
    }

    hstring Class::InStructRef(Struct const& value)
    {
        return value.First + value.Second + L"ref";
    }

    hstring Class::InEnum(Signed const& value)
    {
        switch (value)
        {
        case Signed::First: return L"First";
        case Signed::Second: return L"Second";
        case Signed::Third: return L"Third";
        }

        throw hresult_invalid_argument();
    }

    Class::Class(Windows::Foundation::Collections::IIterable<hstring> const& arg, int32_t)
    {
        if (arg.First().Current() != L"test")
        {
            throw hresult_error();
        }
    }
    Class::Class(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& arg, int32_t, int32_t)
    {
        if (arg.First().Current().Key() != L"test")
        {
            throw hresult_error();
        }
    }
    Class::Class(Windows::Foundation::Collections::IMap<hstring, hstring> const& arg, int32_t, int32_t, int32_t)
    {
        if (arg.Lookup(L"test") != L"test")
        {
            throw hresult_error();
        }
    }
    Class::Class(Windows::Foundation::Collections::IMapView<hstring, hstring> const& arg, int32_t, int32_t, int32_t, int32_t)
    {
        if (arg.Lookup(L"test") != L"test")
        {
            throw hresult_error();
        }
    }
    Class::Class(Windows::Foundation::Collections::IVector<hstring> const& arg, int32_t, int32_t, int32_t, int32_t, int32_t)
    {
        if (arg.GetAt(0) != L"test")
        {
            throw hresult_error();
        }
    }
    Class::Class(Windows::Foundation::Collections::IVectorView<hstring> const& arg, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)
    {
        if (arg.GetAt(0) != L"test")
        {
            throw hresult_error();
        }
    }

    hstring Class::InIterable(Windows::Foundation::Collections::IIterable<hstring> const& value)
    {
        return value.First().Current();
    }
    hstring Class::InIterablePair(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& value)
    {
        return value.First().Current().Key();
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncIterable(Windows::Foundation::Collections::IIterable<hstring> value)
    {
        co_return value.First().Current();
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncIterablePair(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> value)
    {
        co_return value.First().Current().Key();
    }
    hstring Class::InMap(Windows::Foundation::Collections::IMap<hstring, hstring> const& value)
    {
        return value.Lookup(L"test");
    }
    hstring Class::InMapView(Windows::Foundation::Collections::IMapView<hstring, hstring> const& value)
    {
        return value.Lookup(L"test");
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncMapView(Windows::Foundation::Collections::IMapView<hstring, hstring> value)
    {
        co_return value.Lookup(L"test");
    }
    hstring Class::InVector(Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        return value.GetAt(0);
    }
    hstring Class::InVectorView(Windows::Foundation::Collections::IVectorView<hstring> const& value)
    {
        return value.GetAt(0);
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncVectorView(Windows::Foundation::Collections::IVectorView<hstring> value)
    {
        co_return value.GetAt(0);
    }

    void Class::OutInt32(int32_t& value)
    {
        value = 123;
    }

    void Class::OutString(hstring& value)
    {
        value = L"123";
    }

    void Class::OutObject(Windows::Foundation::IInspectable& value)
    {
        value = make<Value>(123);
    }

    void Class::OutStringable(Windows::Foundation::IStringable& value)
    {
        value = make<Value>(123);
    }

    void Class::OutStruct(Struct& value)
    {
        value.First = L"1";
        value.Second = L"2";
    }

    void Class::OutEnum(Signed& value)
    {
        value = Signed::First;
    }

    int32_t Class::ReturnInt32()
    {
        return 123;
    }
    hstring Class::ReturnString()
    {
        return L"123";
    }
    Windows::Foundation::IInspectable Class::ReturnObject()
    {
        return make<Value>(123);
    }
    Windows::Foundation::IStringable Class::ReturnStringable()
    {
        return make<Value>(123);
    }
    Struct Class::ReturnStruct()
    {
        return { L"1", L"2" };
    }
    Signed Class::ReturnEnum()
    {
        return Signed::First;
    }

    hstring Class::InInt32Array(array_view<int32_t const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + std::to_wstring(v);
        }

        return result;
    }
    hstring Class::InStringArray(array_view<hstring const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + v;
        }

        return result;
    }
    hstring Class::InObjectArray(array_view<Windows::Foundation::IInspectable const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + v.as<IStringable>().ToString();
        }

        return result;
    }
    hstring Class::InStringableArray(array_view<Windows::Foundation::IStringable const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + v.ToString();
        }

        return result;
    }
    hstring Class::InStructArray(array_view<Struct const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + v.First + v.Second;
        }

        return result;
    }
    hstring Class::InEnumArray(array_view<Signed const> value)
    {
        hstring result;

        for (auto&& v : value)
        {
            result = result + InEnum(v);
        }

        return result;
    }

    void Class::OutInt32Array(com_array<int32_t>& value)
    {
        value = { 1,2,3 };
    }

    void Class::OutStringArray(com_array<hstring>& value)
    {
        value = { L"1", L"2", L"3" };
    }

    void Class::OutObjectArray(com_array<Windows::Foundation::IInspectable>& value)
    {
        value = { make<Value>(1), make<Value>(2), make<Value>(3) };
    }

    void Class::OutStringableArray(com_array<Windows::Foundation::IStringable>& value)
    {
        value = { make<Value>(1), make<Value>(2), make<Value>(3) };
    }

    void Class::OutStructArray(com_array<Struct>& value)
    {
        value = { { L"1", L"2" }, { L"10", L"20" } };
    }

    void Class::OutEnumArray(com_array<Signed>& value)
    {
        value = { Signed::First, Signed::Second };
    }

    void Class::RefInt32Array(array_view<int32_t> value)
    {
        int32_t counter{};

        std::generate(value.begin(), value.end() - 1, [&]
            {
                return ++counter;
            });
    }

    void Class::RefStringArray(array_view<hstring> value)
    {
        int32_t counter{};

        std::generate(value.begin(), value.end() - 1, [&]
            {
                return hstring{ std::to_wstring(++counter) };
            });
    }

    void Class::RefObjectArray(array_view<Windows::Foundation::IInspectable> value)
    {
        int32_t counter{};

        std::generate(value.begin(), value.end() - 1, [&]
            {
                return make<Value>(++counter);
            });
    }

    void Class::RefStringableArray(array_view<Windows::Foundation::IStringable> value)
    {
        int32_t counter{};

        std::generate(value.begin(), value.end() - 1, [&]
            {
                return make<Value>(++counter);
            });
    }

    void Class::RefStructArray(array_view<Struct> value)
    {
        int32_t counter{};

        std::generate(value.begin(), value.end() - 1, [&]
            {
                return Struct
                {
                    hstring{ std::to_wstring(++counter) },
                    hstring{ std::to_wstring(++counter) }
                };
            });
    }

    void Class::RefEnumArray(array_view<Signed> value)
    {
        Signed counter{ Signed::First };

        std::generate(value.begin(), value.end() - 1, [&]
            {
                auto result = counter;
                counter = static_cast<Signed>(static_cast<int32_t>(counter) + 1);
                return result;
            });
    }

    com_array<int32_t> Class::ReturnInt32Array()
    {
        return { 1,2,3 };
    }

    com_array<hstring> Class::ReturnStringArray()
    {
        return { L"1", L"2", L"3" };
    }

    com_array<Windows::Foundation::IInspectable> Class::ReturnObjectArray()
    {
        return { make<Value>(1), make<Value>(2), make<Value>(3) };
    }

    com_array<Windows::Foundation::IStringable> Class::ReturnStringableArray()
    {
        return { make<Value>(1), make<Value>(2), make<Value>(3) };
    }

    com_array<Struct> Class::ReturnStructArray()
    {
        return { { L"1", L"2" }, { L"10", L"20" } };
    }

    com_array<Signed> Class::ReturnEnumArray()
    {
        return { Signed::First, Signed::Second };
    }

    void Class::NoexceptVoid() noexcept
    {
    }

    int32_t Class::NoexceptInt32() noexcept
    {
        return 123;
    }

    hstring Class::NoexceptString() noexcept
    {
        return L"123";
    }

    event_token Class::DeferrableEvent(TypedEventHandler<test_component::Class, test_component::DeferrableEventArgs> const& handler)
    {
        return m_deferrableEvent.add(handler);
    }

    void Class::DeferrableEvent(event_token const& token)
    {
        return m_deferrableEvent.remove(token);
    }

    IAsyncOperation<int32_t> Class::RaiseDeferrableEventAsync()
    {
        auto args = make_self<DeferrableEventArgs>();
        m_deferrableEvent(*this, *args);
        co_await args->wait_for_deferrals();
        co_return args->m_counter;
    }
}
