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
            auto wrap_import = wrap_ifndef(w, "WINRT_IMPORT_MODULE");

            {
                auto wrap_includes = wrap_module_aware_includes_guard(w, true);
                w.write(strings::base_includes);
                w.write(strings::base_detect_numerics);
                w.write(strings::base_include_numerics);
            }
            w.write_root_include("base_macros");
            w.write(strings::base_source_location);
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
            auto wrap_impl = wrap_impl_namespace_without_export(w);
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
        }

        {
            auto wrap_impl = wrap_impl_namespace(w);
            w.write_each<write_struct_abi_type>(members.structs);
        }

        {
            auto wrap_impl = wrap_impl_namespace_without_export(w);
            w.write_each<write_struct_abi_specialization>(members.structs);
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
        // The #ifndef WINRT_IMPORT_MODULE / #endif pair spans across w.swap().
        // The body is written first (above), then swap() prepends the header prefix (below).
        // In the final output, #ifndef opens before the includes and #endif closes after
        // the file guard, mirroring the write_open_file_guard / write_close_file_guard pair.
        w.write("#endif // WINRT_IMPORT_MODULE\n");
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

        {
            auto wrap = wrap_ifdef(w, "WINRT_IMPORT_MODULE");
            w.write_root_include("base_macros");
            for (auto&& depends : w.depends)
            {
                w.write("import winrt.%;\n", depends.first);
            }
            w.write("#else // WINRT_IMPORT_MODULE\n");

            for (auto&& depends : w.depends)
            {
                w.write_depends(depends.first);
            }
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
        w.write_root_include("base_macros");
    }

    // Emits $(out)/winrt/base_macros.h
    // This header provides the core macros shared between header and module builds.
    // In header builds, base.h includes base_macros.h inline (via the prebuild-embedded string).
    // In module builds, each .ixx file includes this in its global module fragment.
    static void write_macros_h()
    {
        writer w;
        write_preamble(w);
        w.write(strings::base_macros, CPPWINRT_VERSION_STRING);
        w.flush_to_file(settings.output_folder + "winrt/base_macros.h");
    }

    static void write_base_ixx()
    {
        writer w;
        write_module_preamble(w);
        w.write(strings::base_module_base_ixx);
        w.write(strings::base_detect_numerics);
        w.write("\n");
        w.write_root_include("base");
        w.flush_to_file(settings.output_folder + "winrt/winrt_base.ixx");
    }

    static void write_numerics_ixx()
    {
        writer w;
        write_module_preamble(w);
        // GMF: detect numerics and pre-include directxmath so it's not pulled
        // into the module purview by windowsnumerics.impl.h
        w.write(strings::base_detect_numerics);
        {
            auto wrap = wrap_ifdef(w, "WINRT_IMPL_NUMERICS");
            w.write("#include <directxmath.h>\n");
        }
        w.write(strings::base_module_numerics_ixx);
        // Module declaration
        w.write("\nexport module winrt_numerics;\n");
        // Include windowsnumerics.impl.h in the module purview (exports the types).
        // directxmath.h is already included in the GMF above, so the #include inside
        // base_include_numerics is a no-op (header guard).
        {
            auto wrap = wrap_ifdef(w, "_MSC_VER");
            w.write("#pragma warning(push)\n");
            w.write("#pragma warning(disable : 5244)\n");
        }
        w.write(strings::base_include_numerics);
        {
            auto wrap = wrap_ifdef(w, "_MSC_VER");
            w.write("#pragma warning(pop)\n");
        }
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
        std::set<std::string> const& deps)
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
                w.write("//   - winrt.%\n", dep);
            }
        }
        w.write("\n");

        // Import std and base
        w.write("import std;\n");
        w.write("export import winrt_base;\n");

        // Import dependency namespace modules
        for (auto& dep : deps)
        {
            w.write("import winrt.%;\n", dep);
        }

        // Version mismatch check: ensure this namespace module was generated by the
        // same version of cppwinrt.exe as the winrt_base module it imports.
        // winrt::cppwinrt_version is exported from winrt_base; CPPWINRT_VERSION is
        // the macro from this module's own base_macros.h in the global module fragment.
        w.write("\nstatic_assert(winrt::check_version(winrt::cppwinrt_version, CPPWINRT_VERSION), \"Mismatched C++/WinRT headers.\");\n\n");

        // Include namespace headers in module purview
        w.write_depends(ns, '0');
        w.write_depends(ns, '1');
        w.write_depends(ns, '2');
        w.write_root_include(ns);

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
        std::set<std::string> const& external_deps)
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
            w.write("import winrt.%;\n", dep);
        }

        // Version mismatch check: ensure this namespace module was generated by the
        // same version of cppwinrt.exe as the winrt_base module it imports.
        // winrt::cppwinrt_version is exported from winrt_base; CPPWINRT_VERSION is
        // the macro from this module's own base_macros.h in the global module fragment.
        w.write("\nstatic_assert(winrt::check_version(winrt::cppwinrt_version, CPPWINRT_VERSION), \"Mismatched C++/WinRT headers.\");\n");

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
            w.write_depends(ns, '0');
        }
        for (auto& ns : scc_members)
        {
            w.write_depends(ns, '1');
        }
        for (auto& ns : scc_members)
        {
            w.write_depends(ns, '2');
        }
        for (auto& ns : scc_members)
        {
            w.write_root_include(ns);
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
