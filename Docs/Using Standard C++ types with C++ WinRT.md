Using standard C++ with C++/WinRT APIs
======================================

You use standard C++ data types, algorithms, and keywords when using the C++/WinRT projection of Windows Runtime APIs. This differs considerably from the C++/CX approach that requires you to learn and use its customs types, e.g. Platform::String\^, Platform::Vector\^ and others, custom keywords and syntax.

While C++/WinRT has its own custom data types, in most cases, you do not need to learn them as they provide appropriate conversions to/from standard C++ data types.

With C++/WinRT, simply use the standard C++ language features that you are accustomed to using. Here are some examples.

Using string types with C++/WinRT APIs
---------------------------------------------------

```C++
  #include "winrt\Windows.Foundation.h"

  using namespace winrt::Windows::Foundation;

  // Pass a C++ literal as the WinRT string param for a constructor

  Uri first(L"http://www.microsoft.com");

  // Pass a std::wstring as the WinRT string param to a method

  std::wstring relative = L"surface";

  Uri combined = first.CombineUri(relative);

  // Assign a WinRT string return value to a std::wstring var

  std::wstring fullpath = combined.ToString();

  // WinRT string type has many std:wstring accessors, e.g. c_str()

  printf("%ls\n", combined.ToString().c_str());
```

Using STL data types with C++/WinRT APIs
----------------------------------------

We provide the appropriate constructors for our C++/WinRT projected classes. This allows you to use standard C++ constructs like an initializer list as arguments to appropriate constructors and methods.

```C++
  using namespace winrt::Windows::Devices::Sms;

  SmsBinaryMessage message;

  // Initializer list implicitly converts to WinRT byte array

  Message.SetData({ 1, 2, 3 });
```

When a Windows Runtime API returns a WinRT array, C++/WinRT provides the necessary functionality to allow you to use STL algorithms on it.

```C++
  // GetData returns a WinRT byte array over which the std::find algorithm iterates

  auto data = message.GetData();

  auto it = std::find(data.begin(), data.end(), 2);

  assert(*it == 2);
```

Similarly, when you have STL containers, you can pass them as parameters to WinRT APIs expecting a semantically equivalent collection.

```C++
  using namespace Windows::Devices::Streams;

  DataReader reader = ...

  // Read the bytes into a std::array

  std::array<byte, 3> a;

  reader.ReadBytes(a);

  // Read the bytes into a std::vector

  std::vector<byte> b(3);

  reader.ReadBytes(b);
```

Standard C++ iteration just works with WinRT collections
--------------------------------------------------------

A Windows Runtime collection works as a C++ container so you can use standard iteration constructs over WinRT collections.

```C++
  Uri uri(L"http://www.microsoft.com/feed");

  SyndicationClient client;

  // Returns a Windows Runtime collection

  auto feed = co_await client.RetrieveFeedAsync(uri);

  // WinRT collections "just work" as C++ containers

  for (auto && item : feed.Items()) {

    auto title = item.Title().Text();

    printf("%ls\n", title.c_str());

  }
```

Using C++ co-routines with C++/WinRT asynchronous methods
------------------------------------------------------------------

You can continue to use PPL when calling WinRT asynchronous methods. However, in many cases, the new C++ co-routine functionality provides an efficient and more easily coded idiom for interacting with WinRT asynchronous methods.

```C++
  future<hstring> OcrOperation() {

    auto file = co_await StorageFile::GetFileFromPathAsync(L"…");

    auto stream = co_await file.OpenAsync(FileAccessMode::Read);

    auto decoder = co_await BitmapDecoder::CreateAsync(stream);

    auto bitmap = co_await decoder.GetSoftwareBitmapAsync();

    auto engine = OcrEngine::TryCreateFromUserProfileLanguages();

    auto result = co_await engine.RecognizeAsync(bitmap);

    return result.Text();

  }
```
