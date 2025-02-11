cmake_minimum_required(VERSION 3.15)
project(linux_app)

add_executable(linux_test_harness src/linux_test_harness.c) # Use the correct filename consistently

target_link_libraries(linux_test_harness PRIVATE espressif__catch2 component_a) # Link with Catch2 component (assuming it's registered as 'espressif__catch2')

target_include_directories(linux_test_harness PRIVATE
    /home/phi/Programming/Esp32/RadOne/main/include
    /home/phi/Programming/Esp32/RadOne/components/component_a/include
    # ... other include directories
    /home/phi/Programming/Esp32/RadOne/managed_components/espressif__catch2 # Include path to the Catch2 library (check the correct location in your managed components)
)
