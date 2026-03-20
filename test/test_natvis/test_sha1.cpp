#include "pch.h"
#include "natvis_type_helpers.h"

using namespace natvis_helpers;

namespace
{
    // Convert SHA-1 result array to hex string for easy comparison
    std::string sha1_to_hex(std::array<uint8_t, 20> const& hash)
    {
        std::string result;
        result.reserve(40);
        for (auto b : hash)
        {
            char buf[3];
            sprintf_s(buf, "%02x", b);
            result += buf;
        }
        return result;
    }
}

TEST_CASE("sha1 empty input", "[sha1]")
{
    std::vector<uint8_t> input;
    auto hash = calculate_sha1(input);
    REQUIRE(sha1_to_hex(hash) == "da39a3ee5e6b4b0d3255bfef95601890afd80709");
}

TEST_CASE("sha1 known vector - abc", "[sha1]")
{
    // RFC 3174 test vector: "abc"
    std::string msg = "abc";
    std::vector<uint8_t> input(msg.begin(), msg.end());
    auto hash = calculate_sha1(input);
    REQUIRE(sha1_to_hex(hash) == "a9993e364706816aba3e25717850c26c9cd0d89d");
}

TEST_CASE("sha1 known vector - longer string", "[sha1]")
{
    // RFC 3174 test vector: "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq"
    std::string msg = "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq";
    std::vector<uint8_t> input(msg.begin(), msg.end());
    auto hash = calculate_sha1(input);
    REQUIRE(sha1_to_hex(hash) == "84983e441c3bd26ebaae4aa1f95129e5e54670f1");
}

TEST_CASE("sha1 deterministic", "[sha1]")
{
    std::string msg = "test determinism";
    std::vector<uint8_t> input(msg.begin(), msg.end());
    auto hash1 = calculate_sha1(input);
    auto hash2 = calculate_sha1(input);
    REQUIRE(hash1 == hash2);
}

TEST_CASE("sha1 single byte boundary", "[sha1]")
{
    // Test with exactly 55 bytes (fits in one block with padding)
    std::vector<uint8_t> input(55, 0x61); // 55 'a's
    auto hash = calculate_sha1(input);
    // Just verify it produces a valid 20-byte hash without crashing
    REQUIRE(hash.size() == 20);
}

TEST_CASE("sha1 block boundary", "[sha1]")
{
    // Test with exactly 56 bytes (requires two blocks with padding)
    std::vector<uint8_t> input(56, 0x61); // 56 'a's
    auto hash = calculate_sha1(input);
    REQUIRE(hash.size() == 20);
}

TEST_CASE("sha1 multi-block input", "[sha1]")
{
    // Test with more than 64 bytes (multiple blocks)
    std::vector<uint8_t> input(200, 0x42);
    auto hash = calculate_sha1(input);
    REQUIRE(hash.size() == 20);

    // Verify different input gives different hash
    input[0] = 0x43;
    auto hash2 = calculate_sha1(input);
    REQUIRE(hash != hash2);
}
