#pragma once

namespace cppwinrt
{
    struct module_filter_type
    {
        module_filter_type() = default;

        module_filter_type(std::set<std::string> const& include, std::set<std::string> const& exclude) :
            m_has_include(!include.empty()),
            m_has_exclude(!exclude.empty()),
            m_include_filter{ include, exclude },
            m_exclude_filter{ exclude, {} }
        {
        }

        bool empty() const noexcept
        {
            return !m_has_include && !m_has_exclude;
        }

        template <typename T>
        bool includes(T const& value) const
        {
            if (m_has_include)
            {
                return m_include_filter.includes(value);
            }

            if (m_has_exclude)
            {
                return !m_exclude_filter.includes(value);
            }

            return true;
        }

    private:
        bool m_has_include{};
        bool m_has_exclude{};
        winmd::reader::filter m_include_filter;
        winmd::reader::filter m_exclude_filter;
    };

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

        bool fastabi{};
        std::map<winmd::reader::TypeDef, winmd::reader::TypeDef> fastabi_cache;

        bool modules{}; // Generate per-namespace C++20 module interface units (.ixx)

        std::set<std::string> module_include;
        std::set<std::string> module_exclude;
        module_filter_type module_filter;
    };

    extern settings_type settings;
}
