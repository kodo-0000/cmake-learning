cmake_minimum_required(VERSION 2.8)

project(GTEST CXX)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/third/googletest-release-1.8.1)

add_subdirectory(third)
add_subdirectory(src)