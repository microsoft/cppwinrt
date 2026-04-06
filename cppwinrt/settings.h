#pragma once

namespace cppwinrt
{
    struct settings_type
    {
        std::set<std::string> input;
        std::set<std::string> reference;

        std::string output_folder;
        bool base{};
        bool license{};
        std::string license_template;
        bool brackets{};
        bool verbose{};
        bool component{};
        std::string component_folder;
        std::string component_name;
        std::string component_pch;
        bool component_prefix{};
        bool component_overwrite{};
        std::string component_lib;
        bool component_opt{};
        bool component_ignore_velocity{};

        std::set<std::string> include;
        std::set<std::string> exclude;

        winmd::reader::filter projection_filter;
        winmd::reader::filter component_filter;
        winmd::reader::filter ixx_filter; // Filters which namespaces go into winrt.ixx (from -module-filter)
        std::set<std::string> module_filter_include; // Raw -module-filter values

        bool fastabi{};
        std::map<winmd::reader::TypeDef, winmd::reader::TypeDef> fastabi_cache;
    };

    extern settings_type settings;
}
