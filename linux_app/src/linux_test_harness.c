#define CATCH_CONFIG_MAIN  // This tells Catch2 to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "component_a.h"

TEST_CASE("Component A Linux Tests", "[linux][component_a]") {
    REQUIRE(component_a_function(5) == 10);
}

// No need for a custom main() if you define CATCH_CONFIG_MAIN
