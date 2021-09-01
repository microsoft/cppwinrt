#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::ApplicationModel::DataTransfer;
using namespace Windows::Foundation;

//
// These are some basic implementations of runtime classes used for testing event consumption.
//

struct TestSplashScreen : implements<TestSplashScreen, ISplashScreen>
{
    operator SplashScreen() const noexcept
    {
        SplashScreen result = nullptr;
        copy_from_abi(result, to_abi<ISplashScreen>(this));
        return result;
    }

    event<TypedEventHandler<SplashScreen, Windows::Foundation::IInspectable>> m_dismissed;

    Rect ImageLocation()
    {
        m_dismissed(*this, nullptr);

        return {};
    }

    event_token Dismissed(const TypedEventHandler<SplashScreen, Windows::Foundation::IInspectable> & handler)
    {
        return m_dismissed.add(handler);
    }

    void Dismissed(event_token cookie)
    {
        m_dismissed.remove(cookie);
    }
};

struct TestClipboardStatics : implements<TestClipboardStatics, IClipboardStatics>
{
    event<EventHandler<IInspectable>> m_contentChanged;

    DataPackageView GetContent() const { return nullptr; }
    void Flush() const {}
    void Clear() const {}

    void SetContent(const DataPackage &)
    {
        m_contentChanged(*this, nullptr);
    }

    event_token ContentChanged(const EventHandler<IInspectable> & handler)
    {
        return m_contentChanged.add(handler);
    }

    void ContentChanged(event_token token)
    {
        m_contentChanged.remove(token);
    }
};

struct TestClipboard
{
    static IClipboardStatics GetStatics()
    {
        static IClipboardStatics s_statics = make<TestClipboardStatics>();
        return s_statics;
    }

    static void SetContent(const DataPackage & content)
    {
        GetStatics().SetContent(content);
    }

    static event_token ContentChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & changeHandler)
    {
        return GetStatics().ContentChanged(changeHandler);
    }

    using ContentChanged_revoker = impl::factory_event_revoker<IClipboardStatics, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged>;

    static ContentChanged_revoker ContentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & changeHandler)
    {
        auto factory = GetStatics();
        return{ factory, factory.ContentChanged(changeHandler) };
    }

    static void ContentChanged(event_token token)
    {
        GetStatics().ContentChanged(token);
    }
};

//
// This test ensures that the projection produces the correct auto_revoke functionality
// for instance events.
//

TEST_CASE("consuming instance events")
{
    ISplashScreen s = make<TestSplashScreen>();
    uint32_t count = 0;

    SplashScreen::Dismissed_revoker // revoke type alias is present
        revoker = s.Dismissed(auto_revoke, // auto_revoke value is required
                              [&](auto && ...)
                              {
                                  ++count;
                              });

    REQUIRE(s.ImageLocation() == Rect{}); // fire event
    REQUIRE(count == 1); // handler was called

    revoker.revoke();
    revoker.revoke(); // redundant revoke is harmless

    REQUIRE(s.ImageLocation() == Rect{}); // fire event
    REQUIRE(count == 1); // count is unchanged so handler was not called

    {
        SplashScreen::Dismissed_revoker // revoke type alias is present
            scoped = s.Dismissed(auto_revoke, // auto_revoke value is required
                                  [&](auto && ...)
        {
            ++count;
        });

        REQUIRE(s.ImageLocation() == Rect{}); // fire event
        REQUIRE(count == 2); // handler was called

        // destructor revokes automatically
    }

    REQUIRE(s.ImageLocation() == Rect{}); // fire event
    REQUIRE(count == 2); // count is unchanged so handler was not called
}

//
// This test ensures that the revoker works with factory events.
//

TEST_CASE("consume factory events")
{
    uint32_t count = 0;

    Clipboard::ContentChanged_revoker // revoke type alias is present
        revoker = TestClipboard::ContentChanged(auto_revoke, // auto_revoke value is required
                                                [&](auto && ...)
                                                {
                                                    ++count;
                                                });

    TestClipboard::SetContent(nullptr);

    REQUIRE(count == 1); // handler was called

    revoker.revoke();
    revoker.revoke(); // redundant revoke is harmless

    TestClipboard::SetContent(nullptr);
    REQUIRE(count == 1); // count is unchanged so handler was not called

    {
        Clipboard::ContentChanged_revoker // revoke type alias is present
            scoped = TestClipboard::ContentChanged(auto_revoke, // auto_revoke value is required
                                                   [&](auto && ...)
                                                   {
                                                       ++count;
                                                   });

        TestClipboard::SetContent(nullptr); // fire event
        REQUIRE(count == 2); // handler was called

        // destructor revokes automatically
    }

    TestClipboard::SetContent(nullptr); // fire event
    REQUIRE(count == 2); // count is unchanged so handler was not called
}
