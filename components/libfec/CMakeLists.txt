# CMakeLists.txt for libfec component

idf_component_register(
    SRCS "fec.h" "viterbi27.c"  # Ensure this is a source file, typically it should be a .c file
    INCLUDE_DIRS "."  # Include the current directory for headers
    REQUIRES ""  # Add any required components if needed
)

