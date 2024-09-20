cmake_minimum_required(VERSION 3.13)

# define library first
add_library(googletest-cmake-example_lib)
target_sources(googletest-cmake-example_lib PRIVATE Addition.cpp) 
target_include_directories(googletest-cmake-example_lib PUBLIC ../include)

# then introduce the executable
add_executable(googletest-cmake-example)
target_sources(googletest-cmake-example PRIVATE main.cpp)
target_link_libraries(googletest-cmake-example PUBLIC
	googletest-cmake-example_lib
	cxx-compiler-flags
)

