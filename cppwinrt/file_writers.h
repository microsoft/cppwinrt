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
            w.write("#ifndef WINRT_IMPORT_MODULE\n");

            {
                auto wrap_includes = wrap_module_aware_includes_guard(w, true);
                w.write(strings::base_includes);
            }
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

            w.write("#endif // WINRT_IMPORT_MODULE\n");
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

    static void collect_writer_deps(writer const& w, std::set<std::string>& out)
    {
        for (auto&& [dep_ns, _] : w.depends)
        {
            out.insert(std::string(dep_ns));
        }
    }

    static void write_namespace_0_h(std::string_view const& ns, cache::namespace_members const& members, std::set<std::string>* out_deps = nullptr)
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
            w.write_each<write_forward>(members.contracts);
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
            // Contract names are used by IsApiContractPresent.
            w.write_each<write_name>(members.classes);
            w.write_each<write_name>(members.enums);
            w.write_each<write_name>(members.structs);
            w.write_each<write_name>(members.interfaces);
            w.write_each<write_name>(members.delegates);
            w.write_each<write_name>(members.contracts);

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

        if (out_deps) collect_writer_deps(w, *out_deps);
        w.save_header('0');
    }

    static void write_namespace_1_h(std::string_view const& ns, cache::namespace_members const& members, std::set<std::string>* out_deps = nullptr)
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

        {
            auto wrap_includes = wrap_module_aware_includes_guard(w, true);
            for (auto&& depends : w.depends)
            {
                w.write_depends(depends.first, '0');
            }

            w.write_depends(w.type_namespace, '0');
        }
        if (out_deps) collect_writer_deps(w, *out_deps);
        w.save_header('1');
    }

    static void write_namespace_2_h(std::string_view const& ns, cache::namespace_members const& members, std::set<std::string>* out_deps = nullptr)
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

        {
            auto wrap_includes = wrap_module_aware_includes_guard(w, true);
            for (auto&& depends : w.depends)
            {
                w.write_depends(depends.first, impl);
            }

            w.write_depends(w.type_namespace, '1');
        }
        if (out_deps) collect_writer_deps(w, *out_deps);
        w.save_header('2');
    }

    static void write_namespace_h(cache const& c, std::string_view const& ns, cache::namespace_members const& members, std::set<std::string>* out_deps = nullptr)
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
        w.write("#endif\n"); // WINRT_IMPORT_MODULE
        w.swap();
        write_preamble(w);
        write_open_file_guard(w, ns);
        w.write("#ifndef WINRT_IMPORT_MODULE\n\n");
        {
            auto wrap_includes = wrap_module_aware_includes_guard(w, true);
            write_version_assert(w);
            write_parent_depends(w, c, ns);

            for (auto&& depends : w.depends)
            {
                w.write_depends(depends.first, '2');
            }

            w.write_depends(w.type_namespace, '2');
        }
        if (out_deps) collect_writer_deps(w, *out_deps);
        w.save_header();
    }

    static void write_module_g_cpp(std::vector<TypeDef> const& classes)
    {
        writer w;
        write_preamble(w);
        write_pch(w);

        if (settings.modules)
        {
            // In module builds, import std and winrt_base instead of #include "winrt/base.h".
            // std is needed for std::wstring_view, std::equal, std::int32_t used in
            // the activation factory lookup code.
            w.write("\nimport std;\n");
            w.write("import winrt_base;\n");

            // Collect all unique namespaces from the component classes
            std::set<std::string> namespaces;
            for (auto&& type : classes)
            {
                namespaces.insert(std::string(type.TypeNamespace()));
            }
            for (auto&& ns : namespaces)
            {
                w.write("import winrt.%;\n", ns);
            }
            w.write("\n");
        }

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

        w.write("#ifdef WINRT_IMPORT_MODULE\n");
        w.write("#include \"winrt/macros.h\"\n");
        for (auto&& depends : w.depends)
        {
            w.write("import winrt.%;\n", depends.first);
        }
        w.write("#else\n");

        for (auto&& depends : w.depends)
        {
            w.write_depends(depends.first);
        }

        w.write("#endif // WINRT_IMPORT_MODULE\n");

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

        if (settings.modules)
        {
            // The .g.h handles its own imports, but the implementation .h
            // needs the types available in scope, so we import them here.
            writer dep_scanner;
            dep_scanner.add_depends(type);
            write_component_g_h(dep_scanner, type);

            w.write("\n#define WINRT_IMPORT_MODULE\n");
            for (auto&& depends : dep_scanner.depends)
            {
                w.write("import winrt.%;\n", depends.first);
            }
            w.write("\n");
        }

        write_component_cpp(w, type);
        w.flush_to_file(path);
    }

    // --- Per-namespace C++20 module interface unit (.ixx) writers ---

    // Emits the common global module fragment used by all generated .ixx files.
    // Defines WINRT_IMPL_BUILD_MODULE so generated headers switch WINRT_EXPORT
    // to 'export extern "C++"' and suppress textual #includes of dependencies
    // (dependencies arrive via module imports instead).
    // Includes minimal headers needed for macros, intrinsics, and debug assertions.
    static void write_module_preamble(writer& w)
    {
        write_preamble(w);
        w.write(strings::base_module_ixx_preamble);
    }

    // Emits $(out)/winrt/macros.h
    // This header provides macros that are needed inside module interface units
    // but cannot cross module boundaries via 'import'. Each .ixx file includes
    // this in its global module fragment. It provides:
    //   - WINRT_ASSERT/WINRT_VERIFY macros
    //   - WINRT_IMPL_COROUTINES detection
    //   - WINRT_IMPL_SHIM macro
    //   - WINRT_EXPORT (switches between empty and 'export extern "C++"')
    //   - MSVC warning suppressions for module-related diagnostics
    static void write_module_h()
    {
        writer w;
        write_preamble(w);
        w.write(strings::base_module);
        w.flush_to_file(settings.output_folder + "winrt/macros.h");
    }

    static void write_base_ixx()
    {
        writer w;
        write_module_preamble(w);
        w.write(strings::base_module_base_ixx);
        w.flush_to_file(settings.output_folder + "winrt/winrt_base.ixx");
    }

    static void write_numerics_ixx()
    {
        writer w;
        write_module_preamble(w);
        w.write(strings::base_module_numerics_ixx);
        w.flush_to_file(settings.output_folder + "winrt/winrt_numerics.ixx");
    }

    // Emits a per-namespace module interface unit for namespaces that are NOT
    // part of a dependency cycle (standalone module).
    // Output: $(out)/winrt/winrt.<ns>.ixx  (export module winrt.<ns>;)
    //
    // The generated .ixx:
    //   1. Starts with the global module fragment (WINRT_IMPL_BUILD_MODULE, minimal includes)
    //   2. Declares 'export module winrt.<ns>;'
    //   3. Imports std and re-exports winrt_base
    //   4. Imports each dependent namespace module (computed from type references in headers)
    //   5. Includes the impl headers (*.0.h, *.1.h, *.2.h) and public header (<ns>.h)
    //      in the module purview, where WINRT_EXPORT causes declarations to be exported
    static void write_namespace_ixx(
        std::string_view const& ns,
        std::set<std::string> const& deps,
        std::set<std::string> const& module_namespaces)
    {
        writer w;
        write_module_preamble(w);

        // Module declaration
        w.write("export module winrt.%;\n\n", ns);

        // Document dependencies
        w.write("// Module dependencies:\n");
        w.write("//   - std\n");
        w.write("//   - winrt_base (re-exported)\n");
        if (deps.empty())
        {
            w.write("//   - (no additional namespace imports)\n");
        }
        else
        {
            for (auto& dep : deps)
            {
                if (module_namespaces.count(dep) || module_namespaces.empty())
                {
                    w.write("//   - winrt.%\n", dep);
                }
            }
        }
        w.write("\n");

        // Import std and base
        w.write("import std;\n");
        w.write("export import winrt_base;\n");

        // Import dependency namespace modules
        for (auto& dep : deps)
        {
            if (module_namespaces.count(dep) || module_namespaces.empty())
            {
                w.write("import winrt.%;\n", dep);
            }
        }

        w.write("\n");

        // Include namespace headers in module purview
        w.write("#include \"winrt/impl/%.0.h\"\n", ns);
        w.write("#include \"winrt/impl/%.1.h\"\n", ns);
        w.write("#include \"winrt/impl/%.2.h\"\n", ns);
        w.write("#include \"winrt/%.h\"\n", ns);

        w.flush_to_file(settings.output_folder + "winrt/winrt." + std::string(ns) + ".ixx");
    }

    // Emits the SCC (Strongly Connected Component) owner module interface unit.
    // When multiple namespaces form a dependency cycle, they cannot each have their
    // own independent module (circular imports are illegal in C++20 modules).
    // Instead, one namespace is chosen as the "owner" (alphabetically first in the SCC),
    // and ALL cyclic namespaces' declarations are consolidated into this single module.
    // The other namespaces in the SCC get thin re-export stubs (see write_namespace_reexport_ixx).
    //
    // Output: $(out)/winrt/winrt.<owner>.ixx  (export module winrt.<owner>;)
    //
    // The owner module:
    //   1. Imports external dependencies (deps outside the SCC)
    //   2. Forward-declares all projected types for ALL SCC namespaces before any
    //      impl headers — this breaks the type reference cycles
    //   3. Includes impl headers in stable phase order: all *.0.h, then all *.1.h,
    //      then all *.2.h, then all public headers — preserving the original header
    //      layering while keeping SCC compilation deterministic
    static void write_namespace_scc_owner_ixx(
        cache const& c,
        std::string_view const& owner,
        std::vector<std::string> const& scc_members,
        std::set<std::string> const& external_deps,
        std::set<std::string> const& module_namespaces)
    {
        writer w;
        write_module_preamble(w);

        // Module declaration (owner namespace)
        w.write("// This module is an SCC owner (cycle breaker). The following namespaces\n");
        w.write("// form a dependency cycle and are consolidated into this single module:\n");
        for (auto& ns : scc_members)
        {
            w.write("//   - %\n", ns);
        }
        w.write("// Other SCC namespaces are emitted as re-export stubs.\n\n");
        w.write("export module winrt.%;\n\n", owner);

        // Import std and base
        w.write("import std;\n");
        w.write("export import winrt_base;\n");

        // Import external dependency modules (outside the SCC)
        for (auto& dep : external_deps)
        {
            if (module_namespaces.count(dep) || module_namespaces.empty())
            {
                w.write("import winrt.%;\n", dep);
            }
        }

        w.write("\n");

        // Forward declarations for all projected types in this SCC.
        // This is required because SCC members have cyclic type references,
        // and generated headers suppress dependent #includes when WINRT_IMPL_BUILD_MODULE
        // is defined. Forward declarations provide the names needed before definitions.
        for (auto& ns : scc_members)
        {
            auto found = c.namespaces().find(ns);
            if (found == c.namespaces().end())
            {
                continue;
            }
            auto& members = found->second;

            auto wrap_type = wrap_type_namespace(w, ns);
            w.write_each<write_forward>(members.enums);
            w.write_each<write_forward>(members.interfaces);
            w.write_each<write_forward>(members.classes);
            w.write_each<write_forward>(members.structs);
            w.write_each<write_forward>(members.delegates);
            w.write_each<write_forward>(members.contracts);
        }

        // Include all SCC members' headers in stable phase order.
        // All *.0.h (forward decls + ABIs), then all *.1.h (interfaces),
        // then all *.2.h (delegates/structs/classes), then all public headers.
        // This preserves the original header layering while keeping compilation deterministic.
        for (auto& ns : scc_members)
        {
            w.write("#include \"winrt/impl/%.0.h\"\n", ns);
        }
        for (auto& ns : scc_members)
        {
            w.write("#include \"winrt/impl/%.1.h\"\n", ns);
        }
        for (auto& ns : scc_members)
        {
            w.write("#include \"winrt/impl/%.2.h\"\n", ns);
        }
        for (auto& ns : scc_members)
        {
            w.write("#include \"winrt/%.h\"\n", ns);
        }

        w.flush_to_file(settings.output_folder + "winrt/winrt." + std::string(owner) + ".ixx");
    }

    // Emits a thin re-export stub module for SCC non-owner namespaces.
    // This allows 'import winrt.<ns>;' to work even though the actual declarations
    // live in the SCC owner module. The stub simply re-exports the owner.
    // Output: $(out)/winrt/winrt.<ns>.ixx  (export module winrt.<ns>; export import winrt.<owner>;)
    static void write_namespace_reexport_ixx(
        std::string_view const& ns,
        std::string_view const& owner)
    {
        writer w;
        write_preamble(w);
        w.write("\n// NOTE: This module does not define declarations of its own.\n");
        w.write("// It re-exports all declarations from the 'winrt.%' module. This is used to break cycles in the\n", owner);
        w.write("// WinRT namespace module dependency graph (SCC owner consolidation).\n\n");
        w.write("export module winrt.%;\n", ns);
        w.write("export import winrt.%;\n", owner);
        w.flush_to_file(settings.output_folder + "winrt/winrt." + std::string(ns) + ".ixx");
    }
}
