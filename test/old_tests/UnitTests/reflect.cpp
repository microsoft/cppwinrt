#include "pch.h"
#include "catch.hpp"
#include <winrt/Reflection.h>

using namespace winrt;
using namespace winrt::experimental;
using namespace Windows::Foundation;
using namespace Reflection;

// Test some basic cases

TEST_CASE("query named property")
{
    using ReadWriteProperty = reflect::named_property<PropertyTests>::ReadWriteProperty;

    static_assert(std::is_same_v<int, typename reflect::property_value<ReadWriteProperty>::type>);
    static_assert(std::is_same_v<int, reflect::property_value_t<ReadWriteProperty>>);

    static_assert(std::is_same_v<PropertyTests, typename reflect::property_target<ReadWriteProperty>::type>);
    static_assert(std::is_same_v<PropertyTests, reflect::property_target_t<ReadWriteProperty>>);

    static_assert(reflect::is_property_readable<ReadWriteProperty>::value);
    static_assert(reflect::is_property_readable_v<ReadWriteProperty>);

    static_assert(reflect::is_property_writable<ReadWriteProperty>::value);
    static_assert(reflect::is_property_writable_v<ReadWriteProperty>);

    static_assert(!reflect::is_property_static<ReadWriteProperty>::value);
    static_assert(!reflect::is_property_static_v<ReadWriteProperty>);

    REQUIRE(reflect::property_name<ReadWriteProperty>::value == L"ReadWriteProperty");
    REQUIRE(reflect::property_name_v<ReadWriteProperty> == L"ReadWriteProperty");

    using ReadOnlyProperty = reflect::named_property<PropertyTests>::ReadOnlyProperty;
    static_assert(std::is_same_v<int, reflect::property_value_t<ReadOnlyProperty>>);
    static_assert(std::is_same_v<PropertyTests, reflect::property_target_t<ReadOnlyProperty>>);
    static_assert(reflect::is_property_readable_v<ReadOnlyProperty>);
    static_assert(!reflect::is_property_writable_v<ReadOnlyProperty>);
    static_assert(!reflect::is_property_static_v<ReadOnlyProperty>);
    REQUIRE(reflect::property_name_v<ReadOnlyProperty> == L"ReadOnlyProperty");

    using StaticReadWriteProperty = reflect::named_property<PropertyTests>::StaticReadWriteProperty;
    static_assert(std::is_same_v<int, reflect::property_value_t<StaticReadWriteProperty>>);
    static_assert(std::is_same_v<PropertyTests, reflect::property_target_t<StaticReadWriteProperty>>);
    static_assert(reflect::is_property_readable_v<StaticReadWriteProperty>);
    static_assert(reflect::is_property_writable_v<StaticReadWriteProperty>);
    static_assert(reflect::is_property_static_v<StaticReadWriteProperty>);
    REQUIRE(reflect::property_name_v<StaticReadWriteProperty> == L"StaticReadWriteProperty");

    using StaticReadOnlyProperty = reflect::named_property<PropertyTests>::StaticReadOnlyProperty;
    static_assert(std::is_same_v<int, reflect::property_value_t<StaticReadOnlyProperty>>);
    static_assert(std::is_same_v<PropertyTests, reflect::property_target_t<StaticReadOnlyProperty>>);
    static_assert(reflect::is_property_readable_v<StaticReadOnlyProperty>);
    static_assert(!reflect::is_property_writable_v<StaticReadOnlyProperty>);
    static_assert(reflect::is_property_static_v<StaticReadOnlyProperty>);
    REQUIRE(reflect::property_name_v<StaticReadOnlyProperty> == L"StaticReadOnlyProperty");
}

TEST_CASE("named getter and setter")
{
    using ReadWriteProperty = reflect::named_property<PropertyTests>::ReadWriteProperty;

    PropertyTests object{};
    REQUIRE(reflect::property_getter<ReadWriteProperty>{}(object) == 0);
    reflect::property_setter<ReadWriteProperty>{}(object, 42);
    REQUIRE(reflect::property_getter<ReadWriteProperty>{}(object) == 42);
}

namespace
{
    // Hook up a basic type erasure
    struct IPropertyQuery
    {
        virtual std::wstring_view name() const = 0;
        virtual std::wstring_view value_name() const = 0;
        virtual std::wstring_view target_interface_name() const = 0;
        virtual bool is_readable() const = 0;
        virtual bool is_writable() const = 0;
        virtual Windows::Foundation::IInspectable get_value(IInspectable const& target) const = 0;
        virtual void set_value(IInspectable const& target, IInspectable const& value) const = 0;
    };

    template <typename MetaProperty>
    struct PropertyQuery : IPropertyQuery
    {
        std::wstring_view name() const noexcept override { return reflect::property_name_v<MetaProperty>; }
        std::wstring_view value_name() const noexcept override { return name_of<reflect::property_value_t<MetaProperty>>(); }
        std::wstring_view target_interface_name() const noexcept override { return name_of<reflect::property_target_t<MetaProperty>>(); }
        bool is_readable() const noexcept override { return reflect::is_property_readable_v<MetaProperty>; }
        bool is_writable() const noexcept override { return reflect::is_property_writable_v<MetaProperty>; }
        Windows::Foundation::IInspectable get_value([[maybe_unused]] IInspectable const& target) const
        {
            if constexpr (reflect::is_property_readable_v<MetaProperty>)
            {
                using target_type = reflect::property_target_t<MetaProperty>;
                using getter = reflect::property_getter<MetaProperty>;
                if constexpr (reflect::is_property_static_v<MetaProperty>)
                {
                    return box_value(getter{}());
                }
                else
                {
                    return box_value(getter{}(target.as<target_type>()));
                }
            }
            else
            {
                throw hresult_not_implemented{};
            }
        }
        void set_value([[maybe_unused]] IInspectable const& target, [[maybe_unused]] IInspectable const& value) const
        {
            if constexpr (reflect::is_property_writable_v<MetaProperty>)
            {
                using target_type = reflect::property_target_t<MetaProperty>;
                using value_type = reflect::property_value_t<MetaProperty>;
                using setter = typename impl::identity<reflect::property_setter<MetaProperty>>::type;
                if constexpr (reflect::is_property_static_v<MetaProperty>)
                {
                    setter{}(unbox_value<value_type>(value));
                }
                else
                {
                    setter{}(target.as<target_type>(), unbox_value<value_type>(value));
                }
            }
            else
            {
                throw hresult_not_implemented{};
            }
        }
    };
}

TEST_CASE("visit properties")
{
    auto checker = [](std::vector<std::unique_ptr<IPropertyQuery>> const& props)
    {
        REQUIRE(props.size() == 4);

        REQUIRE(props[0]->name() == L"ReadOnlyProperty");
        REQUIRE(props[1]->name() == L"ReadWriteProperty");
        REQUIRE(props[2]->name() == L"StaticReadOnlyProperty");
        REQUIRE(props[3]->name() == L"StaticReadWriteProperty");

        REQUIRE(props[0]->value_name() == L"Int32");
        REQUIRE(props[1]->value_name() == L"Int32");
        REQUIRE(props[2]->value_name() == L"Int32");
        REQUIRE(props[3]->value_name() == L"Int32");

        REQUIRE(props[0]->target_interface_name() == L"Reflection.PropertyTests");
        REQUIRE(props[1]->target_interface_name() == L"Reflection.PropertyTests");
        REQUIRE(props[2]->target_interface_name() == L"Reflection.PropertyTests");
        REQUIRE(props[3]->target_interface_name() == L"Reflection.PropertyTests");

        REQUIRE(props[0]->is_readable() == true);
        REQUIRE(props[1]->is_readable() == true);
        REQUIRE(props[2]->is_readable() == true);
        REQUIRE(props[3]->is_readable() == true);

        REQUIRE(props[0]->is_writable() == false);
        REQUIRE(props[1]->is_writable() == true);
        REQUIRE(props[2]->is_writable() == false);
        REQUIRE(props[3]->is_writable() == true);

        Reflection::PropertyTests object{};
        REQUIRE(unbox_value<int32_t>(props[0]->get_value(object)) == 0);
        props[1]->set_value(object, box_value(42));
        REQUIRE(unbox_value<int32_t>(props[1]->get_value(object)) == 42);
        REQUIRE(unbox_value<int32_t>(props[2]->get_value(object)) == 0);
        props[3]->set_value(object, box_value(1729));
        REQUIRE(unbox_value<int32_t>(props[3]->get_value(object)) == 1729);
    };

    std::vector<std::unique_ptr<IPropertyQuery>> props;
    auto visitor = [&props](auto prop)
    {
        using MetaProperty = decltype(prop);
        props.push_back(std::make_unique<PropertyQuery<MetaProperty>>());
    };

    reflect::for_each_property<PropertyTests>(visitor);
    std::sort(props.begin(), props.end(), [](auto const& lhs, auto const& rhs)
    {
        return lhs->name() < rhs->name();
    });

    checker(props);
}

TEST_CASE("find property")
{
    bool found = false;
    std::wstring name;
    auto find_bool_prop = [&found, &name](auto prop)
    {
        using MetaProperty = decltype(prop);
        if constexpr(reflect::is_property_readable_v<MetaProperty> && !reflect::is_property_writable_v<MetaProperty> && !reflect::is_property_static_v<MetaProperty>)
        {
            REQUIRE(found == false);
            found = true;
            name = reflect::property_name_v<MetaProperty>;
            return true;
        }
        else
        {
            return false;
        }
    };

    REQUIRE(reflect::find_property_if<PropertyTests>(find_bool_prop));

    REQUIRE(found == true);
    REQUIRE(name == L"ReadOnlyProperty");

    found = false;
    auto find_named_prop = [&found](auto prop)
    {
        using MetaProperty = decltype(prop);
        if (L"ReadWriteProperty" == reflect::property_name_v<MetaProperty>)
        {
            REQUIRE(found == false);
            found = true;
        }
        return found;
    };

    REQUIRE(reflect::find_property_if<PropertyTests>(find_named_prop));

    REQUIRE(found == true);
}

TEST_CASE("enums")
{
    constexpr const auto& names = reflect::get_enumerator_names<Colors>::value;
    static_assert(names.size() == 4);
    REQUIRE(names[0] == L"Red");
    REQUIRE(names[1] == L"Yellow");
    REQUIRE(names[2] == L"Green");
    REQUIRE(names[3] == L"Blue");

    constexpr const auto& values = reflect::get_enumerator_values<Colors>::value;
    static_assert(values.size() == 4);
    static_assert(values[0] == Colors::Red);
    static_assert(values[1] == Colors::Yellow);
    static_assert(values[2] == Colors::Green);
    static_assert(values[3] == Colors::Blue);
}
