#include "component_c.h"
#include "catch.hpp" // Assuming you've added catch2 as a component

TEST_CASE("component_c_function returns double the input", "[component_a]") {
    REQUIRE(component_c_function(5) == 10);
    REQUIRE(component_c_function(-2) == -4);
}