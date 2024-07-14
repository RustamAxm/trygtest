cmake_minimum_required(VERSION 3.24)
project(trygtets)

set(CMAKE_CXX_STANDARD 20)

enable_testing()
add_subdirectory(googletest)
add_executable(trygtets main.cpp)
target_link_libraries(trygtets gtest_main gmock_main)
