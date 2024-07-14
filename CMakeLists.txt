cmake_minimum_required(VERSION 3.24)
project(trygtets)

set(CMAKE_CXX_STANDARD 20)
include_directories(.)
enable_testing()
add_subdirectory(googletest)

set(SRC_FILES src/sample1.cpp src/sample1.h main.cpp)
set(TEST_FILES test/sample1_unittest.cpp test/test_main.cpp)
add_executable(trygtets ${TEST_FILES} ${SRC_FILES})
target_link_libraries(trygtets gtest_main gmock_main)
