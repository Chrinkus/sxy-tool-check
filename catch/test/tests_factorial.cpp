#include <catch2/catch.hpp>

#include "maths.hpp"

TEST_CASE("factorial computes correct answers", "[factorial]") {

    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3'628'800);
}

