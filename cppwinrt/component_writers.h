#pragma once

namespace xlang
{
    static void write_component_override_defaults(writer& w, TypeDef const& type)
    {
        std::vector<std::string> interfaces;

        for (auto&& base : get_bases(type))
        {
            if (settings.component_filter.includes(base))
            {
                continue;
            }

            for (auto&&[name, info] : get_interfaces(w, base))
            {
                if (info.base)
                {
                    continue;
                }

                if (info.overridable && !is_always_disabled(info.type))
                {
                    interfaces.push_back(name);
                }
            }
        }

        bool first{ true };

        for (auto&& name : interfaces)
        {
            if (first)
            {
                first = false;
                w.write(",\n        %T<D>", name);
            }
            else
            {
                w.write(", %T<D>", name);
            }
        }
    }

    static void write_component_class_base(writer& w, TypeDef const& type)
    {
        bool first{ true };

        for (auto&& base : get_bases(type))
        {
            if (settings.component_filter.includes(base))
            {
                return;
            }

            if (first)
            {
                first = false;
                w.write(",\n        impl::base<D");
            }

            w.write(", %", base);
        }

        if (!first)
        {
            w.write('>');
        }
    }

    static void write_component_include(writer& w, TypeDef const& type)
    {
        if (!has_factory_members(w, type) || is_always_disabled(type))
        {
            return;
        }

        if (settings.component_opt)
        {
            auto format = R"(void* winrt_make_%();
)";

            w.write(format, get_impl_name(type.TypeNamespace(), type.TypeName()));
        }
        else
        {
            auto format = R"(#include "%.h"
)";

            w.write(format, get_component_filename(type));
        }
    }

    static void write_component_activation(writer& w, TypeDef const& type)
    {
        if (!has_factory_members(w, type) || is_always_disabled(type))
        {
            return;
        }

        auto type_name = type.TypeName();
        auto type_namespace = type.TypeNamespace();
        auto impl_name = get_impl_name(type_namespace, type_name);

        if (settings.component_opt)
        {
            auto format = R"(
    if (requal(name, L"%.%"))
    {
        return winrt_make_%();
    }
)";

            w.write(format,
                type_namespace,
                type_name,
                impl_name);
        }
        else
        {
            auto format = R"(
    if (requal(name, L"%.%"))
    {
        return winrt::detach_abi(winrt::make<winrt::@::factory_implementation::%>());
    }
)";

            w.write(format,
                type_namespace,
                type_name,
                type_namespace,
                type_name);
        }
    }

    static void write_module_g_cpp(writer& w, std::vector<TypeDef> const& classes)
    {
        w.write_root_include("base");
        auto format = R"(%
bool __stdcall %_can_unload_now() noexcept
{
    if (winrt::get_module_lock())
    {
        return false;
    }

    winrt::clear_factory_cache();
    return true;
}

void* __stdcall %_get_activation_factory([[maybe_unused]] std::wstring_view const& name)
{
    auto requal = [](std::wstring_view const& left, std::wstring_view const& right) noexcept
    {
        return std::equal(left.rbegin(), left.rend(), right.rbegin(), right.rend());
    };
%
    return nullptr;
}
)";

        w.write(format,
            bind_each<write_component_include>(classes),
            settings.component_lib,
            settings.component_lib,
            bind_each<write_component_activation>(classes));

        if (settings.component_lib != "winrt")
        {
            return;
        }

        format = R"(
int32_t __stdcall WINRT_CanUnloadNow() noexcept
{
#ifdef _WRL_MODULE_H_
    if (!::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().Terminate())
    {
        return 1;
    }
#endif

    return %_can_unload_now() ? 0 : 1;
}

int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept try
{
    uint32_t length{};
    wchar_t const* const buffer = WINRT_WindowsGetStringRawBuffer(classId, &length);
    std::wstring_view const name{ buffer, length };
    *factory = %_get_activation_factory(name);

    if (*factory)
    {
        return 0;
    }

#ifdef _WRL_MODULE_H_
    return ::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().GetActivationFactory(static_cast<HSTRING>(classId), reinterpret_cast<::IActivationFactory**>(factory));
#else
    return winrt::hresult_class_not_available(name).to_abi();
#endif
}
catch (...) { return winrt::to_hresult(); }
)";

        w.write(format,
            settings.component_lib,
            settings.component_lib);
    }

    static void write_component_interfaces(writer& w, TypeDef const& type)
    {
        bool const fastabi = has_fastabi(type);

        for (auto&&[interface_name, info] : get_interfaces(w, type))
        {
            if (!info.base && !info.is_default && !is_always_disabled(info.type))
            {
                if (!fastabi || !info.fastabi)
                {
                    w.write(", @", interface_name);
                }
            }
        }

        if (has_composable_constructors(w, type))
        {
            w.write(", composable");
        }

        auto base_type = get_base_class(type);

        if (!base_type)
        {
            return;
        }

        if (settings.component_filter.includes(base_type))
        {
            return;
        }

        w.write(", composing");

        for (auto&&[interface_name, info] : get_interfaces(w, base_type))
        {
            if (info.overridable && !is_always_disabled(info.type))
            {
                w.write(", @", interface_name);
            }
        }
    }

    static void write_component_composable_forwarder(writer& w, MethodDef const& method)
    {
        auto format = R"(        auto %(%)
        {
            return impl::composable_factory<T>::template CreateInstance<%>(%);
        }
)";

        method_signature signature{ method };
        method_signature reordered_method = signature;
        auto&& params = reordered_method.params();
        std::rotate(params.begin(), params.end() - 2, params.end());
        w.param_names = true;

        w.write(format,
            get_name(method),
            bind<write_implementation_params>(signature),
            signature.return_signature(),
            bind<write_consume_args>(reordered_method));
    }

    static void write_component_constructor_forwarder(writer& w, MethodDef const& method)
    {
        auto format = R"(        auto %(%)
        {
            return make<T>(%);
        }
)";

        method_signature signature{ method };
        w.param_names = true;

        w.write(format,
            get_name(method),
            bind<write_implementation_params>(signature),
            bind<write_consume_args>(signature));
    }

    void write_component_static_forwarder(writer& w, MethodDef const& method)
    {
        auto format = R"(        auto %(%)
        {
            return T::%(%);
        }
)";

        method_signature signature{ method };
        w.param_names = true;

        w.write(format,
            get_name(method),
            bind<write_implementation_params>(signature),
            get_name(method),
            bind<write_consume_args>(signature));
    }

    static void write_component_forwarders(writer& w, std::map<std::string, factory_info> const& factories)
    {
        bool default_constructor{};

        for (auto&&[factory_name, factory] : factories)
        {
            if (factory.type && is_always_disabled(factory.type))
            {
                continue;
            }

            if (factory.activatable)
            {
                if (!factory.type)
                {
                    default_constructor = true;

                    w.write(R"(        auto ActivateInstance() const
        {
            return make<T>();
        }
)");
                }
                else
                {
                    w.write_each<write_component_constructor_forwarder>(factory.type.MethodList());
                }
            }
            else if (factory.statics)
            {
                w.write_each<write_component_static_forwarder>(factory.type.MethodList());
            }
            else if (factory.composable)
            {
                w.write_each<write_component_composable_forwarder>(factory.type.MethodList());
            }
        }

        if (!default_constructor)
        {
            w.write(R"(        [[noreturn]] Windows::Foundation::IInspectable ActivateInstance() const
        {
            throw hresult_not_implemented();
        }
)");
        }
    }

    static void write_component_factory_interfaces(writer& w, std::map<std::string, factory_info> const& factories)
    {
        for (auto&&[factory_name, factory] : factories)
        {
            if (!factory.type || is_always_disabled(factory.type))
            {
                continue;
            }
            
            w.write(", %", factory_name);
        }
    }

    static void write_component_g_cpp(writer& w, TypeDef const& type)
    {
        auto type_name = type.TypeName();
        auto type_namespace = type.TypeNamespace();
        auto impl_name = get_impl_name(type_namespace, type_name);

        if (has_factory_members(w, type))
        {
            auto format = R"(void* winrt_make_%()
{
    return winrt::detach_abi(winrt::make<winrt::@::factory_implementation::%>());
}
)";

            w.write(format,
                impl_name,
                type_namespace,
                type_name);
        }

        if (!settings.component_opt)
        {
            return;
        }

        write_type_namespace(w, type_namespace);

        for (auto&&[factory_name, factory] : get_factories(w, type))
        {
            if (factory.type && is_always_disabled(factory.type))
            {
                continue;
            }

            if (factory.activatable)
            {
                if (!factory.type)
                {
                    auto format = R"(    %::%() :
        %(make<@::implementation::%>())
    {
    }
)";

                    w.write(format,
                        type_name,
                        type_name,
                        type_name,
                        type_namespace,
                        type_name);
                }
                else
                {
                    for (auto&& method : factory.type.MethodList())
                    {
                        method_signature signature{ method };

                        auto format = R"(    %::%(%) :
        %(make<@::implementation::%>(%))
    {
    }
)";

                        w.write(format,
                            type_name,
                            type_name,
                            bind<write_consume_params>(signature),
                            type_name,
                            type_namespace,
                            type_name,
                            bind<write_consume_args>(signature));
                    }
                }
            }
            else if (factory.composable && factory.visible)
            {
                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    auto& params = signature.params();
                    params.resize(params.size() - 2);

                    auto format = R"(    %::%(%) :
        %(make<@::implementation::%>(%))
    {
    }
)";

                    w.write(format,
                        type_name,
                        type_name,
                        bind<write_consume_params>(signature),
                        type_name,
                        type_namespace,
                        type_name,
                        bind<write_consume_args>(signature));
                }
            }
            else if (factory.statics)
            {
                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    auto method_name = get_name(method);
                    w.async_types = signature.is_async();

                    if (is_add_overload(method) || is_remove_overload(method))
                    {
                        auto format = R"(    auto %::%(%)
    {
        auto f = make<winrt::@::factory_implementation::%>().as<%>();
        return f.%(%);
    }
)";


                        w.write(format,
                            type_name,
                            method_name,
                            bind<write_consume_params>(signature),
                            type_namespace,
                            type_name,
                            factory_name,
                            method_name,
                            bind<write_consume_args>(signature));
                    }
                    else
                    {
                        auto format = R"(    % %::%(%)
    {
        return @::implementation::%::%(%);
    }
)";


                        w.write(format,
                            signature.return_signature(),
                            type_name,
                            method_name,
                            bind<write_consume_params>(signature),
                            type_namespace,
                            type_name,
                            method_name,
                            bind<write_consume_args>(signature));
                    }

                    if (is_add_overload(method))
                    {
                        auto format = R"(    %::%_revoker %::%(auto_revoke_t, %)
    {
        auto f = make<winrt::@::factory_implementation::%>().as<%>();
        return { f, f.%(%) };
    }
)";

                        w.write(format,
                            type_name,
                            method_name,
                            type_name,
                            method_name,
                            bind<write_consume_params>(signature),
                            type_namespace,
                            type_name,
                            factory_name,
                            method_name,
                            bind<write_consume_args>(signature));
                    }
                }
            }
        }

        write_close_namespace(w);
    }

    static void write_component_override_dispatch_base(writer& w, TypeDef const& type)
    {
        if (!is_composable(w, type))
        {
            return;
        }

        std::string interfaces;

        for (auto&& [name, info] : get_interfaces(w, type))
        {
            if (!info.overridable)
            {
                continue;
            }

            interfaces += ", ";
            interfaces += name;
        }

        if (interfaces.empty())
        {
            return;
        }

        auto format = R"(
    protected:
        using dispatch = impl::dispatch_to_overridable<D@>;
        auto overridable() noexcept { return dispatch::overridable(static_cast<D&>(*this)); }
)";

        w.write(format, interfaces);
    }

    static void write_component_class_override_constructors(writer& w, TypeDef const& type)
    {
        auto base_type = get_base_class(type);

        if (!base_type)
        {
            return;
        }

        if (settings.component_filter.includes(base_type))
        {
            return;
        }

        auto type_name = type.TypeName();

        for (auto&&[factory_name, factory] : get_factories(w, base_type))
        {
            if (!factory.composable || is_always_disabled(factory.type))
            {
                continue;
            }

            for (auto&& method : factory.type.MethodList())
            {
                method_signature signature{ method };
                auto& params = signature.params();
                params.resize(params.size() - 2);

                auto format = R"(        %_base(%)
        {
            impl::call_factory<%, %>([&](% const& f) { f.%(%%*this, this->m_inner); });
        }
)";

                w.write(format,
                    type_name,
                    bind<write_consume_params>(signature),
                    base_type,
                    factory_name,
                    factory_name,
                    get_name(method),
                    bind<write_consume_args>(signature),
                    params.empty() ? "" : ", ");
            }
        }
    }

    static void write_component_tearoff_interfaces(writer& w, TypeDef const& type)
    {
        auto format = R"(
            if (is_guid_of<%>(id))
            {
                *result = make_fast_abi_forwarder(static_cast<D const&>(*this).template get_abi<class_type>(), guid_of<%>(), %);
                return 0;
            }
)";

        size_t offset = get_bases(type).size();
        auto interfaces = get_interfaces(w, type);

        for (auto&& [name, info] : interfaces)
        {
            if (!info.base && info.is_default)
            {
                auto methods = info.type.MethodList();
                offset += methods.second - methods.first;
                break;
            }
        }

        for (auto&& [name, info] : interfaces)
        {
            if (info.is_default)
            {
                continue;
            }

            if (!info.fastabi)
            {
                break;
            }

            w.write(format,
                name,
                name,
                offset);

            auto methods = info.type.MethodList();
            offset += methods.second - methods.first;
        }
    }

    static void write_component_tearoff(writer& w, TypeDef const& type, bool has_base)
    {
        if (!has_fastabi(type))
        {
            return;
        }

        if (has_base)
        {
            auto format = R"(
        int32_t query_interface_tearoff(guid const& id, void** result) const noexcept override
        {%
            return B::query_interface_tearoff(id, result);
        }
)";

            w.write(format, bind<write_component_tearoff_interfaces>(type));
        }
        else
        {
            if (!has_fastabi_tearoffs(w, type))
            {
                return;
            }

            auto format = R"(
        int32_t query_interface_tearoff(guid const& id, void** result) const noexcept override
        {%
            return impl::error_no_interface;
        }
)";

            w.write(format, bind<write_component_tearoff_interfaces>(type));
        }
    }

    static void write_component_base_call(writer& w, TypeDef const& type)
    {
        if (!has_fastabi(type))
        {
            return;
        }

        auto base_type = get_base_class(type);

        if (!base_type)
        {
            return;
        }

        auto format = R"(
        auto base_%() const noexcept
        {
            return static_cast<D const&>(*this).template get_abi<%>();
        }
)";

        w.write(format, base_type.TypeName(), base_type);
    }

    static void write_component_g_h(writer& w, TypeDef const& type)
    {
        auto type_name = type.TypeName();
        auto type_namespace = type.TypeNamespace();
        auto factories = get_factories(w, type);
        bool const non_static = !empty(type.InterfaceImpl());

        if (non_static)
        {
            auto format = R"(namespace winrt::@::implementation
{
    template <typename D%, typename... I>
    struct __declspec(empty_bases) %_base : implements<D, @::%%%, %I...>%%%
    {
        using base_type = %_base;
        using class_type = @::%;
        using implements_type = typename %_base::implements_type;
        using implements_type::implements_type;
        %
        hstring GetRuntimeClassName() const
        {
            return L"%.%";
        }
%%%%    };
}
)";

            auto base_type = get_base_class(type);
            std::string composable_base_name;
            std::string base_type_parameter;
            std::string base_type_argument;
            std::string no_module_lock;
            std::string external_requires;

            if (base_type)
            {
                bool const external_base_type = !settings.component_filter.includes(base_type);

                if (external_base_type)
                {
                    composable_base_name = w.write_temp("using composable_base = %;", base_type);
                    auto base_interfaces = get_interfaces(w, base_type);
                    uint32_t base_interfaces_count{};
                    external_requires = ",\n        impl::require<D";

                    for (auto&&[name, info] : base_interfaces)
                    {
                        if (info.overridable || is_always_disabled(info.type))
                        {
                            continue;
                        }

                        ++base_interfaces_count;
                        external_requires += ", ";
                        external_requires += name;
                    }

                    if (base_interfaces_count)
                    {
                        external_requires += '>';
                    }
                    else
                    {
                        external_requires.clear();
                    }
                }
                else
                {
                    base_type_parameter = ", typename B";
                    base_type_argument = ", B";
                    no_module_lock = "no_module_lock, ";
                }
            }

            w.write(format,
                type_namespace,
                base_type_parameter,
                type_name,
                type_namespace,
                type_name,
                bind<write_component_interfaces>(type),
                base_type_argument,
                no_module_lock,
                external_requires,
                bind<write_component_class_base>(type),
                bind<write_component_override_defaults>(type),
                type_name,
                type_namespace,
                type_name,
                type_name,
                composable_base_name,
                type_namespace,
                type_name,
                bind<write_component_class_override_constructors>(type),
                bind<write_component_override_dispatch_base>(type),
                bind<write_component_base_call>(type),
                bind<write_component_tearoff>(type, !base_type_parameter.empty()));
        }

        if (has_factory_members(w, type))
        {
            auto format = R"(namespace winrt::@::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) %T : implements<D, Windows::Foundation::IActivationFactory%, I...>
    {
        using instance_type = @::%;

        hstring GetRuntimeClassName() const
        {
            return L"%.%";
        }
%    };
}
)";

            w.write(format,
                type_namespace,
                type_name,
                bind<write_component_factory_interfaces>(factories),
                type_namespace,
                type_name,
                type_namespace,
                type_name,
                bind<write_component_forwarders>(factories));
        }

        if (non_static)
        {
            auto format = R"(
#if defined(WINRT_FORCE_INCLUDE_%_XAML_G_H) || __has_include("%.xaml.g.h")
#include "%.xaml.g.h"
#else

namespace winrt::@::implementation
{
    template <typename D, typename... I>
    using %T = %_base<D, I...>;
}

#endif
)";

            std::string upper(type_name);
            std::transform(upper.begin(), upper.end(), upper.begin(), [](char c) {return static_cast<char>(::toupper(c)); });

            auto include_path = get_generated_component_filename(type);

            w.write(format,
                upper,
                include_path,
                include_path,
                type_namespace,
                type_name,
                type_name);
        }
    }

    static void write_component_base(writer& w, TypeDef const& type)
    {
        if (empty(type.InterfaceImpl()))
        {
            return;
        }

        auto type_name = type.TypeName();
        auto base_type = get_base_class(type);

        if (base_type && settings.component_filter.includes(base_type))
        {
            w.write(" : %T<%, @::implementation::%>",
                type_name,
                type_name,
                base_type.TypeNamespace(),
                base_type.TypeName());
        }
        else
        {
            w.write(" : %T<%>", type_name, type_name);
        }
    }

    static void write_component_member_declarations(writer& w, TypeDef const& type)
    {
        auto type_name = type.TypeName();

        for (auto&&[factory_name, factory] : get_factories(w, type))
        {
            if (factory.activatable || factory.composable)
            {
                if (!factory.type)
                {
                    continue;
                }

                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    auto& params = signature.params();

                    if (factory.composable)
                    {
                        params.resize(params.size() - 2);
                    }

                    if (params.empty())
                    {
                        continue;
                    }

                    w.write("        %(%);\n",
                        type_name,
                        bind<write_implementation_params>(signature));
                }
            }
            else if (factory.statics)
            {
                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    w.async_types = signature.is_async();
                    auto method_name = get_name(method);

                    w.write("        static % %(%)%;\n",
                        signature.return_signature(),
                        method_name,
                        bind<write_implementation_params>(signature),
                        is_noexcept(method) ? " noexcept" : "");
                }
            }
        }

        for (auto&&[interface_name, info] : get_interfaces(w, type))
        {
            if (info.base)
            {
                continue;
            }

            w.generic_param_stack.insert(w.generic_param_stack.end(), info.generic_param_stack.begin(), info.generic_param_stack.end());

            for (auto&& method : info.type.MethodList())
            {
                method_signature signature{ method };
                w.async_types = signature.is_async();
                auto method_name = get_name(method);

                w.write("        % %(%)%;\n",
                    signature.return_signature(),
                    method_name,
                    bind<write_implementation_params>(signature),
                    is_noexcept(method) ? " noexcept" : "");
            }

            w.generic_param_stack.resize(w.generic_param_stack.size() - info.generic_param_stack.size());
        }
    }

    static void write_generated_static_assert(writer& w)
    {
        auto format = R"(
// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");
)";

        w.write(format);
    }

    static void write_component_h(writer& w, TypeDef const& type)
    {
        auto type_name = type.TypeName();
        auto type_namespace = type.TypeNamespace();
        auto base_type = get_base_class(type);
        std::string base_include;

        if (base_type && settings.component_filter.includes(base_type))
        {
            base_include = "#include \"" + get_component_filename(base_type) + ".h\"\n";
        }

        {
            auto format = R"(#include "%.g.h"
%%
namespace winrt::@::implementation
{
    struct %%
    {
        %() = default;

%    };
}
)";

            w.write(format,
                get_generated_component_filename(type),
                base_include,
                bind<write_generated_static_assert>(),
                type_namespace,
                type_name,
                bind<write_component_base>(type),
                type_name,
                bind<write_component_member_declarations>(type));

        }

        if (has_factory_members(w, type))
        {
            auto format = R"(namespace winrt::@::factory_implementation
{
    struct % : %T<%, implementation::%>
    {
    };
}
)";
            w.write(format,
                type_namespace,
                type_name,
                type_name,
                type_name,
                type_name);
        }
    }

    static void write_component_member_definitions(writer& w, TypeDef const& type)
    {
        auto type_name = type.TypeName();

        for (auto&&[factory_name, factory] : get_factories(w, type))
        {
            if (factory.activatable || factory.composable)
            {
                if (!factory.type)
                {
                    continue;
                }

                auto format = R"(    %::%(%)
    {
        throw hresult_not_implemented();
    }
)";

                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    auto& params = signature.params();

                    if (factory.composable)
                    {
                        params.resize(params.size() - 2);
                    }

                    if (params.empty())
                    {
                        continue;
                    }

                    w.write(format,
                        type_name,
                        type_name,
                        bind<write_implementation_params>(signature));
                }
            }
            else if (factory.statics)
            {
                auto format = R"(    % %::%(%)%
    {
        throw hresult_not_implemented();
    }
)";

                for (auto&& method : factory.type.MethodList())
                {
                    method_signature signature{ method };
                    w.async_types = signature.is_async();
                    auto method_name = get_name(method);

                    w.write(format,
                        signature.return_signature(),
                        type_name,
                        method_name,
                        bind<write_implementation_params>(signature),
                        is_noexcept(method) ? " noexcept" : "");
                }
            }
        }

        for (auto&&[interface_name, info] : get_interfaces(w, type))
        {
            if (info.base)
            {
                continue;
            }

            w.generic_param_stack.insert(w.generic_param_stack.end(), info.generic_param_stack.begin(), info.generic_param_stack.end());

            for (auto&& method : info.type.MethodList())
            {
                auto format = R"(    % %::%(%)%
    {
        throw hresult_not_implemented();
    }
)";

                method_signature signature{ method };
                w.async_types = signature.is_async();
                auto method_name = get_name(method);

                w.write(format,
                    signature.return_signature(),
                    type_name,
                    method_name,
                    bind<write_implementation_params>(signature),
                    is_noexcept(method) ? " noexcept" : "");
            }

            w.generic_param_stack.resize(w.generic_param_stack.size() - info.generic_param_stack.size());
        }
    }

    static void write_component_cpp(writer& w, TypeDef const& type)
    {
        auto filename = get_component_filename(type);

        {
            auto format = R"(#include "%.h"
)";

            w.write(format, filename);
        }

        if (settings.component_opt)
        {
            auto format = R"(#include "%.g.cpp"
)";

            w.write(format, filename);
        }

        auto format = R"(%
namespace winrt::@::implementation
{
%}
)";

        w.write(format,
            bind<write_generated_static_assert>(),
            type.TypeNamespace(),
            bind<write_component_member_definitions>(type));
    }

    static void write_component_fast_abi_thunk(writer& w)
    {
        for (uint32_t slot = 6; slot < 1024; ++slot)
        {
            auto format = R"(    extern "C" void __stdcall winrt_ff_thunk%();
)";

            w.write(format, slot);
        }
    }

    static void write_component_fast_abi_vtable(writer& w)
    {
        for (uint32_t slot = 6; slot < 1024; ++slot)
        {
            auto format = R"(
#if WINRT_FAST_ABI_SIZE > %
            winrt_ff_thunk%,
#endif
)";
            w.write(format,
                slot,
                slot);
        }
    }
}