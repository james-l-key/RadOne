#include "component_b.h"
#include "catch.hpp" // Assuming you've added catch2 as a component

TEST_CASE("component_b_function returns double the input", "[component_a]") {
    REQUIRE(component_b_function(5) == 10);
    REQUIRE(component_b_function(-2) == -4);
}