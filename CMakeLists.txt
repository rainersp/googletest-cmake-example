cmake_minimum_required(VERSION 3.13)
project(googletest-cmake-example)

add_library(cxx-compiler-flags INTERFACE)
target_compile_features(cxx-compiler-flags INTERFACE cxx_std_14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)

###############
### Testing ###
###############

enable_testing()
add_subdirectory(test)
