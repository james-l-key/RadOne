#include "rll.h"
#include "catch.hpp" // Assuming you've added catch2 as a component

TEST_CASE("rll_function returns double the input", "[rll]") {
    REQUIRE(rll_function(5) == 10);
    REQUIRE(rll_function(-2) == -4);
}