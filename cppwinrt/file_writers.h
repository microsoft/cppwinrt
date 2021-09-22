#pragma once

namespace cppwinrt
{
    static void write_base_h()
    {
        writer w;
        write_preamble(w);
        w.write(strings::base_version_odr, CPPWINRT_VERSION_STRING);
        {
            auto wrap_file_guard = wrap_open_file_guard(w, "BASE");

            w.write(strings::base_includes);
            w.write(strings::base_macros);
            w.write(strings::base_types);
            w.write(strings::base_extern);
            w.write(strings::base_meta);
            w.write(strings::base_identity);
            w.write(strings::base_handle);
            w.write(strings::base_lock);
            w.write(strings::base_abi);
            w.write(strings::base_windows);
            w.write(strings::base_com_ptr);
            w.write(strings::base_string);
            w.write(strings::base_string_input);
            w.write(strings::base_string_operators);
            w.write(strings::base_array);
            w.write(strings::base_weak_ref);
            w.write(strings::base_agile_ref);
            w.write(strings::base_error);
            w.write(strings::base_marshaler);
            w.write(strings::base_delegate);
            w.write(strings::base_events);
            w.write(strings::base_activation);
            w.write(strings::base_implements);
            w.write(strings::base_composable);
            w.write(strings::base_foundation);
            w.write(strings::base_chrono);
            w.write(strings::base_security);
            w.write(strings::base_std_hash);
            w.write(strings::base_iterator);
            w.write(strings::base_coroutine_threadpool);
            w.write(strings::base_natvis);
            w.write(strings::base_version);
        }
        w.flush_to_file(settings.output_folder + "winrt/base.h");
    }

    static void write_fast_forward_h(std::vector<TypeDef> const& classes)
    {
        writer w;
        write_preamble(w);
        {
            auto wrap_file_guard = wrap_open_file_guard(w, "FAST_FORWARD");

            auto const fast_abi_size = get_fastabi_size(w, classes);

            w.write(strings::base_fast_forward,
                fast_abi_size,
                fast_abi_size,
                bind<write_component_fast_abi_thunk>(),
                bind<write_component_fast_abi_vtable>());

        }
        w.flush_to_file(settings.output_folder + "winrt/fast_forward.h");
    }

    static void write_namespace_0_h(std::string_view const& ns, cache::namespace_members const& members)
    {
        writer w;
        w.type_namespace = ns;

        {
            auto wrap_type = wrap_type_namespace(w, ns);
            w.write_each<write_enum>(members.enums);
            w.write_each<write_forward>(members.interfaces);
            w.write_each<write_forward>(members.classes);
            w.write_each<write_forward>(members.structs);
            w.write_each<write_forward>(members.delegates);
        }
        {
            auto wrap_impl = wrap_impl_namespace(w);
            w.write_each<write_category>(members.interfaces, "interface_category");
            w.write_each<write_category>(members.classes, "class_category");
            w.write_each<write_category>(members.enums, "enum_category");
            w.write_each<write_struct_category>(members.structs);
            w.write_each<write_category>(members.delegates, "delegate_category");

            // Class names are always required for activation.
            // Class, enum, and struct names are required for producing GUIDs for generic types.
            // Interface and delegates names are required for Xaml compatibility.
            w.write_each<write_name>(members.classes);
            w.write_each<write_name>(members.enums);
            w.write_each<write_name>(members.structs);
            w.write_each<write_name>(members.interfaces);
            w.write_each<write_name>(members.delegates);

            w.write_each<write_guid>(members.interfaces);
            w.write_each<write_guid>(members.delegates);
            w.write_each<write_default_interface>(members.classes);
            w.write_each<write_interface_abi>(members.interfaces);
            w.write_each<write_delegate_abi>(members.delegates);
            w.write_each<write_consume>(members.interfaces);
            w.write_each<write_struct_abi>(members.structs);
        }

        write_close_file_guard(w);
        w.swap();
        write_preamble(w);
        write_open_file_guard(w, ns, '0');

        for (auto&& depends : w.depends)
        {
            auto wrap_type = wrap_type_namespace(w, depends.first);
            w.write_each<write_forward>(depends.second);
        }

        w.save_header('0');
    }

    static void write_namespace_1_h(std::string_view const& ns, cache::namespace_members const& members)
    {
        writer w;
        w.type_namespace = ns;

        {
            auto wrap_type = wrap_type_namespace(w, ns);
            w.write_each<write_interface>(members.interfaces);
        }
        write_namespace_special_1(w, ns);

        write_close_file_guard(w);
        w.swap();
        write_preamble(w);
        write_open_file_guard(w, ns, '1');

        for (auto&& depends : w.depends)
        {
            w.write_depends(depends.first, '0');
        }

        w.write_depends(w.type_namespace, '0');
        w.save_header('1');
    }

    static void write_namespace_2_h(std::string_view const& ns, cache::namespace_members const& members)
    {
        writer w;
        w.type_namespace = ns;

        bool promote;
        {
            auto wrap_type = wrap_type_namespace(w, ns);
            w.write_each<write_delegate>(members.delegates);
            promote = write_structs(w, members.structs);
            w.write_each<write_class>(members.classes);
            w.write_each<write_interface_override>(members.classes);
        }

        write_close_file_guard(w);
        w.swap();
        write_preamble(w);
        write_open_file_guard(w, ns, '2');

        char const impl = promote ? '2' : '1';

        for (auto&& depends : w.depends)
        {
            w.write_depends(depends.first, impl);
        }

        w.write_depends(w.type_namespace, '1');
        w.save_header('2');
    }

    static void write_namespace_h(cache const& c, std::string_view const& ns, cache::namespace_members const& members)
    {
        writer w;
        w.type_namespace = ns;

        {
            auto wrap_impl = wrap_impl_namespace(w);
            w.write_each<write_consume_definitions>(members.interfaces);
            w.param_names = true;
            w.write_each<write_delegate_implementation>(members.delegates);
            w.write_each<write_produce>(members.interfaces, c);
            w.write_each<write_dispatch_overridable>(members.classes);
        }
        {
            auto wrap_type = wrap_type_namespace(w, ns);
            w.write_each<write_enum_operators>(members.enums);
            w.write_each<write_class_definitions>(members.classes);
            w.write_each<write_fast_class_base_definitions>(members.classes);
            w.write_each<write_delegate_definition>(members.delegates);
            w.write_each<write_interface_override_methods>(members.classes);
            w.write_each<write_class_override>(members.classes);
        }
        {
            auto wrap_std = wrap_std_namespace(w);

            {
                auto wrap_lean = wrap_lean_and_mean(w);
                w.write_each<write_std_hash>(members.interfaces);
                w.write_each<write_std_hash>(members.classes);
            }
            {
                auto wrap_format = wrap_ifdef(w, "__cpp_lib_format");
                w.write_each<write_std_formatter>(members.interfaces);
                w.write_each<write_std_formatter>(members.classes);   
            }
        }

        write_namespace_special(w, ns);

        write_close_file_guard(w);
        w.swap();
        write_preamble(w);
        write_open_file_guard(w, ns);
        write_version_assert(w);
        write_parent_depends(w, c, ns);

        for (auto&& depends : w.depends)
        {
            w.write_depends(depends.first, '2');
        }

        w.write_depends(w.type_namespace, '2');
        w.save_header();
    }

    static void write_module_g_cpp(std::vector<TypeDef> const& classes)
    {
        writer w;
        write_preamble(w);
        write_pch(w);
        write_module_g_cpp(w, classes);
        w.flush_to_file(settings.output_folder + "module.g.cpp");
    }

    static void write_component_g_h(TypeDef const& type)
    {
        writer w;
        w.add_depends(type);
        write_component_g_h(w, type);

        w.swap();
        write_preamble(w);
        write_include_guard(w);

        for (auto&& depends : w.depends)
        {
            w.write_depends(depends.first);
        }

        auto filename = settings.output_folder + get_generated_component_filename(type) + ".g.h";
        path folder = filename;
        folder.remove_filename();
        create_directories(folder);
        w.flush_to_file(filename);
    }

    static void write_component_g_cpp(TypeDef const& type)
    {
        if (!settings.component_opt)
        {
            return;
        }

        writer w;
        write_preamble(w);
        write_component_g_cpp(w, type);

        auto filename = settings.output_folder + get_generated_component_filename(type) + ".g.cpp";
        path folder = filename;
        folder.remove_filename();
        create_directories(folder);
        w.flush_to_file(filename);
    }

    static void write_component_h(TypeDef const& type)
    {
        if (settings.component_folder.empty())
        {
            return;
        }

        auto path = settings.component_folder + get_component_filename(type) + ".h";

        if (!settings.component_overwrite && exists(path))
        {
            return;
        }

        writer w;
        write_include_guard(w);
        write_component_h(w, type);
        w.flush_to_file(path);
    }

    static void write_component_cpp(TypeDef const& type)
    {
        if (settings.component_folder.empty())
        {
            return;
        }

        auto path = settings.component_folder + get_component_filename(type) + ".cpp";

        if (!settings.component_overwrite && exists(path))
        {
            return;
        }

        writer w;
        write_pch(w);
        write_component_cpp(w, type);
        w.flush_to_file(path);
    }
}
