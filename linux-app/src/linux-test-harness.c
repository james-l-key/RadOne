#include <stdio.h>
#include "component_a.h" // Include headers of components you want to test
#include "catch.hpp" // This will be provided by the ESP-IDF component

TEST_CASE("Component A Linux Tests", "[linux][component_a]") {
    REQUIRE(component_a_function(5) == 10);
    }

    // Add more test cases here.

    int main(int argc, char* argv[]) {
        return Catch::Session().run(argc, argv);
        }
        