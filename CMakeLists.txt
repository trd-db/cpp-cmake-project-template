cmake_minimum_required(VERSION 3.0.0)
project(HELLO)

set(CMAKE_CXX_STANDARD 11)

enable_testing ()

add_subdirectory(src)
add_subdirectory(tests)