#include "pch.h"
#include <ctime>
#include <mutex>
#include "strings.h"
#include "settings.h"
#include "type_writers.h"
#include "helpers.h"
#include "code_writers.h"
#include "component_writers.h"
#include "file_writers.h"
#include "type_writers.h"

namespace cppwinrt
{
    settings_type settings;

    struct usage_exception {};

    static constexpr option options[]
    {
        { "input", 0, option::no_max, "<spec>", "Windows metadata to include in projection" },
        { "reference", 0, option::no_max, "<spec>", "Windows metadata to reference from projection" },
        { "output", 0, 1, "<path>", "Location of generated projection and component templates" },
        { "component", 0, 1, "[<path>]", "Generate component templates, and optional implementation" },
        { "name", 0, 1, "<name>", "Specify explicit name for component files" },
        { "verbose", 0, 0, {}, "Show detailed progress information" },
        { "overwrite", 0, 0, {}, "Overwrite generated component files" },
        { "prefix", 0, 0, {}, "Use dotted namespace convention for component files (defaults to folders)" },
        { "pch", 0, 1, "<name>", "Specify name of precompiled header file (defaults to pch.h; use '.' to disable)" },
        { "include", 0, option::no_max, "<prefix>", "One or more prefixes to include in input" },
        { "exclude", 0, option::no_max, "<prefix>", "One or more prefixes to exclude from input" },
        { "base", 0, 0, {}, "Generate base.h unconditionally" },
        { "optimize", 0, 0, {}, "Generate component projection with unified construction support" },
        { "help", 0, option::no_max, {}, "Show detailed help with examples" },
        { "?", 0, option::no_max, {}, {} },
        { "library", 0, 1, "<prefix>", "Specify library prefix (defaults to winrt)" },
        { "filter" }, // One or more prefixes to include in input (same as -include)
        { "license", 0, 1, "[<path>]", "Generate license comment from template file" },
        { "brackets", 0, 0 }, // Use angle brackets for #includes (defaults to quotes)
        { "fastabi", 0, 0 }, // Enable support for the Fast ABI
        { "ignore_velocity", 0, 0 }, // Ignore feature staging metadata and always include implementations
        { "synchronous", 0, 0 }, // Instructs cppwinrt to run on a single thread to avoid file system issues in batch builds
        { "modules", 0, 0, {}, "Generate per-namespace C++20 module interface units (.ixx)" },
        { "module_include", 0, option::no_max, "<prefix>", "Filter which namespaces are included in module .ixx generation" },
        { "module_exclude", 0, option::no_max, "<prefix>", "Filter which namespaces are excluded from module .ixx generation" },
    };

    static void print_usage(writer& w)
    {
        static auto printColumns = [](writer& w, std::string_view const& col1, std::string_view const& col2)
        {
            w.write_printf("  %-20s%s\n", col1.data(), col2.data());
        };

        static auto printOption = [](writer& w, option const& opt)
        {
            if(opt.desc.empty())
            {
                return;
            }
            printColumns(w, w.write_temp("-% %", opt.name, opt.arg), opt.desc);
        };

        auto format = R"(
C++/WinRT v%
Copyright (c) Microsoft Corporation. All rights reserved.

  cppwinrt.exe [options...]

Options:

%  ^@<path>             Response file containing command line options

Where <spec> is one or more of:

  path                Path to winmd file or recursively scanned folder
)"
#if defined(_WIN32) || defined(_WIN64)
R"(  local               Local ^%WinDir^%\System32\WinMetadata folder
  sdk[+]              Current version of Windows SDK [with extensions]
  10.0.12345.0[+]     Specific version of Windows SDK [with extensions]
)"
#endif
        ;
        w.write(format, CPPWINRT_VERSION_STRING, bind_each(printOption, options));
    }

    static void process_args(reader const& args)
    {
        settings.verbose = args.exists("verbose");
        settings.fastabi = args.exists("fastabi");
        settings.modules = args.exists("modules");

        settings.input = args.files("input", database::is_database);
        settings.reference = args.files("reference", database::is_database);

        settings.component = args.exists("component");
        settings.base = args.exists("base");

        for (auto&& ns : args.values("module_include"))
        {
            settings.module_include.insert(ns);
        }
        for (auto&& ns : args.values("module_exclude"))
        {
            settings.module_exclude.insert(ns);
        }

        settings.license = args.exists("license");
        settings.brackets = args.exists("brackets");

        path output_folder = args.value("output", ".");
        create_directories(output_folder / "winrt/impl");
        settings.output_folder = canonical(output_folder).string();
        settings.output_folder += std::filesystem::path::preferred_separator;

        for (auto && include : args.values("include"))
        {
            settings.include.insert(include);
        }

        for (auto && include : args.values("filter"))
        {
            settings.include.insert(include);
        }

        for (auto && exclude : args.values("exclude"))
        {
            settings.exclude.insert(exclude);
        }

        if (settings.license)
        {
            std::string license_arg = args.value("license");
            if (license_arg.empty())
            {
                settings.license_template = R"(// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
)";
            }
            else
            {
                std::filesystem::path template_path{ license_arg };
                std::ifstream template_file(absolute(template_path));
                if (template_file.fail())
                {
                    throw_invalid("Cannot read license template file '", absolute(template_path).string() + "'");
                }
                std::string line_buf;
                while (getline(template_file, line_buf))
                {
                    if (line_buf.empty())
                    {
                        settings.license_template += "//\n";
                    }
                    else
                    {
                        settings.license_template += "// ";
                        settings.license_template += line_buf;
                        settings.license_template += "\n";
                    }
                }
            }
        }

        if (settings.component)
        {
            settings.component_overwrite = args.exists("overwrite");
            settings.component_name = args.value("name");

            if (settings.component_name.empty())
            {
                // For compatibility with C++/WinRT 1.0, the component_name defaults to the *first*
                // input, hence the use of values() here that will return the args in input order.

                auto& values = args.values("input");

                if (!values.empty())
                {
                    settings.component_name = path(values[0]).filename().replace_extension().string();
                }
            }

            settings.component_pch = args.value("pch", "pch.h");
            settings.component_prefix = args.exists("prefix");
            settings.component_lib = args.value("library", "winrt");
            settings.component_opt = args.exists("optimize");
            settings.component_ignore_velocity = args.exists("ignore_velocity");

            if (settings.component_pch == ".")
            {
                settings.component_pch.clear();
            }

            auto component = args.value("component");

            if (!component.empty())
            {
                create_directories(component);
                settings.component_folder = canonical(component).string();
                settings.component_folder += std::filesystem::path::preferred_separator;
            }
        }
    }

    static auto get_files_to_cache()
    {
        std::vector<std::string> files;
        files.insert(files.end(), settings.input.begin(), settings.input.end());
        files.insert(files.end(), settings.reference.begin(), settings.reference.end());
        return files;
    }

    static void build_filters(cache const& c)
    {
        // Build module_filter from -module_include / -module_exclude args.
        // This controls which namespaces get .ixx files without affecting header generation.
        if (!settings.module_include.empty() || !settings.module_exclude.empty())
        {
            settings.module_filter = { settings.module_include, settings.module_exclude };
        }

        if (settings.reference.empty())
        {
            return;
        }

        std::set<std::string> include;

        for (auto file : settings.input)
        {
            auto db = std::find_if(c.databases().begin(), c.databases().end(), [&](auto&& db)
            {
                return db.path() == file;
            });

            for (auto&& type : db->TypeDef)
            {
                if (!type.Flags().WindowsRuntime())
                {
                    continue;
                }

                std::string full_name{ type.TypeNamespace() };
                full_name += '.';
                full_name += type.TypeName();
                include.insert(full_name);
            }
        }

        settings.projection_filter = { include, {} };
        
        settings.component_filter = { settings.include.empty() ? include : settings.include, settings.exclude };
    }

    static void build_fastabi_cache(cache const& c)
    {
        if (!settings.fastabi)
        {
            return;
        }

        for (auto&& [ns, members] : c.namespaces())
        {
            for (auto&& type : members.classes)
            {
                if (!has_fastabi(type))
                {
                    continue;
                }

                auto default_interface = get_default_interface(type);

                if (default_interface.type() == TypeDefOrRef::TypeDef)
                {
                    settings.fastabi_cache.try_emplace(default_interface.TypeDef(), type);
                }
                else
                {
                    settings.fastabi_cache.try_emplace(find_required(default_interface.TypeRef()), type);
                }
            }
        }
    }

    static void remove_foundation_types(cache& c)
    {
        c.remove_type("Windows.Foundation", "DateTime");
        c.remove_type("Windows.Foundation", "EventRegistrationToken");
        c.remove_type("Windows.Foundation", "HResult");
        c.remove_type("Windows.Foundation", "Point");
        c.remove_type("Windows.Foundation", "Rect");
        c.remove_type("Windows.Foundation", "Size");
        c.remove_type("Windows.Foundation", "TimeSpan");

        c.remove_type("Windows.Foundation.Numerics", "Matrix3x2");
        c.remove_type("Windows.Foundation.Numerics", "Matrix4x4");
        c.remove_type("Windows.Foundation.Numerics", "Plane");
        c.remove_type("Windows.Foundation.Numerics", "Quaternion");
        c.remove_type("Windows.Foundation.Numerics", "Vector2");
        c.remove_type("Windows.Foundation.Numerics", "Vector3");
        c.remove_type("Windows.Foundation.Numerics", "Vector4");
    }

    // Tarjan's algorithm for finding strongly connected components in the
    // namespace dependency graph. Namespaces in an SCC have cyclic deps and
    // must be combined into a single module.
    static std::vector<std::vector<std::string>> find_sccs(
        std::map<std::string, std::set<std::string>, std::less<>> const& graph)
    {
        struct context
        {
            std::map<std::string, int> index_of;
            std::map<std::string, int> lowlink;
            std::map<std::string, bool> on_stack;
            std::vector<std::string> stack;
            int next_index = 0;
            std::vector<std::vector<std::string>> result;

            void strongconnect(std::string const& v,
                std::map<std::string, std::set<std::string>, std::less<>> const& g)
            {
                index_of[v] = next_index;
                lowlink[v] = next_index;
                next_index++;
                stack.push_back(v);
                on_stack[v] = true;

                auto it = g.find(v);
                if (it != g.end())
                {
                    for (auto& w : it->second)
                    {
                        if (g.find(w) == g.end())
                        {
                            continue; // dep not in graph (not a projected namespace)
                        }

                        if (index_of.find(w) == index_of.end())
                        {
                            strongconnect(w, g);
                            lowlink[v] = (std::min)(lowlink[v], lowlink[w]);
                        }
                        else if (on_stack[w])
                        {
                            lowlink[v] = (std::min)(lowlink[v], index_of[w]);
                        }
                    }
                }

                if (lowlink[v] == index_of[v])
                {
                    std::vector<std::string> scc;
                    std::string w;
                    do
                    {
                        w = stack.back();
                        stack.pop_back();
                        on_stack[w] = false;
                        scc.push_back(std::move(w));
                    } while (scc.back() != v);
                    result.push_back(std::move(scc));
                }
            }
        };

        context ctx;
        for (auto& [node, _] : graph)
        {
            if (ctx.index_of.find(node) == ctx.index_of.end())
            {
                ctx.strongconnect(node, graph);
            }
        }
        return std::move(ctx.result);
    }

    static int run(int const argc, char** argv)
    {
        int result{};
        writer w;

        try
        {
            auto start = get_start_time();

            reader args{ argc, argv, options };

            if (!args || args.exists("help") || args.exists("?"))
            {
                throw usage_exception{};
            }

            process_args(args);
            cache c{ get_files_to_cache(), [](TypeDef const& type) { return type.Flags().WindowsRuntime(); } };
            remove_foundation_types(c);
            build_filters(c);
            settings.base = settings.base || (!settings.component && settings.projection_filter.empty());
            build_fastabi_cache(c);

            if (settings.verbose)
            {
                {
                    char* path = argv[0];
#if defined(_WIN32) || defined(_WIN64)
                    char path_buf[32768];
                    DWORD path_size = GetModuleFileNameA(nullptr, path_buf, sizeof(path_buf));
                    if (path_size)
                    {
                        path_buf[sizeof(path_buf) - 1] = 0;
                        path = path_buf;
                    }
#endif
                    w.write(" tool:  %\n", path);
                }
                w.write(" ver:   %\n", CPPWINRT_VERSION_STRING);

                for (auto&& file : settings.input)
                {
                    w.write(" in:    %\n", file);
                }

                for (auto&& file : settings.reference)
                {
                    w.write(" ref:   %\n", file);
                }

                w.write(" out:   %\n", settings.output_folder);

                if (!settings.component_folder.empty())
                {
                    w.write(" cout:  %\n", settings.component_folder);
                }
            }

            w.flush_to_console();
            task_group group;
            group.synchronous(args.exists("synchronous"));

            // Dependency collection for per-namespace modules (v2)
            std::map<std::string, std::set<std::string>, std::less<>> ns_deps_map;
            std::set<std::string> projected_namespaces;
            std::mutex ns_deps_mutex;

            // First pass: determine which namespaces will be in the module.
            // This includes namespaces from this invocation AND those from other invocations
            // (e.g., platform namespaces when building a component). The module_filter
            // tells us which namespaces have modules across all invocations.
            if (settings.modules)
            {
                for (auto&& [ns, members] : c.namespaces())
                {
                    if (!has_projected_types(members))
                    {
                        continue;
                    }
                    if (settings.module_filter.empty() || settings.module_filter.includes(members))
                    {
                        projected_namespaces.insert(std::string(ns));
                    }
                }
            }

            for (auto&&[ns, members] : c.namespaces())
            {
                if (!has_projected_types(members) || !settings.projection_filter.includes(members))
                {
                    continue;
                }

                group.add([&, &ns = ns, &members = members]
                {
                    bool in_module = projected_namespaces.count(std::string(ns)) > 0;
                    std::set<std::string> ns_deps;
                    auto* deps_ptr = (settings.modules && in_module) ? &ns_deps : nullptr;

                    write_namespace_0_h(ns, members, deps_ptr);
                    write_namespace_1_h(ns, members, deps_ptr);
                    write_namespace_2_h(ns, members, deps_ptr);
                    write_namespace_h(c, ns, members, deps_ptr);

                    if (settings.modules && in_module)
                    {
                        std::lock_guard lock(ns_deps_mutex);
                        ns_deps_map[std::string(ns)] = std::move(ns_deps);
                    }
                });
            }

            if (settings.base)
            {
                write_base_h();
            }

            if (settings.component)
            {
                std::vector<TypeDef> classes;

                for (auto&&[ns, members] : c.namespaces())
                {
                    for (auto&& type : members.classes)
                    {
                        if (settings.component_filter.includes(type))
                        {
                            classes.push_back(type);
                        }
                    }
                }

                if (!classes.empty())
                {
                    write_fast_forward_h(classes);
                    write_module_g_cpp(classes);

                    for (auto&& type : classes)
                    {
                        write_component_g_h(type);
                        write_component_g_cpp(type);
                        write_component_h(type);
                        write_component_cpp(type);
                    }
                }
            }

            group.get();

            if (settings.modules)
            {
                fprintf(stderr, "module namespaces: %zu\n", projected_namespaces.size());
                for (auto& ns : projected_namespaces)
                {
                    auto it = ns_deps_map.find(ns);
                    size_t ndeps = (it != ns_deps_map.end()) ? it->second.size() : 0;
                    fprintf(stderr, "  ns: %s (%zu deps)\n", ns.c_str(), ndeps);
                    if (it != ns_deps_map.end())
                    {
                        for (auto& dep : it->second)
                        {
                            fprintf(stderr, "    dep: %s\n", dep.c_str());
                        }
                    }
                }
            }

            // Generate per-namespace module interface files (v2)
            if (settings.modules && (settings.base || settings.component))
            {
                if (settings.base)
                {
                    write_module_h();
                    write_numerics_ixx();
                    write_base_ixx();
                }

                // Tarjan's SCC algorithm for cyclic namespace dependencies
                auto sccs = find_sccs(ns_deps_map);

                for (auto& scc : sccs)
                {
                    if (scc.size() == 1)
                    {
                        // Standalone namespace module
                        auto& ns = scc[0];
                        write_namespace_ixx(ns, ns_deps_map[ns], projected_namespaces);
                    }
                    else
                    {
                        // SCC: choose owner (alphabetically first), others re-export
                        std::sort(scc.begin(), scc.end());
                        auto& owner = scc[0];

                        // External deps = union of all SCC members' deps, minus SCC members themselves
                        std::set<std::string> external_deps;
                        std::set<std::string> scc_set(scc.begin(), scc.end());
                        for (auto& ns : scc)
                        {
                            for (auto& dep : ns_deps_map[ns])
                            {
                                if (!scc_set.count(dep))
                                {
                                    external_deps.insert(dep);
                                }
                            }
                        }

                        write_namespace_scc_owner_ixx(c, owner, scc, external_deps, projected_namespaces);

                        for (size_t i = 1; i < scc.size(); ++i)
                        {
                            write_namespace_reexport_ixx(scc[i], owner);
                        }
                    }
                }
            }

            if (settings.verbose)
            {
                w.write(" time:  %ms\n", get_elapsed_time(start));
            }
        }
        catch (usage_exception const&)
        {
            print_usage(w);
        }
        catch (std::exception const& e)
        {
            w.write("cppwinrt : error %\n", e.what());
            result = 1;
        }

        w.flush_to_console(result == 0);
        return result;
    }
}

int main(int const argc, char** argv)
{
    return cppwinrt::run(argc, argv);
}
