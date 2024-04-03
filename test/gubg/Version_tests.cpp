#include <gubg/Version.hpp>

#include <catch2/catch_test_macros.hpp>

TEST_CASE("gubg.Version tests", "[ut][Version]")
{
    gubg::Version v{.major = 1, .minor = 2, .patch = 3};
    REQUIRE(v.to_str() == "1.2.3");
    REQUIRE(v.to_str("Version_") == "Version_1.2.3");
}
