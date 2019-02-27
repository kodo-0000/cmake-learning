cmake_minimum_required(VERSION 2.8)

project(HELLO CXX)

message(STATUS "cmake and gtest")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(hello_world src/hello_world.cc)
