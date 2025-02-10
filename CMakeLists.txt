cmake_minimum_required(VERSION 3.15)

project(RadOne)

set(CMAKE_CXX_STANDARD 17) # Or your preferred C++ standard

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# Add components
add_component(component_a)
add_component(component_b)
add_component(component_c)
add_component(component_d)

# Add Catch2 as a component (downloaded into the components folder or using git submodule)
add_component(catch2)

# Linux app
add_subdirectory(linux_app)

# Set target for ESP32 app
idf_build_ext()
