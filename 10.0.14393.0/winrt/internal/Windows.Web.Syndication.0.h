// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Web::Syndication {

struct RetrievalProgress;
struct TransferProgress;

}

namespace Windows::Web::Syndication {

using RetrievalProgress = ABI::Windows::Web::Syndication::RetrievalProgress;
using TransferProgress = ABI::Windows::Web::Syndication::TransferProgress;

}

namespace ABI::Windows::Web::Syndication {

struct ISyndicationAttribute;
struct ISyndicationAttributeFactory;
struct ISyndicationCategory;
struct ISyndicationCategoryFactory;
struct ISyndicationClient;
struct ISyndicationClientFactory;
struct ISyndicationContent;
struct ISyndicationContentFactory;
struct ISyndicationErrorStatics;
struct ISyndicationFeed;
struct ISyndicationFeedFactory;
struct ISyndicationGenerator;
struct ISyndicationGeneratorFactory;
struct ISyndicationItem;
struct ISyndicationItemFactory;
struct ISyndicationLink;
struct ISyndicationLinkFactory;
struct ISyndicationNode;
struct ISyndicationNodeFactory;
struct ISyndicationPerson;
struct ISyndicationPersonFactory;
struct ISyndicationText;
struct ISyndicationTextFactory;
struct SyndicationAttribute;
struct SyndicationCategory;
struct SyndicationClient;
struct SyndicationContent;
struct SyndicationFeed;
struct SyndicationGenerator;
struct SyndicationItem;
struct SyndicationLink;
struct SyndicationNode;
struct SyndicationPerson;
struct SyndicationText;

}

namespace Windows::Web::Syndication {

struct ISyndicationAttribute;
struct ISyndicationAttributeFactory;
struct ISyndicationCategory;
struct ISyndicationCategoryFactory;
struct ISyndicationClient;
struct ISyndicationClientFactory;
struct ISyndicationContent;
struct ISyndicationContentFactory;
struct ISyndicationErrorStatics;
struct ISyndicationFeed;
struct ISyndicationFeedFactory;
struct ISyndicationGenerator;
struct ISyndicationGeneratorFactory;
struct ISyndicationItem;
struct ISyndicationItemFactory;
struct ISyndicationLink;
struct ISyndicationLinkFactory;
struct ISyndicationNode;
struct ISyndicationNodeFactory;
struct ISyndicationPerson;
struct ISyndicationPersonFactory;
struct ISyndicationText;
struct ISyndicationTextFactory;
struct SyndicationAttribute;
struct SyndicationCategory;
struct SyndicationClient;
struct SyndicationContent;
struct SyndicationError;
struct SyndicationFeed;
struct SyndicationGenerator;
struct SyndicationItem;
struct SyndicationLink;
struct SyndicationNode;
struct SyndicationPerson;
struct SyndicationText;

}

namespace Windows::Web::Syndication {

enum class SyndicationErrorStatus
{
    Unknown = 0,
    MissingRequiredElement = 1,
    MissingRequiredAttribute = 2,
    InvalidXml = 3,
    UnexpectedContent = 4,
    UnsupportedFormat = 5,
};

enum class SyndicationFormat
{
    Atom10 = 0,
    Rss20 = 1,
    Rss10 = 2,
    Rss092 = 3,
    Rss091 = 4,
    Atom03 = 5,
};

enum class SyndicationTextType
{
    Text = 0,
    Html = 1,
    Xhtml = 2,
};

}

}
