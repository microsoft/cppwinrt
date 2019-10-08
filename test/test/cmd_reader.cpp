#include "pch.h"
#include "cmd_reader.h"
#include <fstream>

using namespace xlang::cmd;

class response_file
{
    const char* resp_file_name = "respfile.txt";
    void write_response_file(const char* input)
    {
        std::ofstream resp_file(resp_file_name);
        if (!resp_file.is_open())
            FAIL("Response file could not be created");
        resp_file << input;
        resp_file.close();
    }

    void remove_response_file()
    {
        std::remove(resp_file_name);
    }

public:
    response_file(const char* input)
    {
        write_response_file(input);
    }

    template<size_t numOptions>
    reader create_reader(size_t const argc, const char* argv[], const option(&options)[numOptions])
    {
        return reader{ argc, argv, options };
    }

    ~response_file()
    {
        remove_response_file();
    }
};

TEST_CASE("cmd_reader")
{
    static constexpr option options[]
    {
        { "input", 1 },
        { "reference", 0 },
        { "output", 0, 1 },
        { "component", 0, 1 },
        { "filter", 0 },
        { "name", 0, 1 },
        { "verbose", 0, 0 },
    };

    // input and output
    {
        const char* argv[] = { "progname", "-in", "example_file.in", "-out", "example_file.out" };
        const size_t argc = 5;
        reader args{ argc, argv, options };

        REQUIRE(args.exists("input"));
        REQUIRE(args.value("input") == "example_file.in");
        REQUIRE_FALSE(args.exists("reference"));
        REQUIRE(args.exists("output"));
        REQUIRE(args.value("output") == "example_file.out");
        REQUIRE_FALSE(args.exists("filter"));
        REQUIRE_FALSE(args.exists("name"));
        REQUIRE_FALSE(args.exists("verbose"));
    }

    // response file #1: filename no quotes
    {
        const char* argv[] = { "progname", "@respfile.txt" };
        const size_t argc = _countof(argv);

        response_file rf{ R"(-in example_file.in -out example_file.out)" };
        reader args = rf.create_reader(argc, argv, options);

        REQUIRE(args.exists("input"));
        REQUIRE(args.value("input") == "example_file.in");
        REQUIRE_FALSE(args.exists("reference"));
        REQUIRE(args.exists("output"));
        REQUIRE(args.value("output") == "example_file.out");
        REQUIRE_FALSE(args.exists("filter"));
        REQUIRE_FALSE(args.exists("name"));
        REQUIRE_FALSE(args.exists("verbose"));
    }

    // response file #2: filename with quotes
    {
        const char* argv[] = { "progname", "@respfile.txt" };
        const size_t argc = _countof(argv);

        response_file rf{ R"(-in "example file.in" -out "example file.out")" };
        reader args = rf.create_reader(argc, argv, options);

        REQUIRE(args.exists("input"));
        REQUIRE(args.value("input") == "example file.in");
        REQUIRE_FALSE(args.exists("reference"));
        REQUIRE(args.exists("output"));
        REQUIRE(args.value("output") == "example file.out");
        REQUIRE_FALSE(args.exists("filter"));
        REQUIRE_FALSE(args.exists("name"));
        REQUIRE_FALSE(args.exists("verbose"));
    }

    // response file #3: filename with quote within name
    {
        const char* argv[] = { "progname", "@respfile.txt" };
        const size_t argc = _countof(argv);

        response_file rf{ R"(-in example\"file.in -out example\"file.out)" };
        reader args = rf.create_reader(argc, argv, options);

        REQUIRE(args.exists("input"));
        REQUIRE(args.value("input") == R"(example"file.in)");
        REQUIRE_FALSE(args.exists("reference"));
        REQUIRE(args.exists("output"));
        REQUIRE(args.value("output") == R"(example"file.out)");
        REQUIRE_FALSE(args.exists("filter"));
        REQUIRE_FALSE(args.exists("name"));
        REQUIRE_FALSE(args.exists("verbose"));
    }

    // response file #4: really really long path
    {
        const char* argv[] = { "progname", "@respfile.txt" };
        const size_t argc = _countof(argv);
        std::string file_name_in(R"(C:\)");
        std::string file_name_out(R"(C:\)");
        std::string input_str("-in ");

        for (int i = 0; i < 500; i++) {
            file_name_in.append(R"(dirname\)");
            file_name_out.append(R"(dirname\)");
        }

        file_name_in.append("example_file.in");
        file_name_out.append("example_file.out");
        input_str.append(file_name_in).append(" -out ").append(file_name_out);

        response_file rf{ input_str.data() };
        reader args = rf.create_reader(argc, argv, options);

        REQUIRE(args.exists("input"));
        REQUIRE(args.value("input") == file_name_in);
        REQUIRE_FALSE(args.exists("reference"));
        REQUIRE(args.exists("output"));
        REQUIRE(args.value("output") == file_name_out);
        REQUIRE_FALSE(args.exists("filter"));
        REQUIRE_FALSE(args.exists("name"));
        REQUIRE_FALSE(args.exists("verbose"));
    }
}
