#pragma once

namespace cppwinrt
{
    using namespace std::filesystem;
    using namespace winmd::reader;
    using namespace std::literals;

    inline bool starts_with(std::string_view const& value, std::string_view const& match) noexcept
    {
        return 0 == value.compare(0, match.size(), match);
    }

    template <typename...T> struct visit_overload : T... { using T::operator()...; };

    template <typename V, typename...C>
    auto call(V&& variant, C&&...call)
    {
        return std::visit(visit_overload<C...>{ std::forward<C>(call)... }, std::forward<V>(variant));
    }

    struct type_name
    {
        std::string_view name;
        std::string_view name_space;

        explicit type_name(TypeDef const& type) :
            name(type.TypeName()),
            name_space(type.TypeNamespace())
        {
        }

        explicit type_name(TypeRef const& type) :
            name(type.TypeName()),
            name_space(type.TypeNamespace())
        {
        }

        explicit type_name(coded_index<TypeDefOrRef> const& type)
        {
            auto const& [type_namespace, type_name] = get_type_namespace_and_name(type);
            name_space = type_namespace;
            name = type_name;
        }
    };

    bool operator==(type_name const& left, type_name const& right)
    {
        return left.name == right.name && left.name_space == right.name_space;
    }

    bool operator==(type_name const& left, std::string_view const& right)
    {
        if (left.name.size() + 1 + left.name_space.size() != right.size())
        {
            return false;
        }

        if (right[left.name_space.size()] != '.')
        {
            return false;
        }

        if (0 != right.compare(left.name_space.size() + 1, left.name.size(), left.name))
        {
            return false;
        }

        return 0 == right.compare(0, left.name_space.size(), left.name_space);
    }

    static auto remove_tick(std::string_view const& name)
    {
        return name.substr(0, name.rfind('`'));
    }

    template <typename First, typename...Rest>
    auto get_impl_name(First const& first, Rest const&... rest)
    {
        std::string result;

        auto convert = [&](auto&& value)
        {
            for (auto&& c : value)
            {
                result += c == '.' ? '_' : c;
            }
        };

        convert(first);
        ((result += '_', convert(rest)), ...);
        return result;
    }

    static bool transform_special_numeric_type(std::string_view& name)
    {
        if (name == "Matrix3x2") { name = "float3x2"; return true; }
        else if (name == "Matrix4x4") { name = "float4x4"; return true; }
        else if (name == "Plane") { name = "plane"; return true; }
        else if (name == "Quaternion") { name = "quaternion"; return true; }
        else if (name == "Vector2") { name = "float2"; return true; }
        else if (name == "Vector3") { name = "float3"; return true; }
        else if (name == "Vector4") { name = "float4"; return true; }
        return false;
    }

    struct writer : writer_base<writer>
    {
        using writer_base<writer>::write;

        struct depends_compare
        {
            bool operator()(TypeDef const& left, TypeDef const& right) const
            {
                return left.TypeName() < right.TypeName();
            }
        };

        std::string type_namespace;
        bool abi_types{};
        bool delegate_types{};
        bool param_names{};
        bool consume_types{};
        bool async_types{};
        std::map<std::string_view, std::set<TypeDef, depends_compare>> depends;
        std::vector<std::vector<std::string>> generic_param_stack;

        struct generic_param_guard
        {
            explicit generic_param_guard(writer* arg = nullptr)
                : owner(arg)
            {}

            ~generic_param_guard()
            {
                if (owner)
                {
                    owner->generic_param_stack.pop_back();
                }
            }

            generic_param_guard(generic_param_guard&& other)
                : owner(other.owner)
            {
                other.owner = nullptr;
            }

            generic_param_guard& operator=(generic_param_guard&& other)
            {
                owner = std::exchange(other.owner, nullptr);
                return *this;
            }

            generic_param_guard& operator=(generic_param_guard const&) = delete;
            writer* owner;
        };

        template<typename T>
        struct member_value_guard
        {
            writer* const owner;
            T writer::* const member;
            T const previous;
            explicit member_value_guard(writer* arg, T writer::* ptr, T value) :
                owner(arg), member(ptr), previous(std::exchange(owner->*member, value))
            {
            }

            ~member_value_guard()
            {
                owner->*member = previous;
            }

            member_value_guard(member_value_guard const&) = delete;
            member_value_guard& operator=(member_value_guard const&) = delete;

        };

        void add_depends(TypeDef const& type)
        {
            auto ns = type.TypeNamespace();

            if (ns != type_namespace)
            {
                depends[ns].insert(type);
            }
        }

        [[nodiscard]] auto push_generic_params(std::pair<GenericParam, GenericParam> const& params)
        {
            if (empty(params))
            {
                return generic_param_guard{ nullptr };
            }

            std::vector<std::string> names;

            for (auto&& param : params)
            {
                names.push_back(std::string{ param.Name() });
            }

            generic_param_stack.push_back(std::move(names));
            return generic_param_guard{ this };
        }

        [[nodiscard]] auto push_generic_params(GenericTypeInstSig const& signature)
        {
            std::vector<std::string> names;

            for (auto&& arg : signature.GenericArgs())
            {
                names.push_back(write_temp("%", arg));
            }

            generic_param_stack.push_back(std::move(names));
            return generic_param_guard{ this };
        }

        [[nodiscard]] auto push_abi_types(bool value)
        {
            return member_value_guard(this, &writer::abi_types, value);
        }

        [[nodiscard]] auto push_async_types(bool value)
        {
            return member_value_guard(this, &writer::async_types, value);
        }

        [[nodiscard]] auto push_delegate_types(bool value)
        {
            return member_value_guard(this, &writer::delegate_types, value);
        }

        void write_value(std::int32_t value)
        {
            write_printf("%d", value);
        }

        void write_value(std::uint32_t value)
        {
            write_printf("%#0x", value);
        }

        void write_code(std::string_view const& value)
        {
            for (auto&& c : value)
            {
                if (c == '.')
                {
                    write("::");
                }
                else if (c == '`')
                {
                    return;
                }
                else
                {
                    write(c);
                }
            }
        }

        void write(Constant const& value)
        {
            switch (value.Type())
            {
            case ConstantType::Int32:
                write_value(value.ValueInt32());
                break;
            case ConstantType::UInt32:
                write_value(value.ValueUInt32());
                break;
            default:
                throw std::invalid_argument("Unexpected constant type");
            }
        }

        void write(TypeDef const& type)
        {
            add_depends(type);
            auto ns = type.TypeNamespace();
            auto name = type.TypeName();
            auto generics = type.GenericParam();

            if (!empty(generics))
            {
                write("winrt::@::%<%>", ns, remove_tick(name), bind_list(", ", generics));
                return;
            }

            if (name == "EventRegistrationToken" && ns == "Windows.Foundation")
            {
                write("winrt::event_token");
            }
            else if (name == "HResult" && ns == "Windows.Foundation")
            {
                write("winrt::hresult");
            }
            else if (abi_types)
            {
                auto category = get_category(type);

                if (ns == "Windows.Foundation.Numerics" && transform_special_numeric_type(name))
                {
                    write("winrt::@::%", ns, name);
                }
                else if (category == category::struct_type)
                {
                    if ((name == "DateTime" || name == "TimeSpan") && ns == "Windows.Foundation")
                    {
                        write("std::int64_t");
                    }
                    else if ((name == "Point" || name == "Size" || name == "Rect") && ns == "Windows.Foundation")
                    {
                        write("winrt::@::%", ns, name);
                    }
                    else if (delegate_types)
                    {
                        write("struct impl::struct_%_%", get_impl_name(ns), name);
                    }
                    else
                    {
                        write("struct struct_%_%", get_impl_name(ns), name);
                    }
                }
                else if (category == category::enum_type)
                {
                    write(type.FieldList().first.Signature().Type());
                }
                else
                {
                    write("void*");
                }
            }
            else
            {
                if (ns == "Windows.Foundation.Numerics")
                {
                    if (name == "Matrix3x2") { name = "float3x2"; }
                    else if (name == "Matrix4x4") { name = "float4x4"; }
                    else if (name == "Plane") { name = "plane"; }
                    else if (name == "Quaternion") { name = "quaternion"; }
                    else if (name == "Vector2") { name = "float2"; }
                    else if (name == "Vector3") { name = "float3"; }
                    else if (name == "Vector4") { name = "float4"; }

                    write("winrt::@::%", ns, name);
                }
                else
                {
                    write("winrt::@::%", ns, name);
                }
            }
        }

        void write(TypeRef const& type)
        {
            if (type_name(type) == "System.Guid")
            {
                write("winrt::guid");
            }
            else
            {
                write(find_required(type));
            }
        }

        void write(GenericParam const& param)
        {
            write(param.Name());
        }

        void write(coded_index<TypeDefOrRef> const& type)
        {
            switch (type.type())
            {
            case TypeDefOrRef::TypeDef:
                write(type.TypeDef());
                break;
            case TypeDefOrRef::TypeRef:
                write(type.TypeRef());
                break;
            case TypeDefOrRef::TypeSpec:
                write(type.TypeSpec().Signature().GenericTypeInst());
                break;
            }
        }

        void write(GenericTypeInstSig const& type)
        {
            if (abi_types)
            {
                write("void*");
            }
            else
            {
                auto generic_type = type.GenericType();
                auto[ns, name] = get_type_namespace_and_name(generic_type);
                name.remove_suffix(name.size() - name.rfind('`'));
                add_depends(find_required(generic_type));

                if (consume_types)
                {
                    static constexpr std::string_view iterable("winrt::Windows::Foundation::Collections::IIterable<"sv);
                    static constexpr std::string_view vector_view("winrt::Windows::Foundation::Collections::IVectorView<"sv);
                    static constexpr std::string_view map_view("winrt::Windows::Foundation::Collections::IMapView<"sv);
                    static constexpr std::string_view vector("winrt::Windows::Foundation::Collections::IVector<"sv);
                    static constexpr std::string_view map("winrt::Windows::Foundation::Collections::IMap<"sv);

                    consume_types = false;
                    auto full_name = write_temp("winrt::@::%<%>", ns, name, bind_list(", ", type.GenericArgs()));
                    consume_types = true;

                    if (starts_with(full_name, iterable))
                    {
                        if (async_types)
                        {
                            write("param::async_iterable%", full_name.substr(iterable.size() - 1));
                        }
                        else
                        {
                            write("param::iterable%", full_name.substr(iterable.size() - 1));
                        }
                    }
                    else if (starts_with(full_name, vector_view))
                    {
                        if (async_types)
                        {
                            write("param::async_vector_view%", full_name.substr(vector_view.size() - 1));
                        }
                        else
                        {
                            write("param::vector_view%", full_name.substr(vector_view.size() - 1));
                        }
                    }

                    else if (starts_with(full_name, map_view))
                    {
                        if (async_types)
                        {
                            write("param::async_map_view%", full_name.substr(map_view.size() - 1));
                        }
                        else
                        {
                            write("param::map_view%", full_name.substr(map_view.size() - 1));
                        }
                    }
                    else if (starts_with(full_name, vector))
                    {
                        write("param::vector%", full_name.substr(vector.size() - 1));
                    }
                    else if (starts_with(full_name, map))
                    {
                        write("param::map%", full_name.substr(map.size() - 1));
                    }
                    else
                    {
                        write(full_name);
                    }
                }
                else
                {
                    write("winrt::@::%<%>", ns, name, bind_list(", ", type.GenericArgs()));
                }
            }
        }

        void write(TypeSig::value_type const& type)
        {
            call(type,
                [&](ElementType type)
                {
                    if (type == ElementType::Boolean) { write("bool"); }
                    else if (type == ElementType::Char) { write("char16_t"); }
                    else if (type == ElementType::I1) { write("std::int8_t"); }
                    else if (type == ElementType::U1) { write("std::uint8_t"); }
                    else if (type == ElementType::I2) { write("std::int16_t"); }
                    else if (type == ElementType::U2) { write("std::uint16_t"); }
                    else if (type == ElementType::I4) { write("std::int32_t"); }
                    else if (type == ElementType::U4) { write("std::uint32_t"); }
                    else if (type == ElementType::I8) { write("std::int64_t"); }
                    else if (type == ElementType::U8) { write("std::uint64_t"); }
                    else if (type == ElementType::R4) { write("float"); }
                    else if (type == ElementType::R8) { write("double"); }
                    else if (type == ElementType::String)
                    {
                        if (abi_types)
                        {
                            write("void*");
                        }
                        else if (consume_types)
                        {
                            write("param::hstring");
                        }
                        else
                        {
                            write("hstring");
                        }
                    }
                    else if (type == ElementType::Object)
                    {
                        if (abi_types)
                        {
                            write("void*");
                        }
                        else
                        {
                            write("winrt::Windows::Foundation::IInspectable");
                        }
                    }
                    else
                    {
                        assert(false);
                    }
                },
                [&](GenericTypeIndex var)
                {
                    write(generic_param_stack.back()[var.index]);
                },
                    [&](auto&& type)
                {
                    write(type);
                });
        }

        void write(TypeSig const& signature)
        {
            if (!abi_types && signature.is_szarray())
            {
                write("com_array<%>", signature.Type());
            }
            else
            {
                write(signature.Type());
            }
        }

        void write(RetTypeSig const& value)
        {
            if (value)
            {
                write(value.Type());
            }
            else
            {
                write("void");
            }
        }

        void write(Field const& value)
        {
            write(value.Signature().Type());
        }

        void write_root_include(std::string_view const& include)
        {
            auto format = R"(#include %winrt/%.h%
)";

            write(format,
                settings.brackets ? '<' : '\"',
                include,
                settings.brackets ? '>' : '\"');
        }

        void write_depends(std::string_view const& ns, char impl = 0)
        {
            if (impl)
            {
                write_root_include(write_temp("impl/%.%", ns, impl));
            }
            else
            {
                write_root_include(ns);
            }
        }

        void save_header(char impl = 0)
        {
            auto filename{ settings.output_folder + "winrt/" };

            if (impl)
            {
                filename += "impl/";
            }

            filename += type_namespace;

            if (impl)
            {
                filename += '.';
                filename += impl;
            }

            filename += ".h";
            flush_to_file(filename);
        }
    };
}
