cmake_minimum_required(VERSION 3.13)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

# an executable for the sample test
add_executable(Sample_test)
target_sources(Sample_test PRIVATE main.cpp sampleTest.cpp)

target_link_libraries(Sample_test 
   GTest::GTest
   cxx-compiler-flags
)

add_test(NAME Sample_test
         COMMAND Sample_test)

# an executable for testing the Addition class
add_executable(runAddition_test)
target_sources(runAddition_test PRIVATE main.cpp AdditionTest.cpp)

target_link_libraries(runAddition_test
    GTest::GTest
    googletest-cmake-example_lib
    cxx-compiler-flags
)

add_test(NAME runAddition_test
         COMMAND runAddition_test)
