#include "filter.h"
#include "catch.hpp" // Assuming you've added catch2 as a component

TEST_CASE("filter_function returns double the input", "[filter]") {
    REQUIRE(filter_function(5) == 10);
    REQUIRE(filter_function(-2) == -4);
}