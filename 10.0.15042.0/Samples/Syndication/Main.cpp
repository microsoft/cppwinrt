#include "pch.h"

using namespace winrt;

using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;

IAsyncAction Sample()
{
    Uri uri(L"http://kennykerr.ca/feed");
    SyndicationClient client;
    SyndicationFeed feed = co_await client.RetrieveFeedAsync(uri);

    for (SyndicationItem item : feed.Items())
    {
        hstring title = item.Title().Text();

        printf("%ls\n", title.c_str());
    }
}

int main()
{
    init_apartment();

    Sample().get();
}
