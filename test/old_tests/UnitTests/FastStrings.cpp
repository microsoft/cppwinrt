#include "pch.h"
#include "catch.hpp"

using namespace std::string_view_literals;
using namespace winrt;
using namespace Windows::Foundation::Collections;

TEST_CASE("FastStrings")
{
    {
        IVector<hstring> c = single_threaded_vector<hstring>();
        uint32_t index = 123;
        c.IndexOf(L"hello"sv, index);
        c.Append(L"hello"sv);
        c.SetAt(0, L"hello"sv);
        c.InsertAt(1, L"world"sv);

        IVectorView<hstring> v = c.GetView();
        v.IndexOf(L"hello"sv, index);
    }

    {
        IMap<hstring, int> c = single_threaded_map<hstring, int>();
        c.Insert(L"hello"sv, 1);
        c.Lookup(L"hello"sv);
        c.TryLookup(L"hello"sv);
        c.HasKey(L"hello"sv);
        c.Remove(L"hello"sv);
        c.Insert(L"hello"sv, 1);

        IMapView<hstring, int> v = c.GetView();
        v.Lookup(L"hello"sv);
        v.TryLookup(L"hello"sv);
        v.HasKey(L"hello"sv);
    }
    
    {
        uint32_t index = 0;
        single_threaded_vector<int>().GetView().IndexOf(0, index);
        single_threaded_vector<int>().IndexOf(0, index);
        single_threaded_vector<int>().InsertAt(0, 0);
        single_threaded_vector<int>({ 0 }).SetAt(0, 0);
        single_threaded_vector<int>().Append(0);
        single_threaded_map<int, int>(std::map<int, int>{ {0, 0} }).GetView().Lookup(0);
        single_threaded_map<int, int>().GetView().TryLookup(0);
        single_threaded_map<int, int>().GetView().HasKey(0);
        single_threaded_map<int, int>(std::map<int, int>{ {0, 0} }).Lookup(0);
        single_threaded_map<int, int>().TryLookup(0);
        single_threaded_map<int, int>().HasKey(0);
        single_threaded_map<int, int>().Insert(0, 0);
        single_threaded_map<int, int>(std::map<int, int>{ {0, 0} }).Remove(0);

        single_threaded_vector<hstring>().GetView().IndexOf(L"", index);
        single_threaded_vector<hstring>().IndexOf(L"", index);
        single_threaded_vector<hstring>().InsertAt(0, L"");
        single_threaded_vector<hstring>({ L"" }).SetAt(0, L"");
        single_threaded_vector<hstring>().Append(L"");
        single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"", L""} }).GetView().Lookup(L"");
        single_threaded_map<hstring, hstring>().GetView().TryLookup(L"");
        single_threaded_map<hstring, hstring>().GetView().HasKey(L"");
        single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"", L""} }).Lookup(L"");
        single_threaded_map<hstring, hstring>().TryLookup(L"");
        single_threaded_map<hstring, hstring>().HasKey(L"");
        single_threaded_map<hstring, hstring>().Insert(L"", L"");
        single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"", L""} }).Remove(L"");

        single_threaded_map<hstring, int>(std::map<hstring, int>{ {L"", 0} }).GetView().Lookup(L"");
        single_threaded_map<hstring, int>().GetView().TryLookup(L"");
        single_threaded_map<hstring, int>().GetView().HasKey(L"");
        single_threaded_map<hstring, int>(std::map<hstring, int>{ {L"", 0} }).Lookup(L"");
        single_threaded_map<hstring, int>().TryLookup(L"");
        single_threaded_map<hstring, int>().HasKey(L"");
        single_threaded_map<hstring, int>().Insert(L"", 0);
        single_threaded_map<hstring, int>(std::map<hstring, int>{ {L"", 0} }).Remove(L"");

        single_threaded_map<int, hstring>(std::map<int, hstring>{ {0, L""} }).GetView().Lookup(0);
        single_threaded_map<int, hstring>().GetView().TryLookup(0);
        single_threaded_map<int, hstring>().GetView().HasKey(0);
        single_threaded_map<int, hstring>(std::map<int, hstring>{ {0, L""} }).Lookup(0);
        single_threaded_map<int, hstring>().TryLookup(0);
        single_threaded_map<int, hstring>().HasKey(0);
        single_threaded_map<int, hstring>().Insert(0, L"");
        single_threaded_map<int, hstring>(std::map<int, hstring>{ {0, L""} }).Remove(0);
    }
}
