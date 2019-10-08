#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Media::Audio;

//
// This test merely asserts that we can both consume and produce the ILimiterEffectDefinition
// interface that regretably has an interface member called 'Release' and thus can cause
// trouble for the standard C++ projection where 'Release' is part of the underlying fabric
// inherited from COM's IUnknown interface.
//

struct test_Release : implements<test_Release, ILimiterEffectDefinition>
{
    uint32_t m_release { 0 };
    uint32_t m_loudness { 0 };

    void Release(uint32_t value) noexcept
    {
        m_release = value;
    }

    uint32_t Release() const noexcept
    {
        return m_release;
    }

    void Loudness(uint32_t value) noexcept
    {
        m_loudness = value;
    }

    uint32_t Loudness() const noexcept
    {
        return m_loudness;
    }
};

TEST_CASE("Release")
{
    ILimiterEffectDefinition definition = make<test_Release>();

    definition.Release(123);
    REQUIRE(definition.Release() == 123);

    definition.Loudness(456);
    REQUIRE(definition.Loudness() == 456);
}
