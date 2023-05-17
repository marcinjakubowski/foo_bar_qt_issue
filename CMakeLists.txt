cmake_minimum_required(VERSION 3.26.0)

project(
    FooBar
    VERSION 0.0.1
    DESCRIPTION "Demo for Qt issue"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(foo)
add_subdirectory(bar)
